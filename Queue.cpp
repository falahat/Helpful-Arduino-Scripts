
#include "Queue.h";

template <size_t bufferSize>
Queue<bufferSize>::Queue()
{
	this->readings = {};
}

template <size_t bufferSize>
void Queue<bufferSize>::add(float value)
{
	this->currentIndex = (this->currentIndex + 1) % bufferSize;

	this->readings[this->currentIndex];
}
