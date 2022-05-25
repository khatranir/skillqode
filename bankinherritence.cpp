#include <iostream>
using namespace std;
class bank
{
private:
    float final_balance;

public:
    void setbalance(float n)
    {
        final_balance = n;
    }
    void choices()
    {
        cout << "\n 1 : withdrow ";
        cout << "\n 2 : diposite ";
        cout << "\n 3 : balance inqury ";
        cout << "\n 0 : exit ";
        cout << "\n Enter your choice : ";
    }
    float withdrow(float n)
    {
        final_balance -= n;
        return final_balance;
    }
    float diposite(float n)
    {
        final_balance += n;
        return final_balance;
    }
    float finalbalance()
    {
        return final_balance;
    }
};
class calc : public bank
{
public:
    calc(float n)
    {
        setbalance(n);
    }
    float diposite(float n)
    {
        return calc::diposite(n);
    }
    float withdrow(float n)
    {
        return calc::withdrow(n);
    }
};
int main()
{
    calc c(1000);
    int choice;
    float n;
    do
    {
        c.choices();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n Enter your withdrow amount : ";
            cin >> n;
            cout << "\n after withdrow your amount : " << c.withdrow(n);
            break;
        case 2:
            cout << "\n Enter your diposite amount : ";
            cin >> n;
            cout << "\n After diposite your amount : " << c.diposite(n);
            break;
        case 3:
            cout << "Your final balance : " << c.finalbalance();
        case 9:
            break;
        default:
            cout << "\n invalid choice";
        }
    } while (choice != 0);
    return 0;
}
