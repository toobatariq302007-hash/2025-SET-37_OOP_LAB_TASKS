#include <iostream>
using namespace std;

class Vehicle {
protected:
    string type;

public:
    Vehicle(string t) {
        type = t;
        cout << "Vehicle Constructor Called: " << type << endl;
    }
};

class Car : public Vehicle {
protected:
    string brand;

public:
    Car(string t, string b) : Vehicle(t) {
        brand = b;
        cout << "Car Constructor Called: " << brand << endl;
    }
};

class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    ElectricCar(string t, string b, int bc) : Car(t, b) {
        batteryCapacity = bc;
        cout << "ElectricCar Constructor Called: " 
             << batteryCapacity << " kWh battery" << endl;
    }
};

int main() 
{
    ElectricCar e("Vehicle", "Tesla", 75);
    return 0;
}
