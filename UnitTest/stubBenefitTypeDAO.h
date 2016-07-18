#pragma once
#ifndef _STUBBENEFITTYPEDAO_H_
#define _STUBBENEFITTYPEDAO_H_
#include "recognition.h"
#include "BenefitTypeDAO.h"

class stubBenefitTypeDAO:public BenefitTypeDAO
{
public:
	stubBenefitTypeDAO();
	virtual ~stubBenefitTypeDAO();

public:
	void setType(int type);
	int getType();

private:
	int m_type;

};


#endif
#pragma once
