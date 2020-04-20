#include "transport.h"
#include <string>


transport::transport(int valplaces, int valspeed){

    if (!SetPlaces(valplaces))
    {
        places = 0;
    }
    places = valplaces;

    if (!SetSpeed(valspeed))
    {
        speed = 0;
    }
speed = valspeed;
}
transport::transport() {
	places = 10;
	speed = 100;
}
bool transport::SetPlaces(int valplaces) {
    if (valplaces < 0)
    {
       return false;
    }
    else{places=valplaces;}
}
bool transport::SetSpeed(int valspeed) {
    if (valspeed < 0)
    {
       return false;
    }
    else{speed=valspeed;}
}
int transport::GetPlaces() { return places;}
int transport::GetSpeed() { return speed;}
