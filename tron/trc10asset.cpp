#include<iostream>
#include<string>
#include"trc10asset.h"

Trc10Asset::Trc10Asset(const std::string & asset_name, const std::string & asset_abbreviation, long long asset_precision) : Asset(asset_name, asset_abbreviation, asset_precision)
{
}

Trc10Asset::~Trc10Asset()
{
}
