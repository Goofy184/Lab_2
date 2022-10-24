#include "Car.h"

Engine Car::getEngine() {
    return engine;
}
string Car::getColour() {
    return colour;
}
string Car::getRegistrationNumer() {
    return registrationNumber;
}
string Car::getModel() {
    return model;
}
void Car::setColour(string colourValue) {
    colour = colourValue;
}
void Car::setRegistrationNumer(string registrationNumberValue) {
    registrationNumber = registrationNumberValue;
}
Car::Car() {
    colour = "";
    registrationNumber = "";
    model = "";
}
Car::Car(Engine engineValue, string colourValue, string registrationNumberValue, string modelValue) {
    engine = engineValue;
    colour = colourValue;
    registrationNumber = registrationNumberValue;
    model = modelValue;
}
Car::~Car()
{
    cout << "\n Destructor of car" << endl;
}