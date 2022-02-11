#include<iostream>
#include<string>
#include<memory>
#include<cstring>
#include"trc20asset.h"

Trc20Asset::Trc20Asset(const std::string & asset_name, const std::string & asset_abbreviation, long long asset_amount, long long asset_precision, const Account& contract_address) : Asset(asset_name, asset_abbreviation, asset_amount, asset_precision), contract_address(contract_address)
{}

Trc20Asset::~Trc20Asset()
{
}
