#include "Driver.h"
#include <iostream>
using namespace std;

void Driver::getDriverInfo() const {
    cout << "Driver: " << name << ", Rating: " << rating << ", Rides:\n";
    for (auto ride : assignedRides) {
        ride->rideDetails();
    }
}
