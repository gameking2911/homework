#pragma once
#include <string>

struct tuple_benefit
{
	std::string barcode;
	//bool benefit_one;//buy2free1
	//bool benefit_two;//95discount
	int benefit_type;//1.buy2free1 2. 95discount 3.95discount and buy2free1
};

class BenefitTypeSource
{
public:
	BenefitTypeSource();
	virtual ~BenefitTypeSource();
	tuple_benefit getInfo(const std::string& barcode);
private:
	tuple_benefit data[10];
	int length;
};
