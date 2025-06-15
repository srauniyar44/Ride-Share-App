#ifndef PREMIUMRIDE_H
#define PREMIUMRIDE_H
#include "Ride.h"
#include <iostream> // Include iostream for cout
using namespace std; // Use the standard namespace

class PremiumRide : public Ride {
public:
    PremiumRide(string id, string pickup, string dropoff, double dist)
        : Ride(id, pickup, dropoff, dist) {
    }

    double fare() const override {
        return distance * 2.5; // $2.5 per mile
    }

    void rideDetails() const override {
        Ride::rideDetails();
        cout << "Premium Ride Fare: $" << fare() << "\n";
    }
};

#endif
