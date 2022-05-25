#include <iostream>
using namespace std;
class bank
{
    int final_balance;

public:
    bank(int n)
    {
        final_balance = n;
    }
    void choices()
    {
        cout << "\n 1 : withdrow";
        cout << "\n 2 : diposite";
        cout << "\n 3 : exit ";
        cout << "\n Enter your choice : ";
    }
    int withdrow(int n)
    {
        final_balance -= n;
        return final_balance;
    }
    int diposite(int n)
    {
        final_balance += n;
        return final_balance;
    }
    int finalbalance()
    {
        return final_balance;
    }
};
int main()
{

    int a, balance, choise;
    cout << " Enter your balance : ";
    cin >> balance;
    bank sbi(balance);
    do
    {
        sbi.choices();
        cin >> choise;
        switch (choise)
        {
        case 1:
            cout << " \nEntrer your withdrow amount : ";
            cin >> a;
            cout << " \nafter balance of withdrow : " << sbi.withdrow(a);
        case 2:
            cout << " \nEnter your diposite amount : ";
            cin >> a;
            cout << " \nafter balance of diposite : " << sbi.diposite(a);
        case 3:
            break;
        default:
            cout << " Invalid number";
        }
    } while (choise != 3);
    cout << " final balance is : " << sbi.finalbalance();
    return 0;
}