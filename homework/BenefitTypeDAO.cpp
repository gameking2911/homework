#include "BenefitTypeDAO.h"

BenefitTypeDAO::BenefitTypeDAO(data)
{

}

BenefitTypeDAO::~BenefitTypeDAO()
{

}

std::string BenefitTypeDAO::getName(const std::string& barcode)
{
	return data->getInfo(barcode)->name;
}

std::string BenefitTypeDAO::getPrice(const std::string& barcode)
{
	return data[barcode]->price;
}
