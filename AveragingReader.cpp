// 
// 
// 

#include "AveragingReader.h"

AveragingReader::AveragingReader(Supplier* innerSupplier) : Mapper(innerSupplier) {
	this->currentAverage = 0;
}

float AveragingReader::map(float newValue) {
    float weightOfCurrentValue = 0.5;

    int currentSensorValue = this->innerSupplier->get();

    this->currentAverage = (this->currentAverage * weightOfCurrentValue) + currentSensorValue * (1 - weightOfCurrentValue);
    
    return currentAverage;
}

