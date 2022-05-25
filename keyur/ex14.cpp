#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Entrer n : ";
    cin >> n;

    do
    {
        cout << " " << i;
        i++;
    } while (i <= n);
    return 0;
}