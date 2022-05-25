#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter number";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "given" << a << "numer is even.";
    }

    else
    {
        cout << "given" << a << "numer is odd.";
    }
    return 0;
}