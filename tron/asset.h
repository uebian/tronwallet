#ifndef ASSET_H
#define ASSET_H
 
#include<iostream>
#include<string>

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
		~Asset();
};

#endif
