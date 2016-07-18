#include "ItemGenerator.h"

ItemGenerator::ItemGenerator(GoodsDAO* gdao, BenefitTypeDAO* bdao)
{
	m_gdao = gdao;
	m_bdao = bdao;
}

ItemGenerator::~ItemGenerator()
{

}

double ItemGenerator::getSum()
{
	return m_sum;
}

double ItemGenerator::getSaved()
{
	return m_saved;
}
