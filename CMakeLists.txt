cmake_minimum_required(VERSION 3.9)

project(GroupProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lmingw32")
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

# Set the directories for SDL2 and SDL_mixer includes
include_directories("C:/libs/include")

link_directories("C:/libs/lib")

add_executable(GroupProject main.cpp UI_Scoring/UI_scoring.h UI_Scoring/UI_scoring.cpp SDL_Plotter/SDL_Plotter.cpp
        SDL_Plotter/SDL_Plotter.h Force/Force.cpp Force/Force.h ball/ball.cpp Screen/screen.h Screen/screen.cpp
        Force/constants.h Blocks/Blocks.h UI_Scoring/scoreTracker.h UI_Scoring/button.h UI_Scoring/button.cpp ball/ball.h
        UI_Scoring/scoreTracker.cpp point.h Blocks/Blocks.cpp Triangle.h Triangle.cpp Menu/menu.h Menu/menu.cpp
        UI_Scoring/constants.h Circle.h Circle.cpp Letters/Letters.h)
target_link_libraries(GroupProject SDL2main SDL2 SDL2_mixer)

