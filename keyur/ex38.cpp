#include <iostream>
using namespace std;

int main()
{
    char str[100], i;
    cout << "Enter a string: ";
    cin.get(str, 100);

    cout << "You entered: " << str << endl;
    for (i = 1; str[i] != '\0'; i++)
        ;
    cout << "length : " << str[i];

    return 0;
}