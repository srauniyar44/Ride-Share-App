#include "Rider.h"
#include <iostream>
using namespace std;

void Rider::viewRides() const {
    cout << "Rider: " << name << ", Requested Rides:\n";
    for (auto ride : requestedRides) {
        ride->rideDetails();
    }
}
