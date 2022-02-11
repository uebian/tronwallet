#ifndef TRC20ASSET_H
#define TRC20ASSET_H

#include <iostream>
#include <string>
#include <memory>
#include "account.h"
#include "asset.h"

class Trc20Asset : public Asset
{
	private:
        Account contract_address;
	public:
        Trc20Asset(const std::string & asset_name, const std::string& asset_abbreviation, long long asset_amount, long long asset_precision, const Account& contract_address);
		~Trc20Asset();
};

#endif
