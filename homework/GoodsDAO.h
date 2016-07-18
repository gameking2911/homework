#pragma once
#ifndef _GOODSDAO_H_
#define _GOODSDAO_H_
#include <string>
#include "recognition.h"
class GoodsDAO
{
public:
	GoodsDAO(Recognition*);
	virtual ~GoodsDAO();

public:
	std::string getName(const std::string&);
	int getPrice(const std::string&);
	std::string getName(const std::string& barcode);
private:

};


#endif
