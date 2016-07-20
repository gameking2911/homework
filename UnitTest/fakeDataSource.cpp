#include "fakeDataSource.h"

fakeDataSource::fakeDataSource()
{
	length = 0;
}

fakeDataSource::~fakeDataSource()
{
}

tuple fakeDataSource::getInfo(const std::string& Barcode)
{
	for (int i = 0; i < length; i++)
		if (data[i].barcode == Barcode)
			return data[i];
}

void fakeDataSource::setInfo(std::string barcode, std::string name, double price)
{
	data[length ++].barcode = barcode;
	data[length ].name = name;
	data[length ].price = price;
}
