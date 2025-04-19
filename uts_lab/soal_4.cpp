#include <iostream>
using namespace std;

int main() { 
    int jumlah_huruf = 0;
    int i = 0;
    char kata[100];

    cout << "Masukkan Mantranya: ";
    cin.getline(kata, 100);
    
    while (kata[i] != '\0') { 
        char v = kata[i];
        if ((v == 'a' || v == 'i' || v == 'u' || v == 'e' || v == 'o') ||
            (v == 'A' || v == 'I' || v == 'U' || v == 'E' || v == 'O')) {
            jumlah_huruf++;
        }
        i++;
    }

    if (jumlah_huruf > 0) {
        cout << "Kekuatan mantra: " << jumlah_huruf << " vokal." << endl;
    } 
    else {
        cout << "Mantra tidak valid! Tidak mengandung vokal." << endl;
    }
    return 0;
}