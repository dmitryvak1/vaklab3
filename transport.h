#ifndef LIBR_H
#define LIBR_H

#include <iostream>
#include <string>

using namespace std;

class transport
{
protected:
     int places;
      int speed;

public:

	transport();
    transport(int valsplaces, int valspeed);
	transport(const transport &objcopy);

	bool SetPlaces(int valplaces);
	int GetPlaces();

	bool SetSpeed(int valspeed);
	int GetSpeed();

	virtual	void  print ()const=0;
};

#endif
