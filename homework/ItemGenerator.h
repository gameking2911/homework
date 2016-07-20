#pragma once
#ifndef _ITEMGENERATOR_H_
#define _ITEMGENERATOR_H_
#include "GoodsDAO.h"
#include "BenefitTypeDAO.h"
class ItemGenerator
{
public:
	ItemGenerator(GoodsDAO* gdao, BenefitTypeDAO* bdao,Recognition* );
	virtual ~ItemGenerator();

public:

	double getSum(const std::string input);
	double getSaved(const std::string input);

private:
	double m_sum;
	double m_saved;
	GoodsDAO* m_gdao;
	BenefitTypeDAO* m_bdao;
	Recognition* m_recognition;
};


#endif
