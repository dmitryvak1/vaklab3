#include "bus.h"
#include <string>
#include <iostream>

using namespace std;

bus::bus(int valplaces,int valspeed,string valmarka):automobile(valplaces, valspeed, valmarka){}
bus::bus(const bus &objcopy)
{
    places = objcopy.places;
	speed = objcopy.speed;
	marka = objcopy.marka;
}
void bus::print () const
{
	cout << places << "/" <<speed<< "/"<<marka<<"\n\n";
}
