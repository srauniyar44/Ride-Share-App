#pragma once
#ifndef STANDARDRIDE_H
#define STANDARDRIDE_H
#include "Ride.h"
#include <iostream> // Ensure iostream is included for cout
using namespace std; // Ensure the standard namespace is used

class StandardRide : public Ride {
public:
    StandardRide(string id, string pickup, string dropoff, double dist)
        : Ride(id, pickup, dropoff, dist) {
    }

    double fare() const override {
        return distance * 1.0; // $1 per mile
    }

    void rideDetails() const override {
        Ride::rideDetails();
        std::cout << "Standard Ride Fare: $" << fare() << "\n"; // Use std::cout for output
    }
};

#endif
