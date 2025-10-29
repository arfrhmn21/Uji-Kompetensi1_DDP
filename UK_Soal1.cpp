#include <iostream>
using namespace std;

int main() {
    const int secondsPerMinute = 60;
    const int secondsPerHour = 60 * secondsPerMinute;

    int inputSec;

    do {
        cout << "Masukkan Bilangan >= 0 (satuan detik): "; cin >> inputSec;

        if (inputSec < 0) {
            cout << "Input tidak valid!" << endl;
        }
    } while (inputSec < 0);
    
    int hour = inputSec / secondsPerHour;
    int remain = inputSec % secondsPerHour;
    int minute = remain / secondsPerMinute;
    int sec = remain % secondsPerMinute;

    cout << inputSec << " detik = " << hour << " jam, " << minute << " menit, " << sec << " detik.";
    
    return 0;
}

// Muhammad Arif Rahman (2500018001)
// Kelas A