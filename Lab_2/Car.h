#include "Engine.h"
#include <string>
#include <iostream>
using namespace std;

class Car {
private:
    Engine engine;
    string colour;
    string registrationNumber;
    string model;

public:
    Engine getEngine();
    string getColour();
    string getRegistrationNumer();
    string getModel();
    void setColour(string colourValue);
    void setRegistrationNumer(string registrationNumberValue);
    Car();
    Car(Engine engineValue, string colourValue, string registrationNumberValue, string modelValue);
    ~Car();
};