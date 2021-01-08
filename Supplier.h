// Supplier.h

#ifndef _SUPPLIER_h
#define _SUPPLIER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Supplier
{
 public:
	virtual float get() = 0;
};

#endif

