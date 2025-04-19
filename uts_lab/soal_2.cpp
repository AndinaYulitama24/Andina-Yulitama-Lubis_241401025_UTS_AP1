#include <iostream>
using namespace std;

int main() {
    string biner;
    cout << "Input kode biner : ";
    cin >> biner;

    for (char c : biner) {
        if (c != '0' && c != '1') {
            cout << "Pesan Rusak!" << endl;
            return 0;
        }
    }
    
    int desimal = 0;
    for (int i = 0; i < biner.panjang(); i++) {
        desimal = desimal * 2 + (biner[i] - '0');
    }
    
    cout << "Angka desimal dari biner " << biner << " adalah " << desimal << endl;
    return 0;
}