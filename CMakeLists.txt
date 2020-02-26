cmake_minimum_required(VERSION 3.7.2)

project(game)

set(CMAKE_CXX_STANDARD 17)

#add_subdirectory(GraphicsSfml)
add_subdirectory(Application)
add_subdirectory(GraphicsSfml)
add_subdirectory(Library)
add_subdirectory(Tests)
