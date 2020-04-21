#include "steamboat.h"

using namespace std;

steamboat::steamboat(int valplaces, int valspeed, int valaqua):transport(valplaces, valspeed)
{
	if (!SetAqua(valaqua))
    {
        aqua = 0;
    }

}
steamboat::steamboat()
{
	aqua = 0;
}
steamboat::steamboat(const steamboat &objcopy)
{
    places = objcopy.places;
	speed = objcopy.speed;
	aqua = objcopy.aqua;
}
bool steamboat::SetAqua(int valaqua)
{
    if (valaqua < 0)
    {
       return false;
    }
    else{aqua=valaqua;
    return true;}
}
int steamboat::GetAqua()const
{
    return aqua;
}
void steamboat::print () const
{
	cout << places << "/" <<speed<< "/"<<aqua<<"\n\n";
}
