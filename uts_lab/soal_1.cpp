#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"masukan kode :";
    cin >> n;

    while (n % 2 == 0) {
        n /= 2;
    }

    if (n == 1) {
        cout << "ya" << endl;
    } else {
        cout << "bukan" << endl;
    }

    return 0;
}