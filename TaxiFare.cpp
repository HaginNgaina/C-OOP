//TAXI CAB FARE
#include <iostream>
#include <cmath>  


double calculateFare(double distance, int passengers, bool airport) {
   
    const double minimumFare = 5.00;
    const double farePerTenthMile = 1.80;  
    const double firstAdditionalPassengerCharge = 1.00;
    const double additionalPassengerCharge = 0.50;
    const double airportSurcharge = 2.00;

   
    double fare = distance * 10 * farePerTenthMile;  

    
    if (passengers > 1) {
        fare += firstAdditionalPassengerCharge;  
        fare += (passengers - 2) * additionalPassengerCharge;  

    
    if (airport) {
        fare += airportSurcharge;
    }

    
    if (fare < minimumFare) {
        fare = minimumFare;
    }

    return fare;
}

int main() {
    
    double distance;
    int passengers;
    char airportInput;
    bool airport = false;

  
    std::cout << "Enter the distance of the ride (in miles, rounded to 1/10 of a mile): ";
    std::cin >> distance;
    std::cout << "Enter the number of passengers: ";
    std::cin >> passengers;
    std::cout << "Is the ride to/from the airport? (Y/N): ";
    std::cin >> airportInput;

    
    if (airportInput == 'Y' || airportInput == 'y') {
        airport = true;
    }

 
    double totalFare = calculateFare(distance, passengers, airport);

  
    std::cout << "The total fare for the ride is: $" << totalFare << std::endl;

    return 0;
}