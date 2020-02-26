cmake_minimum_required(VERSION 3.7.2)

project(GameApp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../Library)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../GraphicsSfml)

aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})
#target_link_libraries(${PROJECT_NAME} GameLib)
target_link_libraries(${PROJECT_NAME} GraphicsSfml)
