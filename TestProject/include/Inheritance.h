/*
 * Inheritance.h
 *
 *  Created on: May 17, 2020
 *      Author: gifritz
 */

#ifndef INHERITANCE_H_
#define INHERITANCE_H_

class Entity {
public:
	float X,Y;
	Entity();
	void Move(float xa, float ya);
};

class Player : public Entity{
public:
	const char* Name;
public:
	void PrintName();
};


#endif /* INHERITANCE_H_ */
