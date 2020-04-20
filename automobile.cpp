#include "automobile.h"
#include <string>
#include <iostream>

using namespace std;

automobile::automobile(int valplaces, int valspeed, string valmarka):transport(valplaces, valspeed)
{
	marka=valmarka;
}
automobile::automobile()
{
	marka = "ferari";
}
void automobile::SetMarka(string valmarka)
{
    marka=valmarka;
}
string automobile::GetMarka()const
{
return marka;
}


