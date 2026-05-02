#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    string name;
    double price;

public:
    Product(string n, double p) {
        name = n;
        price = p;
        cout << "Product Constructor Called" << endl;
    }

    void displayProduct() {
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
    }
};

class Electronics : public Product {
private:
    int warrantyYears;

public:
    Electronics(string n, double p, int w) : Product(n, p) {
        warrantyYears = w;
        cout << "Electronics Constructor Called" << endl;
    }

    void display() {
        displayProduct();
        cout << "Warranty: " << warrantyYears << " years" << endl;
    }
};

int main() 
{
    Electronics e("Laptop", 1200.50, 2);
    cout << endl << "Product Details:" << endl;
    e.display();

    return 0;
}
