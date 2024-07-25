#include <iostream>
#include <cmath>
using namespace std;

template <class t>
class SimpleCalculator
{
public:
    void Addition(t x, t y);
    void Substraction(t x, t y);
    void Multiplication(t x, t y);
    void Division(t x, t y);
    void Power(t x, t y);
    void SquareRoot(t x);
    void Modulus(t x, t y);
};

int main()
{
    SimpleCalculator<double> sc;
    int choice;
    double x, y;

    cout << "Simple Calculator in C++ with class template" << endl;

    do
    {
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Power" << endl;
        cout << "6. Square Root" << endl;
        cout << "7. Modulus" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter first number : ";
            cin >> x;
            cout << "Enter second number : ";
            cin >> y;
            sc.Addition(x, y);
            break;
        case 2:
            cout << "Enter first number : ";
            cin >> x;
            cout << "Enter second number : ";
            cin >> y;
            sc.Substraction(x, y);
            break;
        case 3:
            cout << "Enter first number : ";
            cin >> x;
            cout << "Enter second number : ";
            cin >> y;
            sc.Multiplication(x, y);
            break;
        case 4:
            cout << "Enter first number : ";
            cin >> x;
            cout << "Enter second number : ";
            cin >> y;
            sc.Division(x, y);
            break;
        case 5:
            cout << "Enter base number: ";
            cin >> x;
            cout << "Enter exponent number: ";
            cin >> y;
            sc.Power(x, y);
        case 6:
            cout << "Enter number to find square root: ";
            cin >> x;
            sc.SquareRoot(x);
        case 7:
            cout << "Enter first number : ";
            cin >> x;
            cout << "Enter second number : ";
            cin >> y;
            sc.Modulus(x, y);
            break;
        case 8:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 8);

    return 0;
}

template <class t>
void SimpleCalculator<t>::Addition(t x, t y)
{
    cout << "Addition is : " << x + y << endl;
}

template <class t>
void SimpleCalculator<t>::Substraction(t x, t y)
{
    cout << "Subtraction is : " << x - y << endl;
}

template <class t>
void SimpleCalculator<t>::Multiplication(t x, t y)
{
    cout << "Multiplication is : " << x * y << endl;
}

template <class t>
void SimpleCalculator<t>::Division(t x, t y)
{
    if (y != 0)
        cout << "Division is : " << x / y << endl;
    else
        cout << "Cannot divide by zero." << endl;
}

template <class t>
void SimpleCalculator<t>::Power(t x, t y)
{
    cout << "Power of " << x << "to " << y << " is : " << pow(x, y) << endl;
}

template <class t>
void SimpleCalculator<t>::SquareRoot(t x)
{
    cout << " Square Root is : " << sqrt(x) << endl;
}

template <class t>
void SimpleCalculator<t>::Modulus(t x, t y)
{
    if (y != 0)
        cout << "Modulus is : " << (int)x % (int)y << endl;
    else
        cout << "Cannot calculate modulus with zero." << endl;
}
