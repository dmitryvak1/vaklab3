#ifndef AUTOMOBILE_H_INCLUDED
#define AUTOMOBILE_H_INCLUDED

#include "transport.h"
#include <string>

using namespace std;

class automobile : public transport
{
protected:
     string marka;
public:
	automobile();
	automobile(int valplaces, int valspeed, string valmarka);

	void SetMarka(string valmarka);
	string GetMarka();

   virtual void print ()const = 0;
};

#endif
