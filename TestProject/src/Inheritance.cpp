/*
 * Inheritance.cpp
 *
 *  Created on: May 17, 2020
 *      Author: gifritz
 */
#include "Inheritance.h"
#include <iostream>

Entity::Entity() {
	X=0.0f; Y=0.0f;
}

void Entity::Move(float xa, float ya) {
	X += xa;
	Y += ya;
}

void Player::PrintName() {
	std::cout << Name << std::endl;
}

//	Player player;
//	player.Name="Paul";
//	player.PrintName();
//	player.Move(1.2, 2.3);
//	player.Move(-1.4, 2.3);
//	std::cout << player.X << std::endl;
