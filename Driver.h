#pragma once
#ifndef DRIVER_H
#define DRIVER_H
#include "Ride.h"
#include <vector>
#include <string>
using namespace std;

class Driver {
private:
    string driverID, name;
    double rating;
    vector<Ride*> assignedRides;

public:
    Driver(string id, string name, double rating)
        : driverID(id), name(name), rating(rating) {
    }

    void addRide(Ride* ride) {
        assignedRides.push_back(ride);
    }

    void getDriverInfo() const;
};

#endif
