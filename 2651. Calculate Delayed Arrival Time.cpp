// 2651. Calculate Delayed Arrival Time - Weekly Contest 342
#include <iostream>

using namespace std;

int delayedArrival(int arrivalTime, int delayedTime) {
    int arrivalIn24Hrs = (arrivalTime + delayedTime) % 24;
    return arrivalIn24Hrs;
}

int main() {
    int arrivalTime, delayedTime;
    cout << "Enter arrival time in 24-hours format: ";
    cin >> arrivalTime;
    cout << "Enter delayed time in hours: ";
    cin >> delayedTime;
    int arrivalIn24Hrs = delayedArrival(arrivalTime, delayedTime);
    cout << "The train will arrive at " << arrivalIn24Hrs << ":00 hours." << endl;
    return 0;
}
