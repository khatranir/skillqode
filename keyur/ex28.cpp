#include <iostream>
using namespace std;
int main()
{
    float i = 0.5, a = 0.5, n;
    cout << "Entrer n : ";
    cin >> n;

    do
    {

        cout << " " << a;
        a = a + i;
        i++;

    } while (i <= n);
    return 0;
}