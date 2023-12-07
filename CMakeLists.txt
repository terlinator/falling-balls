cmake_minimum_required(VERSION 3.9)

project(GroupProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lmingw32")
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

# Set the directories for SDL2 and SDL_mixer includes
include_directories("C:/libs/include")

link_directories("C:/libs/lib")




add_executable(GroupProject main.cpp SDL_Plotter/SDL_Plotter.cpp
                UI_Scoring/screen.cpp ball/ball.cpp Blocks.cpp
                Force/Force.cpp)
target_link_libraries(GroupProject SDL2main SDL2 SDL2_mixer)
