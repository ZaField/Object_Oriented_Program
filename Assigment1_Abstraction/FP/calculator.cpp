#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) throw invalid_argument("Cannot divide by zero");
    return a / b;
}

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subtract(num1, num2) << endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;

    try {
        cout << "Division: " << divide(num1, num2) << endl;
    } catch (exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}
