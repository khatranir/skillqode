#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Entrer n : ";
    cin >> n;

    do
    {

        cout << " " << i * 2;
        i++;

    } while (i <= n);
    return 0;
}