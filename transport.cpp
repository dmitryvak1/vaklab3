#include "transport.h"
#include <string>


transport::transport(int valplaces, int valspeed){

    if (!SetPlaces(valplaces))
    {
        places = 0;
    }
    if (!SetSpeed(valspeed))
    {
        speed = 0;
    }
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
    else{places=valplaces;
    return true;}
}
bool transport::SetSpeed(int valspeed) {
    if (valspeed < 0)
    {
       return false;
    }
    else {speed=valspeed;
return true;}

}
int transport::GetPlaces() const{ return places;}
int transport::GetSpeed() const{ return speed;}
