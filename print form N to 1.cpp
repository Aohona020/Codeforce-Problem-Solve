#include <bits/stdc++.h>
    using namespace std;

    void printReverse(int n) {
        if(n == 0)
            return;

        cout << n;
        if(n > 1) cout << " ";

        printReverse(n - 1);
    }

    int main() {
        int n;
        cin >> n;
        printReverse(n);
    }
