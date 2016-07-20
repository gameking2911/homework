#include "fakeDataSource.h"

fakeBenefitTypeSource::fakeBenefitTypeSource()
{
}

fakeBenefitTypeSource::~fakeBenefitTypeSource()
{
}

fakeBenefitTypeSource::getInfo(const std::string& Barcode)
{
	return data[Barcode];
}