
#ifndef TIC_TAC_TOES_PLAYER_H
#define TIC_TAC_TOES_PLAYER_H
#include "../game_logic/PlayGround.h"

class Player {
	char sign;
public:
	Player(char sign_);

	char get_sign() const;

	virtual void make_turn(PlayGround& pl) const = 0;

};


#endif //TIC_TAC_TOES_PLAYER_H
