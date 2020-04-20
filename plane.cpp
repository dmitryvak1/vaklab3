#include "plane.h"
#include <iostream>
#include "transport.h"

using namespace std;

plane::plane(int valplaces, int valspeed, int valhours):transport(valplaces, valspeed)
{
	if (!SetHours(valhours))
    {
        hours = 0;
    }
    hours=valhours;
}
plane::plane()
{
	hours = 0;
}
plane::plane(const plane &objcopy)
{
    places = objcopy.places;
	speed = objcopy.speed;
	hours = objcopy.hours;
}
bool plane::SetHours(int valhours)
{
    if (valhours < 0)
    {
       return false;
    }
    else{hours=valhours;}
}
int plane::GetHours()const
{
    return hours;
}
void plane::print () const
{
	cout << places << "/" <<speed<< "/"<<hours<<"\n\n";
}
