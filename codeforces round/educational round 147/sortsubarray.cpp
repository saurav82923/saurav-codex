#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), ap(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> ap[i];
        }

        int l = -1, r = -1;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (a[i] != ap[i]) {
                if (!found) {
                    found = true;
                    l = i;
                }
                r = i;
            }
        }

        if (!found) {
            cout << "1 1" << endl;
        } else {
            reverse(a.begin() + l, a.begin() + r + 1);
            if (a == ap) {
                cout << l + 1 << " " << r + 1 << endl;
            } else {
                cout << "impossible" << endl;
            }
        }
    }

    return 0;
}
