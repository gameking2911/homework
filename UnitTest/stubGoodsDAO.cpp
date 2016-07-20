#include "stdafx.h"
#include "stubGoodsDAO.h"

stubGoodsDAO::stubGoodsDAO()
{

}

stubGoodsDAO::~stubGoodsDAO()
{

}

void stubGoodsDAO::setName(std::string name)
{
	m_name = name;
}

void stubGoodsDAO::setPrice(int price)
{
	m_price = price;
}

std::string stubGoodsDAO::getName()
{
	return m_name;
}

double stubGoodsDAO::getPrice()
{
	return m_price;
}

