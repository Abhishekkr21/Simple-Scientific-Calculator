#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Enter the first number: ";
    if (!(cin >> num1)) {
        cout << "Invalid input. Expected a number." << endl;
        return 1;
    }

    cout << "Enter the second number (if needed): ";
    if (!(cin >> num2)) {
        cout << "Invalid input. Expected a number." << endl;
        return 1;
    }

    cout << "Enter the operation (+, -, *, /, s (sin), c (cos), t (tan), l (log), e (exp)): ";
    cin >> operation;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "Cannot divide by zero." << endl;
            return 1;
        }
        result = num1 / num2;
        break;
    case 's':
        result = sin(num1);
        break;
    case 'c':
        result = cos(num1);
        break;
    case 't':
        result = tan(num1);
        break;
    case 'l':
        result = log10(num1);
        break;
    case 'e':
        result = exp(num1);
        break;
    default:
        cout << "Invalid operator" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
