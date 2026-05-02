#include <iostream>
using namespace std;

class Shape 
{
public:
    virtual double area() = 0; 
};
class Rectangle : public Shape 
{
private:
    double length, width;

public:
    Rectangle(double l, double w) 
	{
        length = l;
        width = w;
    }

    double area() override 
	{
        return length * width;
    }
};

// Derived class: Circle
class Circle : public Shape 
{
private:
    double radius;

public:
    Circle(double r) 
	{
        radius = r;
    }

    double area() override 
	{
        return 3.1416 * radius * radius;
    }
};

int main() 
{
    Shape* s;   
    Rectangle rect(10, 5);
    Circle circ(7);
    s = &rect;
    cout << "Area of Rectangle: " << s->area() << endl;
    s = &circ;
    cout << "Area of Circle: " << s->area() << endl;

    return 0;
}
