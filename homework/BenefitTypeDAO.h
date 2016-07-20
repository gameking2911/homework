#pragma once
#ifndef _BENEFITTYPEDAO_H_
#define _BENEFITTYPEDAO_H_
#include "recognition.h"
#include "BenefitTypeSource.h"
class BenefitTypeDAO
{
public:
	BenefitTypeDAO(BenefitTypeSource*);
	BenefitTypeDAO();

	virtual ~BenefitTypeDAO();

public:
	int getType(const std::string&);
private:
	BenefitTypeSource* pDataSource;

};


#endif
