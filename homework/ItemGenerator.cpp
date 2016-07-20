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
	if (bdao->getType() == 0x0001)
	{
		int free_num = m_recognition->getNumber() / 3;

		int sum = (m_recognition->getNumber() - free_num) * gdao->getPrice();
	}

	else
	{
		int sum = m_recognition->getNumber()*gdao->getPrice()*0.95;
	}

	return sum;
}

double ItemGenerator::getSaved()
{
	if (bdao->getType() == 0x0001)
	{
		int free_num = m_recognition->getNumber() / 3;
		int saved = free_num * gdao->getPrice();
	}
	else
	{
		int saved = m_recognition->getNumber()*gdao->getPrice()*0.95;


	}

	return saved;
}
