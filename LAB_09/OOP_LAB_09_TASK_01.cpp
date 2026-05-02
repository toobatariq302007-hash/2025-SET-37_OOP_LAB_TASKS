#include <iostream>
using namespace std;

class Distance 
{
private:
    int feet;
    int inches;

public:
    Distance(int f, int i ) 
	{
        feet = f;
        inches = i;
    }
    bool operator==(Distance d) 
	{
        return (feet == d.feet && inches == d.inches);
    }
    void display() 
	{
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() 
{
    Distance d1(5, 10);
    Distance d2(5, 10);
    if (d1 == d2)
        cout << "Distance are Equal" << endl;
    else
        cout << "Distance are Not Equal" << endl;
    return 0;
}
