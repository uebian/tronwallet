#ifndef ASSET_H
#define ASSET_H
 
#include<iostream>
#include<string>

class Asset
{
	private:
		std::string asset_name;
		std::string asset_abbreviation;
		long long asset_amount;
		long long asset_precision;
	public:
		Asset(const std::string & asset_name, const std::string & asset_abbreviation, long long asset_amount, long long asset_precision);
        const std::string& getName() const;
		~Asset();
};

#endif
