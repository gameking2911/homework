#include "DataSource.h"

DataSource::DataSource()
{
	length = 0;
}

DataSource::~DataSource()
{
}


tuple DataSource::getInfo(const std::string& Barcode)
{
	for (int i = 0; i < length; i++)
		if (data[i].barcode == Barcode)
			return data[i];
}

