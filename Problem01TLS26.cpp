#include <iostream>
using namespace std;

void eliminasiAstronaut(int astronaut[], int &jumlah, int posisi) {
    for (int i = posisi; i < jumlah - 1; i++) {
        astronaut[i] = astronaut[i + 1];
    }

    jumlah--;
}

int main() {
    int N, K;

    cout << "Masukkan jumlah astronaut: ";
    cin >> N;

    cout << "Masukkan nilai K: ";
    cin >> K;

    int astronaut[100];

    for (int i = 0; i < N; i++) {
        astronaut[i] = i + 1;
    }

    int jumlah = N;
    int posisi = 0;

    cout << "Urutan eliminasi: ";

    while (jumlah > 1) {

        posisi = (posisi + K - 1) % jumlah;

        int yangDieliminasi = astronaut[posisi];

        cout << yangDieliminasi << " ";

        eliminasiAstronaut(astronaut, jumlah, posisi);

        if (yangDieliminasi % 2 == 0) {
            K += 2;
        } 
        else {
            K -= 1;

            if (K < 2) {
                K = 2;
            }
        }
    }

    cout << "Astronaut terakhir yang bertahan: "
         << astronaut[0] << endl;

    return 0;
}
