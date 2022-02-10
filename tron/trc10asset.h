#ifndef TRC10ASSET_H
#define TRC10ASSET_H

#include<iostream>
#include<string>
#include"asset.h"

class Trc10Asset : public Asset
{
	private:
	public:
		Trc10Asset(const std::string & asset_name, const std::string & asset_abbreviation, long long asset_amount, long long asset_precision);
		~Trc10Asset();
};

#endif
