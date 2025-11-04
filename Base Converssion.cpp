#include <bits/stdc++.h>
    using namespace std;

    void binary(int n)
    {
        if(n == 0) return;

        binary(n / 2);
        cout << n % 2;
    }

    int main()
    {
        int t, n;
        cin >> t;

        while(t--)
        {
            cin >> n;
            binary(n);
            cout << endl;
        }
    }
