#include <iostream>
using namespace std;

class Bank
{
public:
    int id[100] = {0};
    int money[100] = {0};

    bool CREATE(int x, int y)
    {
        if                                   (id[x] == 0)
        {
            id[x] = 1;
            money[x] = y;
            return true;
        }
        else
        {
            money[x] = money[x] + y;
            return false;
        }
    }

    bool DEBIT(int x, int y)
    {
        if (id[x] == 0 || money[x] < y)
            return false;

        money[x] = money[x] - y;
        return true;
    }

    bool CREDIT(int x, int y)
    {
        if (id[x] == 0)
            return false;

        money[x] = money[x] + y;
        return true;
    }

    int BALANCE(int x)
    {
        if (id[x] == 0)
            return -1;

        return money[x];
    }
};

int main()
{
    int q;
    cin >> q;

    Bank obj;

    while (q--)
    {
        string s;
        cin >> s;

        if (s == "CREATE")
        {
            int x, y;
            cin >> x >> y;
            cout << obj.CREATE(x, y) << endl;
        }

        else if (s == "DEBIT")
        {
            int x, y;
            cin >> x >> y;
            cout << obj.DEBIT(x, y) << endl;
        }

        else if (s == "CREDIT")
        {
            int x, y;
            cin >> x >> y;
            cout << obj.CREDIT(x, y) << endl;
        }

        else if (s == "BALANCE")
        {
            int x;
            cin >> x;
            cout << obj.BALANCE(x) << endl;
        }
    }

    return 0;
}
