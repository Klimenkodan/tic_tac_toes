#include <iostream>
#include "Game.h"
#include "../players/RealPlayer.h"
#include "../players/FirstAI.h"
#include "../players/SecondAI.h"
#include "../players/Player.h"

Game::Game() {
	int first_player;
	int second_player;
	int player_nums[2];
	int sign;
	char signs[2] = {'X', 'O'};
	Player* players[2];
	while(true) {

		std::cout << "Hello, this is a tic-tac toes game." << std::endl;
		while (true) {
			std::cout << "What role does 1st player want to be: AI1(0 for it)," <<
			          "AI2(1 for it), Human(just play by yourself, 2 for it)" << std::endl;

			std::cin >> player_nums[0];
			if (player_nums[0] == 1 || player_nums[0] == 0 || player_nums[0] == 2)
				break;
			std::cout << "input is incorrect, try again" << std::endl;

		}


		while (true) {
			std::cout << "What role does 2nd player want to be, same posibilities and numbers" << std::endl;

			std::cin >> player_nums[1];
			if (player_nums[1] == 1 || player_nums[1] == 0 || player_nums[1] == 2)
				break;
			std::cout << "input is incorrect, try again" << std::endl;

		}
		while (true) {
			std::cout << "what sign does 1st player want to have? (0 for X, 1 for O)" << std::endl;
			std::cin >> sign;
			if (sign == 1 or sign == 0)
				break;
			std::cout << "input is incorrect, try again" << std::endl;
		}

		for (int i = 0; i <= 1; i++) {
			if (player_nums[i] == 0) {
				players[i] = new FirstAI(signs[(sign + i) % 2]);
			} else if (player_nums[i] == 1) {
				players[i] = new SecondAI(signs[(sign + i) % 2]);
			} else {
				players[i] = new RealPlayer(signs[(sign + i) % 2]);
			}
		}


		std::cout << "So let's start, the sign of the first player is " << signs[sign] << " and for the second is "
		          << signs[(sign + 1) % 2] << std::endl;
		////size
		play_ground = PlayGround(sign);
		int turn = 0;
		while (true) {
			play_ground.display();
			std::cout << turn + 1 << " Player turn" << std::endl;
			players[turn]->make_turn(play_ground);
			if (play_ground.check_win()) {
				std::cout << "Congratulations to winner: player " << play_ground.get_winner() << std::endl;
				break;
			} else if (play_ground.check_draw()) {
				std::cout << "Friendship won!!! Congratulations to everyone" << std::endl;
				break;
			}
			play_ground.display();
			turn = (turn + 1) % 2;
		}
		bool play_again;
		char answer;
		std::cout << "Do you want to play again? 'y' for yes, anything else for no" << std::endl;
		std::cin >> answer;
		if (answer != 'y') {
			break;
		}
	}
}