#include <iostream>
using namespace std;
int main()
{
    int s[23], i, sum = 0, sun = 0, n, position = 0;
    for (i = 0; i < 5; i++)
    {
        cout << " a[" << i << "] : ";
        cin >> s[i];
    }
    cout << "\n Elements ";
    for (i = 0; i < 5; i++)
    {
        cout << "\ns[" << i << "] : " << s[i];
    }
    cout << "sersch position of element : ";
    cin >> n;
    for (i = 0; i < 5; i++)
    {

        if (s[i] != n)
        {
            ++position;
        }

        else
        {
        }
    }
    // cout << " \nodd position : " << sum;
    // cout << " \neven position : " << sun;
    cout << "Position is : " << position;
    return 0;
}