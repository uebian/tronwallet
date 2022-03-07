#ifndef ASSET_H
#define ASSET_H
 
#include<iostream>
#include<string>

enum AssetType{
    TRC10,
    TRC20,
    Unknown
};

class Asset
{
	private:
		std::string asset_name;
		std::string asset_abbreviation;
        unsigned long long asset_precision;
	public:
        Asset(const std::string & asset_name, const std::string & asset_abbreviation, unsigned long long asset_precision);
        const std::string& getName() const;
        const std::string& getSymbol() const;
        long long getDecimals() const;
        bool operator < (const Asset&) const;
        virtual AssetType getType() const;
        virtual ~Asset();
};

#endif
