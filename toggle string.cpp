#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    string bulbs;
    cin >> bulbs;

    // try every l from 1 to n
    for (int l = 1; l <= n; l++)
      {

        int operations = 0;

        for (int i = 0; i < n; ) 
        {
            if (bulbs[i] == '1') 
            {
                operations++;   // use operation
                i += l;         // skip l bulbs
            } else
            {
                i++;
            }
        }

        // if valid, print answer and stop
        if (operations <= k) 
        {
            cout << l << endl;
            break;
        }
    }

    return 0;
}
