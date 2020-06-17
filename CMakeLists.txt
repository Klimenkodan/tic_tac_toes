cmake_minimum_required(VERSION 3.15)
project(tic_tac_toes)

set(CMAKE_CXX_STANDARD 14)

add_executable(tic_tac_toes main.cpp game_logic/PlayGround.cpp game_logic/PlayGround.h players/RealPlayer.cpp players/RealPlayer.h players/FirstAI.cpp players/FirstAI.h helper_functions.cpp helper_functions.h players/SecondAI.cpp players/SecondAI.h game_logic/Game.cpp game_logic/Game.h players/Player.cpp players/Player.h)