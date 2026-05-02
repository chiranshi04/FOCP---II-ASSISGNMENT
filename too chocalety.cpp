#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        // Sort descending
        sort(A.begin(), A.end(), greater<int>());

        int alex = 0, bob = 0;
        int turn = 0; // 0 = Alex, 1 = Bob

        for (int i = 0; i < N; i++) {
            // skip duplicates
            if (i > 0 && A[i] == A[i - 1])
              continue;

            if (turn == 0) 
            {
                alex += A[i];
                turn = 1;
            } else {
                bob += A[i];
                turn = 0;
            }
        }

        if (alex > bob)
            cout << "Alex\n";
        else
            cout << "Bob\n";
    }

    return 0;
}
