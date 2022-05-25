#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Entrer n : ";
    cin >> n;
    i = n;
    do
    {
        cout << " " << i;
        i++;
    } while (i <= n);
    return 0;
}