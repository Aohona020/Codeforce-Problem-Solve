#include <bits/stdc++.h>
    using namespace std;

    void printLove(int n)
    {
        if(n == 0) return;  // base case (stop)

        cout << "I love Recursion\n";
        printLove(n - 1);   // recursive call
    }

    int main()
    {
        int n;
        cin >> n;

        printLove(n);
    }
