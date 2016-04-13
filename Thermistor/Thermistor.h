/**********************************************************************************/
/* Thermistor -- manages a 10k Thermistor in the follwing circuit: 				  */
/*     																			  */
/*		(Ground) ---- (10k-Resister) -------|------- (Thermistor) ---- (+5v)	  */
/*                                          |									  */
/*                                      Analog Pin								  */
/*																				  */
/*			code based from code on Arduino playground found here:				  */
/*			http://www.arduino.cc/playground/ComponentLib/Thermistor2			  */
/*																				  */
/*								max mayfield									  */
/*								mm systems										  */
/*								max.mayfield@hotmail.com						  */
/**********************************************************************************/

#ifndef Thermistor_h
#define Thermistor_h

#include "WProgram.h"
#include "math.h"


class Thermistor {
	public:
		Thermistor(int pin);
		Thermistor(int pin, int analogRes);
		double getTemp();
	private:
		int _pin;
		int _analogRes;

};

#endif