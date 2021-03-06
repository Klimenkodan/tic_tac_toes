#include "FirstAI.h"
#include "../game_logic/PlayGround.h"


void FirstAI::make_turn(PlayGround& pl) const{
	std::vector<std::tuple<int, int>> cells = pl.get_empty_cells();
	int randint = std::rand() % static_cast<int>(cells.size());
	pl.change(std::get<0>(cells[randint]), std::get<1>(cells[randint]), sign);
}