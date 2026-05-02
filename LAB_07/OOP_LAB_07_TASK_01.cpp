#include <iostream>
using namespace std;

class Display {
private:
    double lastResult;

public:
    Display() {
        lastResult = 0;
    }

    void showResult(double result) {
        lastResult = result;
        cout << "Result: " << result << endl;
    }

    double getLastResult() {
        return lastResult;
    }
};

class Calculator {
private:
    Display display; 

public:
    void add(double a, double b) {
        double result = a + b;
        display.showResult(result); 
    }

    void multiply(double a, double b) {
        double result = a * b;
        display.showResult(result); 
    }

    void showLastResult() {
        cout << "Last Result: " << display.getLastResult() << endl;
    }
};

int main() 
{
    Calculator calc;

    calc.add(10, 5);
    calc.showLastResult();

    calc.multiply(4, 6);
    calc.showLastResult();

    return 0;
}
