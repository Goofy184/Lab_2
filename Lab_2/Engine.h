#pragma once
#include <string>
#include <iostream>
using namespace std;

class Engine {
private:
    double volume;
    double power;
    string serialNumber;

public:
    double getVolume();
    double getPower();
    string getSerialNumber();
    Engine();
    Engine(double volumeValue, double powerValue, string serialNumberValue);
    ~Engine();
};

