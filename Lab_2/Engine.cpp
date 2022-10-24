#include "Engine.h"

double Engine::getVolume() {
    return volume;
}
double Engine::getPower() {
    return power;
}
string Engine::getSerialNumber() {
    return serialNumber;
}
Engine::Engine() {
    volume = 0;
    power = 0;
    serialNumber = "";
}
Engine::Engine(double volumeValue, double powerValue, string serialNumberValue) {
    volume = volumeValue;
    power = powerValue;
    serialNumber = serialNumberValue;
}
Engine::~Engine() {
    cout << "\n Destructor of engine" << endl;
}