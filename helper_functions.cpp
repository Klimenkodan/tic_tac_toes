#include "helper_functions.h"

std::vector<std::tuple<int, int>> get_empty_cells(PlayGround& pl) {
	std::vector<std::tuple<int, int>> empty_cells;
	for (int i = 0; i < pl.get_size(); i++) {
		for (int j = 0; j < pl.get_size(); j++) {
			if (pl.check_if_free(i, j))
				empty_cells.emplace_back(i, j);
		}
	}
	return empty_cells;
}

