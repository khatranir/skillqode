#include <iostream>
using namespace std;
int main()
{
    int i = 65, n;
    cout << "Entrer n : ";
    cin >> n;

    do
    {

        cout << " " << (char)i;
        i += 2;

    } while (i <= n);
    return 0;
}