#pragma once
#ifndef _FAKEDATASOURCE_H_
#define _FAKEDATASOURCE_H_
#include <string>

struct tuple
{
	double price;
	std::string name;
};

class  fakeDataSource
{
public:
	 fakeDataSource();
	virtual	~ fakeDataSource();

private:
	hashset[];
};
#endif