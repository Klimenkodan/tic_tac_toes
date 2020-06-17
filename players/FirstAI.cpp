#include "FirstAI.h"
#include "../game_logic/PlayGround.h"
#include "../helper_functions.h"


void FirstAI::make_turn(PlayGround& pl) const{
	std::vector<std::tuple<int, int>> cells = get_empty_cells(pl);
	int randint = std::rand() % static_cast<int>(cells.size());
	pl.change(std::get<0>(cells[randint]), std::get<1>(cells[randint]), sign);
}