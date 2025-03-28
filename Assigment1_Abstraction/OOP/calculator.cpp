#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) { 
        if (b == 0) throw invalid_argument("Cannot divide by zero");
        return a / b;
    }
};

int main() {
    Calculator calc;
    double input1, input2;
    cout << "Enter the first number: ";
    cin >> input1;
    cout << "Enter the second number: ";
    cin >> input2;

    cout << "Addition: " << calc.add(input1, input2) << endl;
    cout << "Subtraction: " << calc.subtract(input1, input2) << endl;
    cout << "Multiplication: " << calc.multiply(input1, input2) << endl;
    
    try {
        cout << "Division: " << calc.divide(input1, input2) << endl;
    } catch (exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}
