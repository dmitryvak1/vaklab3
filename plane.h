#ifndef PLANE_H_INCLUDED
#define PLANE_H_INCLUDED

#include "transport.h"

using namespace std;

class plane : public transport
{
private:
     int hours;
public:
	plane();
	plane(int valplaces, int valspeed, int valhours);
	plane(const plane &objcopy);

	bool SetHours(int valhours);
	int GetHours();

    void print ()const;
};
#endif
