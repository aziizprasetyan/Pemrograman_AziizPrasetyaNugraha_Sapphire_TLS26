#include <iostream>
using namespace std;

int nilaiHuruf(char huruf) {
    return huruf - 'A' + 1;
}

char hurufDariNilai(int nilai) {
    return 'A' + nilai - 1;
}

int main() {
    char pesan[100];

    cout << "Masukkan pesan dalam huruf kapital: ";
    cin >> pesan;

    int panjang = 0;

    while (pesan[panjang] != '\0') {
        panjang++;
    }

    cout << "Pesan terenkripsi: ";

    cout << pesan[0];

    for (int i = 1; i < panjang; i++) {

        int nilaiSekarang = nilaiHuruf(pesan[i]);
        int nilaiSebelumnya = nilaiHuruf(pesan[i - 1]);

        int nilaiBaru = nilaiSekarang + nilaiSebelumnya;

        while (nilaiBaru > 26) {
            nilaiBaru -= 26;
        }

        cout << hurufDariNilai(nilaiBaru);
    }

    cout << endl;

    return 0;
}