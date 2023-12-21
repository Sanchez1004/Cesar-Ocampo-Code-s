#include <iostream>
#include <stdlib.h>
using namespace std;

class Tiempo {
    private:
        int hours, minutes, seconds;

    public:
        Tiempo(int, int, int);
        Tiempo(long);
        void showTime();
};

Tiempo::Tiempo(int _hours, int _min, int _sec){
    hours = _hours;
    minutes = _min;
    seconds = _sec;
};

Tiempo::Tiempo(long _seconds) {
    seconds %= int(_seconds) % 60;
    hours = int(_seconds / 3600);
    minutes = int(_seconds / 60);
}

void Tiempo::showTime() {
    cout << "Actual time is : " << hours << ":" << minutes << ":" << seconds << endl;
}

int main() {
    Tiempo t1(4, 15, 44);
    Tiempo t2(1000);

    t1.showTime();
    t2.showTime();

    return 0;
}