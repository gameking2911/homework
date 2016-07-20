#include "ItemGenerator.h"

ItemGenerator::ItemGenerator(GoodsDAO* gdao, BenefitTypeDAO* bdao,Recognition* recognition)
{
	m_gdao = gdao;
	m_bdao = bdao;
	m_recognition = recognition;
}

ItemGenerator::~ItemGenerator()
{

}

double ItemGenerator::getSum(const std::string input)
{

	std::string barcode;
	int number;
	double sum;
	m_recognition->recognize(input, barcode, number);

	if (m_bdao->getType(barcode) == 1)
	{

		int free_num = number / 3;

		sum = (number - free_num) * m_gdao->getPrice(barcode);
	}

	else
	{
		sum = number * m_gdao->getPrice(barcode)*0.95;
	}

	return sum;
}

double ItemGenerator::getSaved(const std::string input)
{
	std::string barcode;
	int number;
	double sum;
	double saved;
	m_recognition->recognize(input, barcode, number);

	if (m_bdao->getType(barcode) == 1)
	{
		int free_num = number / 3;
		saved = free_num * m_gdao->getPrice(barcode);
	}
	else
	{
		saved = number*m_gdao->getPrice(barcode)*0.95;


	}

	return saved;
}
