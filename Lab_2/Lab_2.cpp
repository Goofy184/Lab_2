#include <iostream>
#include "Engine.h"
#include "Car.h"
using namespace std;

int main()
{

    Engine engine(1.8, 160, "VSC402332");
    Car car(engine, "red", "RZ3250T", "Skoda");

    cout << car.getColour() << endl;

    car.setColour("blue");


    cout << car.getColour() << endl;

    return 0;
}