#include<string>
#include<iostream>
#include"asset.h"

Asset::Asset(const std::string & asset_name, const std::string & asset_abbreviation, unsigned long long asset_precision)
{
	this->asset_name=asset_name;
	this->asset_abbreviation=asset_abbreviation;
	this->asset_precision=asset_precision;
}

Asset::~Asset()
{
}

const std::string& Asset::getName() const{
    return this->asset_name;
}

const std::string& Asset::getSymbol() const{
    return this->asset_abbreviation;
}

long long Asset::getDecimals() const{
    return this->asset_precision;
}

