#include <iostream>
using namespace std;
int main()
{
    int s[23], i, sum = 0, sun = 0;
    for (i = 0; i < 5; i++)
    {
        cout << " a[" << i << "] : ";
        cin >> s[i];
    }
    for (i = 0; i < 5; i++)
    {
        cout << "\ns[" << i << "] : " << s[i];
        if (s[i] % 2 != 0)
            sum = sum + s[i];
        else
            sun = sun + s[i];
    }
    cout << " \nodd position : " << sum;
    cout << " \neven position : " << sun;

    return 0;
}