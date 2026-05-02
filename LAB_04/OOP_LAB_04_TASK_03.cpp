#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    Rectangle(float side) {
        length = width = side;
    }
    float area() {
        return length * width;
    }
    void display() {
        cout << "Length: " << length << ", Width: " << width;
        cout << ", Area: " << area() << endl;
    }
};

int main() {
    Rectangle r1;          
    Rectangle r2(5.0, 3.0); 
    Rectangle r3(4.0);      

    cout << "Rectangle 1: ";
    r1.display();

    cout << "Rectangle 2: ";
    r2.display();

    cout << "Rectangle 3: ";
    r3.display();

    return 0;
}
