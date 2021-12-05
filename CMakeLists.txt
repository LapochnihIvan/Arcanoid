cmake_minimum_required(VERSION 3.20)
project(Arcanoid)

set(CMAKE_CXX_STANDARD 23)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

set(SFML_ROOT_DIR "SFML-2.5.1")

set(SFML_DIR "${SFML_ROOT_DIR}/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS audio graphics window system )

add_executable(Arcanoid main.cpp GUI/GUI.cpp GUI/GUI.h Logic/Racket.cpp Logic/Racket.h Logic/Ball.cpp Logic/Ball.h Logic/Game.cpp Logic/Game.h Logic/Brick.h)

target_link_libraries(Arcanoid sfml-graphics sfml-audio)
