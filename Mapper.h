// Mapper.h

#ifndef _MAPPER_h
#define _MAPPER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Supplier.h"

class Mapper : public Supplier
{
 public:
	Supplier *innerSupplier;

	Mapper(Supplier *innerSupplier);

	float get();
	virtual float map(float input);
};

#endif

