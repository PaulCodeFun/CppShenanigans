/*
 * InitializerLists.h
 *
 *  Created on: May 17, 2020
 *      Author: gifritz
 */

#ifndef INITIALIZERLISTS_H_
#define INITIALIZERLISTS_H_

class Something{
private:
    int m_value1;
    double m_value2;
    char m_value3;

public:
    Something(int value1, double value2, char value3='c');
    void print();
};

class Something2{
private:
    const int m_value;

public:
    Something2();
};

#endif /* INITIALIZERLISTS_H_ */
