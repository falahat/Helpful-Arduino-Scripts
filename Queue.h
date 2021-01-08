// FixedLengthBuffer.h

#ifndef _FIXEDLENGTHBUFFER_h
#define _FIXEDLENGTHBUFFER_h


#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


template <size_t bufferSize>
class Queue
{

public:
	float readings[bufferSize];
	int currentIndex;
	
	Queue();

	void add(float value);

	void get(size_t index);
};

#endif

