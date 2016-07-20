#pragma once
#ifndef _FAKEBENEFITTYPESOURCE_H_
#define _FAKEBENEFITTYPESOURCE_H_
#include <string>
#include "..\homework\BenefitTypeSource.h"

//struct tuple_benefit
//{
//	std::string barcode;
//	int benefit_type;
//};

class  fakeBenefitTypeSource : public BenefitTypeSource
{
public:
	fakeBenefitTypeSource();
	virtual	~fakeBenefitTypeSource();

	tuple_benefit getInfo(const std::string& Barcode);
	void setInfo(std::string barcode, int benefit_type);

private:
	tuple_benefit data[10];
	int length;
};
#endif
