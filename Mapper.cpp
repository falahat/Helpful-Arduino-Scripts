// 
// 
// 

#include "Mapper.h"

Mapper::Mapper(Supplier *innerSupplier)
{
	this->innerSupplier = innerSupplier;
}

float Mapper::get()
{
	return this->map(this->innerSupplier->get());
}
