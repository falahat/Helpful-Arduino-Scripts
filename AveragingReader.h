// AveragingReader.h

#ifndef _AVERAGINGREADER_h
#define _AVERAGINGREADER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Mapper.h";

class AveragingReader : public Mapper
{
 protected:
	 float currentAverage;

 public:
	 AveragingReader(Supplier* innerSupplier);

	 float map(float value);
};


#endif

