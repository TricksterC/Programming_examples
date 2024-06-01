#include <iostream>

using namespace std;

int main() {
    int a[10];

    cout << "Enter the 10 elements:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++) {
        cout << a[i] << ",";
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }

    return 0;
}
