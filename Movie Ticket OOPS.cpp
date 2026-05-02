#include <iostream>
using namespace std;

class MovieTicket
{
public:
    int seat[100] = {0};
    int user[100][100] = {0};

    bool BOOK(int x, int y)
    {
        if (user[x][y] == 1 || seat[y] == 100)
            return false;

        user[x][y] = 1;
        seat[y]++;
        return true;
    }

    bool CANCEL(int x, int y)
    {
        if (user[x][y] == 0)
            return false;

        user[x][y] = 0;
        seat[y]--;
        return true;
    }

    bool IS_BOOKED(int x, int y)
    {
        if (user[x][y] == 1)
            return true;
        else
            return false;
    }

    int AVAILABLE_TICKETS(int y)
    {
        return 100 - seat[y];
    }
};

int main()
{
    int q;
    cin >> q;

    MovieTicket obj;

    while (q--)
    {
        string s;
        cin >> s;

        if (s == "BOOK")
        {
            int x, y;
            cin >> x >> y;
            cout << obj.BOOK(x, y) << endl;
        }

        else if (s == "CANCEL")
        {
            int x, y;
            cin >> x >> y;
            cout << obj.CANCEL(x, y) << endl;
        }

        else if (s == "IS_BOOKED")
        {
            int x, y;
            cin >> x >> y;
            cout << obj.IS_BOOKED(x, y) << endl;
        }

        else if (s == "AVAILABLE_TICKETS")
        {
            int y;
            cin >> y;
            cout << obj.AVAILABLE_TICKETS(y) << endl;
        }
    }

    return 0;
}
