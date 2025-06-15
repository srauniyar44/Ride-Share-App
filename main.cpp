#include "StandardRide.h"
#include "PremiumRide.h"
#include "Driver.h"
#include "Rider.h"

int main() {
    Ride* r1 = new StandardRide("R1", "A", "B", 10);
    Ride* r2 = new PremiumRide("R2", "C", "D", 8);

    Driver d1("D1", "Alice", 4.8);
    d1.addRide(r1);
    d1.addRide(r2);

    Rider rider1("U1", "Bob");
    rider1.requestRide(r1);
    rider1.requestRide(r2);

    d1.getDriverInfo();
    rider1.viewRides();

    delete r1;
    delete r2;

    return 0;
}
