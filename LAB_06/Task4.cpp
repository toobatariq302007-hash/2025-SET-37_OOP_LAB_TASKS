#include <iostream>
using namespace std;

class Device
{
protected:
    string *deviceName;
    int *deviceID;

public:
    Device(string n, int id)
    {
        deviceName = new string(n);
        deviceID = new int(id);
    }

    virtual ~Device()
    {
        cout << "Device Destructor Called" << endl;
        delete deviceName;
        delete deviceID;
    }
};

class Sensor : public Device
{
private:
    string *sensorType;
    double *sensorValue;

public:
    Sensor(string n, int id, string type, double value)
        : Device(n, id)
    {
        sensorType = new string(type);
        sensorValue = new double(value);
    }

    ~Sensor()
    {
        cout << "Sensor Destructor Called" << endl;
        delete sensorType;
        delete sensorValue;
    }
};

int main()
{
    Device *obj = new Sensor("DeviceA", 101, "Temperature", 36.5);

    delete obj;

    return 0;
}
