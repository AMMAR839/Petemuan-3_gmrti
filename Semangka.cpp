#include <iostream>
using namespace std;

int main() {
    int W;

    // Input berat semangka
    cout << "Masukkan berat semangka (kg): ";
    cin >> W;

    // Cek apakah semangka bisa dibagi menjadi dua bagian dengan berat genap
    if (W > 2 && W % 2 == 0) {
        cout << "Ya, semangka bisa dibagi menjadi dua bagian dengan berat genap." << endl;
    }
    else {
        cout << "Tidak, semangka tidak bisa dibagi menjadi dua bagian dengan berat genap." << endl;
    }

    return 0;
}
