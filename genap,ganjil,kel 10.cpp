#include <iostream>
using namespace std;

int main() {
    // Looping dari 1 hingga 30
    for (int i = 1; i <= 30; i++) {
        // Jika i kelipatan 10, lewati iterasi
        if (i % 10 == 0) {
            continue;
        }

        // Jika i kelipatan 5, cetak "skibidi"
        if (i % 5 == 0) {
            cout << i << ": skibidi" << endl;
        }
        // Jika i genap, cetak "mewing"
        else if (i % 2 == 0) {
            cout << i << ": mewing" << endl;
        }
    }

    return 0;
}
