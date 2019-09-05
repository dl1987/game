cmake_minimum_required(VERSION 2.8)

project(game)

find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window sfml-system)
