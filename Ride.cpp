#include "Ride.h"
#include <iostream>

void Ride::rideDetails() const {
    cout << "Ride ID: " << rideID << ", From: " << pickupLocation << " To: " << dropoffLocation
        << ", Distance: " << distance << " miles\n";
}
