// RangeAdjuster.h

#ifndef _RANGEADJUSTER_h
#define _RANGEADJUSTER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Mapper.h";

class RangeAdjuster : public Mapper
{
 protected:
	 float minValue;
	 float maxValue;

 public:
	 RangeAdjuster(Supplier *innerSupplier, float minValue, float maxValue);

	 float mapToUnitRange();

	 float mapToRange(float minValue, int maxValue);
};

#endif

