#include "../game_logic/PlayGround.h"
#include "Player.h"

#ifndef TIC_TAC_TOES_REALPLAYER_H
#define TIC_TAC_TOES_REALPLAYER_H


class RealPlayer : public Player{
	char sign;
	using Player::Player;
	using Player::get_sign;
public:

	void make_turn(PlayGround& pl) const;

};


#endif //TIC_TAC_TOES_REALPLAYER_H
