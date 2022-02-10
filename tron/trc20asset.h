#ifndef TRC20ASSET_H
#define TRC20ASSET_H

#include<iostream>
#include<string>
#include<memory>
#include"asset.h"

class Trc20Asset : public Asset
{
	private:
		unsigned char asset_address[21];
	public:
		Trc20Asset(const std::string & asset_name, const std::string asset_abbreviation, long long asset_amount, long long asset_precision, unsigned char* asset_address);
		~Trc20Asset();
};

#endif
