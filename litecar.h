#ifndef LITECAR_H_INCLUDED
#define LITECAR_H_INCLUDED

#include "automobile.h"
#include <string>

using namespace std;

class litecar : public automobile
{
public:
    litecar(int valplaces, int valspeed, string valmarka);
	litecar();
    litecar(const litecar &objcopy);
    void print ()const ;
};
#endif
