#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 10) {
        cout << i << endl;
        i++;
    }

    cout << endl;

    i = 10;

    while (i >= 1) {
        cout << i << endl;
        i--;
    }

    return 0;
}
