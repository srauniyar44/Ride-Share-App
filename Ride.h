#ifndef RIDE_H
#define RIDE_H
#include <string>
using namespace std;

class Ride {
protected:
    string rideID, pickupLocation, dropoffLocation;
    double distance;

public:
    Ride(string id, string pickup, string dropoff, double dist)
        : rideID(id), pickupLocation(pickup), dropoffLocation(dropoff), distance(dist) {
    }

    virtual double fare() const = 0;
    virtual void rideDetails() const;

    virtual ~Ride() = default;
};

#endif
#pragma once
