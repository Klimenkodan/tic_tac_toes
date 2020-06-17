#include "Player.h"

Player::Player(char sign_) {
	sign = sign_;
}

char Player::get_sign() const{
	return sign;
}