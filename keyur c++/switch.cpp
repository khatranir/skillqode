#include <iostream>
using namespace std;
void showchoices();
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);
int main()
{
    float x, y;
    int choice;
    do
    {
        showchoices();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter two numbers : ";
            cin >> x >> y;
            cout << "sum" << add(x, y) << endl;
            break;
        case 2:
            cout << "Enter two number : ";
            cin >> x >> y;
            cout << "sum" << subtract(x, y) << endl;
            break;
        case 3:
            cout << "Enter two number : ";
            cin >> x >> y;
            cout << "sum" << multiply(x, y) << endl;
            break;
        case 4:
            cout << "Enter two number : ";
            cin >> x >> y;
            cout << "Quotient" << divide(x, y) << endl;
            break;
        case 5:
            break;
        default:
            cout << "Invalid input " << endl;
        }
    } while (choice != 5);
    return 0;
}
void showchoises()
{
    cout << "MENU" << endl;
    cout << " 1 : Add" << endl;
    cout << " 2 : subtract" << endl;
    cout << " 3 : multiply" << endl;
    cout << " 4 : divide" << endl;
    cout << " Enter your choice : ";
}
float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    return a / b;
}
