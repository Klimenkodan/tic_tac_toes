
#ifndef TIC_TAC_TOES_SECONDAI_H
#define TIC_TAC_TOES_SECONDAI_H


#include "../game_logic/PlayGround.h"
#include "Player.h"

class SecondAI : public Player{
	char sign;
	using Player::Player;
	using Player::get_sign;
public:

	void make_turn(PlayGround& pl) const;
};


#endif //TIC_TAC_TOES_SECONDAI_H
