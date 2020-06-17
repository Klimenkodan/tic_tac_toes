#include "SecondAI.h"


void SecondAI::make_turn(PlayGround& pl) const{
	for (int i = 0; i < pl.get_size(); i++) {
		for (int j = 0; j< pl.get_size(); j++) {
			if (pl.check_if_free(i, j)) {
				pl.change(i, j, sign);
				return;
			}
		}
	}

}
