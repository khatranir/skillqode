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
        cout << " \n 1 : withdrow ";
        cout << " \n 2 : diposite";
        cout << " \n 3 : Net balance is : ";
        cout << "\n 0 : exit";
        cout << " \n Enter your choice :";
    }
    int withdrow(int a)
    {
        final_balance -= a;
        return final_balance;
    }
    int diposite(int a)
    {
        final_balance += a;
        return final_balance;
    }
    int final()
    {
        return final_balance;
    }
};
int main()
{

    int choice, n, balance;
    // cout << " Your balance : ";
    // cin >> balance;
    bank sbi(30000);
    do
    {
        sbi.choices();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nenter your withdraw : ";
            cin >> n;
            cout << " \nyour withdraw after balnce : " << sbi.withdrow(n);
            break;
        case 2:
            cout << "\nenter your diposite : ";
            cin >> n;
            cout << " \nyour diposite after balnce : " << sbi.diposite(n);
            break;
        case 3:
            cout << " \nYour balance is : " << sbi.final();
            break;
        default:
            cout << "\nInvalid number";
        }
    } while (choice != 3);
    cout << " \nYour final balance is : " << sbi.final();
    return 0;
}