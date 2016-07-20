#include "BenefitTypeSource.h"

BenefitTypeSource::BenefitTypeSource()
{
	length = 0;
}

BenefitTypeSource::~BenefitTypeSource()
{
}

tuple_benefit BenefitTypeSource::getInfo(const std::string& Barcode)
{
	for (int i = 0; i < length; i++)
		if (data[i].barcode == Barcode)
			return data[i];
}

