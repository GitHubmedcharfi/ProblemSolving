#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> t(n);

    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    long long nb = 0;

    for (int i = 1; i < n; i++) {
        if (t[i - 1] > t[i]) {
            nb += t[i - 1] - t[i];
            t[i] = t[i - 1];
        }
    }

    cout << nb;

    return 0;
}
