#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double multiply(double a, double b) {
        return a * b;
    }
};

class Student {
private:
    string name;
    Calculator* calculator; 

public:
    Student(string n, Calculator* calc) {
        name = n;
        calculator = calc;
    }

    void doAddition(double a, double b) {
        double result = calculator->add(a, b);
        cout << name << " got Addition Result: " << result << endl;
    }

    void doMultiplication(double a, double b) {
        double result = calculator->multiply(a, b);
        cout << name << " got Multiplication Result: " << result << endl;
    }
};

int main() 
{
    Calculator sharedCalculator; 

    Student s1("Alice", &sharedCalculator);
    Student s2("Bob", &sharedCalculator);
    Student s3("Charlie", &sharedCalculator);

    s1.doAddition(10, 5);
    s2.doMultiplication(3, 4);
    s3.doAddition(7, 8);

    return 0;
}
