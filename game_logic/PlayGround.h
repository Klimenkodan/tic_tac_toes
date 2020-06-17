

#ifndef TIC_TAC_TOES_PLAYGROUND_H
#define TIC_TAC_TOES_PLAYGROUND_H


#include <string>
#include <tuple>
#include <map>
#include <vector>

class PlayGround {
	int size = 3;
	char play_ground[3][3] = {{'_', '_', '_'}, {'_', '_', '_'}, {'_', '_', '_'}};
	int winner = 0;

	char player_signs[2] = {'X', 'O'};

	bool win_row();

	bool win_column();

	bool win_diagonal();
public:
	PlayGround(int x_player);

	bool check_win();

	void display() const;

	bool valid_turn(int x, int y);

	bool check_if_free(int x, int y) const;

	void change(int x, int y, char sign);

	int get_size() const{
		return size;
	}

	int get_winner() const;


	bool check_draw() const;

	std::vector<std::tuple<int, int>> get_empty_cells() const;
};


#endif //TIC_TAC_TOES_PLAYGROUND_H
