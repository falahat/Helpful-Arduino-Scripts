// AnalogReader.h

#ifndef _ANALOGREADER_h
#define _ANALOGREADER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Supplier.h";

class AnalogReader: public Supplier {
public:
    int inputPin;

    AnalogReader(int inputPin);

    float get();

    float getSensorValue();

};
#endif

