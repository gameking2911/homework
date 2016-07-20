#include "fakeDataSource.h"

fakeDataSource::fakeDataSource()
{
}

fakeDataSource::~fakeDataSource()
{
}

fakeDataSource::getInfo(const std::string& Barcode)
{
	return data[Barcode];
}