#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin >> n;
    int x=1, y=0, z=0;
        if (n!=0) {
            cout << x << endl;
            for (int i = 1; i <= n; i++) {
                z = x;
                x = x + y;
                y = z;
                if (x > n) {
                    break;
                }
                cout << x << endl;
            }
        }
    return 0;
}
