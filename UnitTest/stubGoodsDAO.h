#pragma once
#ifndef _STUBGOODSDAO_H_
#define _STUBGOODSDAO_H_
#include <string>
#include "GoodsDAO.h"

class stubGoodsDAO:public GoodsDAO
{
public:
	stubGoodsDAO();
	virtual ~stubGoodsDAO();

public:
	void setName(std::string name);
	void setPrice(int price);

	std::string getName();
	double getPrice();

private:
	std::string m_name;
	double m_price;
};

#endif
