cmake_minimum_required(VERSION 3.9)
project(GroupProject)

# Use C++11 standard
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Find the SDL2 package
find_package(SDL2 REQUIRED)
find_package(SDL2_mixer REQUIRED)

# Set the SDL2_mixer include and library paths manually
set(SDL2_MIXER_INCLUDE_DIRS /usr/local/opt/sdl2_mixer/include/SDL2)
set(SDL2_MIXER_LIBRARIES /usr/local/opt/sdl2_mixer/lib/libSDL2_mixer.dylib)

# Include the directory where SDL_Plotter.h and the SDL2 includes are located
include_directories(SDL_Plotter ${SDL2_INCLUDE_DIRS} ${SDL2_MIXER_INCLUDE_DIRS})

# Add the executable with the source files
add_executable(GroupProject main.cpp UI_Scoring/UI_scoring.h UI_Scoring/UI_scoring.cpp UI_Scoring/UI_score.h SDL_Plotter/SDL_Plotter.cpp)

# Link the SDL2 libraries
target_link_libraries(GroupProject ${SDL2_LIBRARIES} ${SDL2_MIXER_LIBRARIES})
