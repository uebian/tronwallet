#ifndef TRC20ASSET_H
#define TRC20ASSET_H

#include <iostream>
#include <string>
#include <memory>
#include "account.h"
#include "asset.h"
#include "tron/tronclient.h"

class Trc20Asset : public Asset
{
	private:
        Account contract_address;
    public:
        Trc20Asset(const std::string & asset_name, const std::string& asset_abbreviation, unsigned long long asset_precision, const Account& contract_address);
        ~Trc20Asset();
        static Trc20Asset loadTrc20Contract(const Account& contract_address,const TronClient* client);
        unsigned long long fetchBalance(const Account &owner, const TronClient *client) const;
        AssetType getType() const;
};

#endif
