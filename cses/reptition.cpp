#include <iostream>
using namespace std;

int main() {
    string s;
    int nb = 1, res = 1;
    cin >> s;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            nb++;
        }
        else {
            nb = 1;
        }
        res = max(res, nb);
    }

    cout << res << endl;
    return 0;
}
