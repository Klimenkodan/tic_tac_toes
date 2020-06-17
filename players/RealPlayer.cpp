#include <iostream>
#include "RealPlayer.h"

void RealPlayer::make_turn(PlayGround& pl) const{
	int row_num;
	int col_num;
	while (true){
		std::cout << "please, type in coordinates of the cell, you want to put your sign in" << std::endl;
		std::cout << "select row coordinate" << std::endl;
		std::cin >> row_num;


		std::cout << "select column coordinate" << std::endl;
		std::cin >> col_num;

		if (!pl.valid_turn(row_num, col_num) || !pl.check_if_free(row_num, col_num)) {
			std::cout << "wrong coordinates, try again. cell is either doesn't exists or is occupied" << std::endl;
		continue;
		}

		pl.change(row_num, col_num, get_sign());
		break;
	}

}
