
#ifndef TIC_TAC_TOES_FIRSTAI_H
#define TIC_TAC_TOES_FIRSTAI_H


#include <vector>
#include <tuple>
#include "../game_logic/PlayGround.h"
#include "Player.h"

class FirstAI : public Player{
	char sign;
	using Player::Player;
	using Player::get_sign;
public:

	void make_turn(PlayGround& pl) const;


};


#endif //TIC_TAC_TOES_FIRSTAI_H
