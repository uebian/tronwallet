#include<string>
#include<iostream>
#include"asset.h"

Asset::Asset(const std::string & asset_name, const std::string & asset_abbreviation, long long asset_amount, long long asset_precision)
{
	this->asset_name=asset_name;
	this->asset_abbreviation=asset_abbreviation;
	this->asset_amount=asset_amount;
	this->asset_precision=asset_precision;
}

Asset::~Asset()
{
}

const std::string& Asset::getName() const{
    return this->asset_name;
}
