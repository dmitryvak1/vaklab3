#ifndef BUS_H_INCLUDED
#define BUS_H_INCLUDED

#include "automobile.h"
#include <string>

using namespace std;

class bus : public automobile
{
public:
    bus(int valplaces, int valspeed, string valmarka);
	bus();
    bus(const bus &objcopy);
   void print ()const ;
};
#endif
