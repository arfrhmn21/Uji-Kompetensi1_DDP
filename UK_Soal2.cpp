#include <iostream>
using namespace std;

int main() {
    const int secondsPerMinute = 60;
    const int secondsPerHour = 60 * secondsPerMinute;
    const int secondsPerDay = 24 * secondsPerHour;

    int inputSec;

    do {
        cout << "Masukkan Bilangan >= 0 (satuan detik): "; cin >> inputSec;

        if (inputSec < 0) {
            cout << "Input tidak valid!" << endl;
        }
    } while (inputSec < 0);
    
    int day = inputSec / secondsPerDay;
    int remainDay = inputSec % secondsPerDay;
    int hour = remainDay / secondsPerHour;
    int remainHour = remainDay % secondsPerHour;
    int minute = remainHour / secondsPerMinute;
    int sec = remainHour % secondsPerMinute;

    cout << inputSec << " detik = " << day << " hari, " << hour << " jam, " << minute << " menit, " << sec << " detik.";

    return 0;
}

// Muhammad Arif Rahman (2500018001)
// Kelas A