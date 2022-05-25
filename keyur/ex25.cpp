#include <iostream>
using namespace std;
int main()
{
    int i = 1, a = 1, n;
    cout << "Entrer n : ";
    cin >> n;

    do
    {

        cout << " " << i * a;
        i ;
        a++;

    } while (i <= n);
    return 0;
}