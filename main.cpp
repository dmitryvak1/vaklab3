#include <iostream>
#include <string>
#include "transport.h"
#include "automobile.h"
#include "litecar.h"
#include "bus.h"
#include "plane.h"
#include "steamboat.h"

using namespace std;

int main()
{
     int valplaces;
      int valspeed;
      string valmarka;
      int valhours;
      int valaqua;
      int a;
     b:
    cout << "PRESS 1 TO enter car passenger car : "<<endl;
    cout << "PRESS 2 TO enter bus : "<<endl;
    cout << "PRESS 3 TO enter plane : "<<endl;
    cout << "PRESS 4 TO enter steamboat "<<endl;
    cout << "PRESS 5 for EXIT :"<<endl;

    cout << "deystvie : "<<endl;
    cin>>a;

    switch(a){

case 1:
    {
    cout << "Vnesti mesta : "<<endl;
    cin>>valplaces;
    cout << "Vnesti skorostb : "<<endl;
    cin>>valspeed;
    cout << "Vnesti marky : "<<endl;
    cin>>valmarka;
    litecar bmv(valplaces, valspeed, valmarka);
    bmv.print();
    goto b;
    }
case 2:
    {
    cout << "Vnesti mesta : "<<endl;
    cin>>valplaces;
    cout << "Vnesti skorostb : "<<endl;
    cin>>valspeed;
    cout << "Vnesti marky : "<<endl;
    cin>>valmarka;
    bus d18(valplaces, valspeed, valmarka);
    d18.print();
    goto b;
    }
    case 3:
    {
    cout << "Vnesti mesta: "<<endl;
    cin>>valplaces;
    cout << "Vnesti skorostb : "<<endl;
    cin>>valspeed;
    cout << "Vnesti hours : "<<endl;
    cin>>valhours;
    plane il2(valplaces, valspeed, valhours);
    il2.print();
        goto b;
    }
    case 4:
    {
    cout << "Vnesti mesta : "<<endl;
    cin>>valplaces;
    cout << "Vnesti skorostb : "<<endl;
    cin>>valspeed;
    cout << "Vnesti aqua : "<<endl;
    cin>>valaqua;
     steamboat titanik(valplaces, valspeed, valaqua);
    titanik.print();
    goto b;

    }
    case 5:
    {
        return 0;
    }
    }
    }
