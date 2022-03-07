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

AssetType Asset::getType() const
{
    return AssetType::Unknown;
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

bool Asset::operator<(const Asset & a) const{
    if(this->getType()!=a.getType())
    {
        return this->getType()<a.getType();
    }else if(this->getName()!=a.getName()){
        return this->getName()<a.getName();
    }else{
        if(this->getType()==AssetType::TRC10)
        {
            //todo
            return true;
        }else{
            //todo
            return false;
        }
    }
}
