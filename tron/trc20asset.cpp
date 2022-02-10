#include<iostream>
#include<string>
#include<memory>
#include"trc20asset.h"

Trc20Asset::Trc20Asset(const std::string & asset_name, const std::string & asset_abbreviation, long long asset_amount, long long asset_precision, unsigned char* asset_address) : Asset(asset_name, asset_abbreviation, asset_amount, asset_precision)
{
	memcpy(this->asset_address,address,21);
}

Trc20Asset::~Trc20Asset()
{
}
