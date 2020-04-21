#ifndef STEAMBOAT_H_INCLUDED
#define STEAMBOAT_H_INCLUDED

#include "transport.h"

using namespace std;

class steamboat : public transport
{
private:
     int aqua;
public:
	steamboat();
	steamboat(int valplaces, int valspeed, int aqua);
	steamboat(const steamboat &objcopy);

	bool SetAqua(int valaqua);
	int GetAqua()const;

    void print ()const;
};

#endif // STEAMBOAT_H_INCLUDED
