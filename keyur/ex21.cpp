#include <iostream>
using namespace std;
int main()
{
    int i = 65;

    do
    {
        cout << " " << (char)i << "-" << (char)i + 32;
        i++;
    } while (i <= 90);
    return 0;
}