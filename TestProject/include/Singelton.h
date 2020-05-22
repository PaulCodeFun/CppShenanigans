/*
 * Singelton.h
 *
 *  Created on: May 16, 2020
 *      Author: gifritz
 */

#ifndef SINGELTON_H_
#define SINGELTON_H_

class Singelton {
public:
	static Singelton& get(){ 			//return reference so instance will not be copied
		static Singelton instance;		//without static keyword, this instance would be on stack and destroyed at "}". Big error if returning by reference, no error if a copy was returned.
		return instance;				//instance is created first time its called
	}
	void hello();
};

#endif /* SINGELTON_H_ */
