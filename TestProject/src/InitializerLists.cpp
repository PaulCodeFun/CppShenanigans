/*
 * InitializerLists.cpp
 *
 *  Created on: May 17, 2020
 *      Author: gifritz
 */

#include <InitializerLists.h>
#include <iostream>

Something::Something(int value1, double value2, char value3)
		: m_value1(value1), m_value2(value2), m_value3(value3) { // directly initialize our member variables
}

void Something::print() {
	std::cout << "Something(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
}

Something2::Something2() : m_value(5) {
} // directly initialize our const member variable. Assigning a value to it would not be possible.
//See: https://www.learncpp.com/cpp-tutorial/8-5a-constructor-member-initializer-lists/


//in main():
//Something something(1, 2.2); // value1 = 1, value2=2.2, value3 gets default value 'c'
//something.print();
