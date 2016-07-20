#include "fakeBenefitTypeSource.h"

fakeBenefitTypeSource::fakeBenefitTypeSource()
{
	length = 0;
}

fakeBenefitTypeSource::~fakeBenefitTypeSource()
{
}

tuple_benefit fakeBenefitTypeSource::getInfo(const std::string& Barcode)
{
	for (int i = 0; i < length; i++)
		if (data[i].barcode == Barcode)
			return data[i];
}

void fakeBenefitTypeSource::setInfo(std::string barcode, int benefit_type)
{
	data[length++].barcode = barcode;
	data[length].benefit_type = benefit_type;
}
