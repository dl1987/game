cmake_minimum_required(VERSION 3.7.2)

project(gameUT)

if(CMAKE_VERSION VERSION_LESS 3.2)
    set(UPDATE_DISCONNECTED_IF_AVAILABLE "")
else()
    set(UPDATE_DISCONNECTED_IF_AVAILABLE "UPDATE_DISCONNECTED 1")
endif()

include(${CMAKE_CURRENT_SOURCE_DIR}/../DownloadProject.cmake)
download_project(PROJ           googletest
                 GIT_REPOSITORY https://github.com/google/googletest
                 GIT_TAG        master
                 ${UPDATE_DISCONNECTED_IF_AVAILABLE})

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

include_directories("${gtest_SOURCE_DIR}/include"
                    "${gmock_SOURCE_DIR}/include")
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../Library)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})


aux_source_directory(. SRC_LIST)

add_executable(${PROJECT_NAME} ${SRC_LIST})
#target_link_libraries(${PROJECT_NAME} EmergencyLandingLib)
target_link_libraries(${PROJECT_NAME} gmock_main)
