#include "BenefitTypeDAO.h"

BenefitTypeDAO::BenefitTypeDAO(BenefitTypeSource* dataSource)
{
	pDataSource = dataSource;
}

BenefitTypeDAO::BenefitTypeDAO()
{

}

BenefitTypeDAO::~BenefitTypeDAO()
{

}


int BenefitTypeDAO::getType(const std::string& barcode)
{
	return pDataSource->getInfo(barcode).benefit_type;
}
