// 
// 
// 

#include "RangeAdjuster.h"

RangeAdjuster::RangeAdjuster(Supplier *innerSupplier, float minValue, float maxValue) : Mapper(innerSupplier)
{    
	this->minValue = minValue;
	this->maxValue = maxValue;
}

float RangeAdjuster::mapToUnitRange() {
    float totalRange = this->maxValue - this->minValue;
    float distanceFromMinimum = this->innerSupplier->get() - this->minValue;
    return distanceFromMinimum / totalRange;
}

float RangeAdjuster::mapToRange(float minValue, int maxValue) {
    float totalRange = maxValue - minValue;
    return (mapToUnitRange() * totalRange) + minValue;
}