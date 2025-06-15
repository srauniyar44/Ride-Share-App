#pragma once
#ifndef RIDER_H
#define RIDER_H
#include "Ride.h"
#include <vector>
#include <string>
using namespace std;

class Rider {
private:
    string riderID, name;
    vector<Ride*> requestedRides;

public:
    Rider(string id, string name) : riderID(id), name(name) {}

    void requestRide(Ride* ride) {
        requestedRides.push_back(ride);
    }

    void viewRides() const;
};

#endif
