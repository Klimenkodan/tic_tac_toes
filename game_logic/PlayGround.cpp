
#include <iostream>
#include "PlayGround.h"

PlayGround::PlayGround(int x_player) {
	if (x_player != 0) {
		std::swap(player_signs[0], player_signs[1]);
	}

}

bool PlayGround::valid_turn(int x, int y) {
	return (0 <= x && x < size && y < size && 0 <= y);
}

bool PlayGround::check_if_free(int x, int y) const{
	return play_ground[x][y] == '_';
}


void PlayGround::change(int x, int y, char sign) {
	play_ground[x][y] = sign;
}

bool PlayGround::win_row() {

	for (int i = 0; i < size; i++) {
		if (play_ground[i][0] == play_ground[i][1] == play_ground[i][2] && play_ground[i][0] != '_') {
			winner =  play_ground[i][0] == 'X' ? 0 : 1;
			return true;
		}
	}
	return false;
}

bool PlayGround::win_column() {

	for (int i = 0; i < size; i++) {
		if (play_ground[0][i] == play_ground[1][i] == play_ground[2][i] && play_ground[0][i] != '_') {
			winner =  play_ground[i][0] == 'X' ? 0 : 1;
			return true;
		}
	}
	return false;
}

bool PlayGround::win_diagonal() {

	if (((play_ground[0][0] == play_ground[1][1] == play_ground[2][2])\
	|| (play_ground[0][2] == play_ground[1][1] == play_ground[2][0])) && (play_ground[1][1] != '_')) {
		winner =  play_ground[1][1] == 'X' ? 0 : 1;
			return true;
		}
	return false;
}

bool PlayGround::check_win() {
	return win_row() || win_column() || win_diagonal();
}

void PlayGround::display() const{
	std::string repr;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << '|' << play_ground[i][j] << '|';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int PlayGround::get_winner() const {
	return winner;
}


std::vector<std::tuple<int, int>> PlayGround::get_empty_cells() const{
	std::vector<std::tuple<int, int>> empty_cells;
	for (int i = 0; i < get_size(); i++) {
		for (int j = 0; j < get_size(); j++) {
			if (check_if_free(i, j))
				empty_cells.emplace_back(i, j);
		}
	}
	return empty_cells;
}

bool PlayGround::check_draw() const{
	return get_empty_cells().empty();
}
