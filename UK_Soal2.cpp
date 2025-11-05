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

    const int array[5] = {inputSec, day, hour, minute, sec};

    for (int i = 0; i < 5; i++) {
        switch(i) {
            case 0:
                cout << array[i] << " detik = ";
                break;
            case 1:
                cout << array[i] << " hari, ";
                break;
            case 2:
                cout << array[i] << " jam, ";
                break;
            case 3:
                cout << array[i] << " menit, ";
                break;
            case 4:
                cout << array[i] << " detik.";
                break;
            default:
                break;
        }
    }

    return 0;
}

// Muhammad Arif Rahman (2500018001)
// Kelas A