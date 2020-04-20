#include "litecar.h"
#include <string>
#include <iostream>



using namespace std;

litecar::litecar(int valplaces,int valspeed,string valmarka):automobile(valplaces, valspeed, valmarka)
{
}
    void litecar::print () const
{
	cout << places << " / " <<speed<< " / "<<marka<<"\n\n";
}
litecar::litecar(const litecar &objcopy)
{
    places = objcopy.places;
	speed = objcopy.speed;
	marka = objcopy.marka;
}
