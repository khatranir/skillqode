#include <iostream>
using namespace std;
int main()
{
    int m, e, b, t, p, r;
    cout << "Marks for per paper ";
    cin >> r;
    cout << "Maths : " << r << "=";
    cin >> m;
    cout << "English : " << r << "=";
    cin >> e;
    cout << "Biology : " << r << "=";
    cin >> b;
    t = m + e + b;
    r = r + r + r;
    p = (100 * t) / r;
    cout << "\nTotal : " << t << "/" << r;
    cout << "\nPersentage : " << p << "%";
    return 0;
}