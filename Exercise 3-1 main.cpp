#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Declarations
    ifstream inFile;
    ofstream outFile;


    //declare Variables
    string firstName, lastName, department;
    double grossSalary, bonus, taxRate;
    double distanceTraveled, travelTime;
    int numCupsSold;
    double costCup;

    //Open the files
    inFile.open("inData.txt");
    outFile.open("outData.txt");

    outFile << fixed << showpoint << setprecision(2);

    //read the content of the file
    inFile>>firstName>>lastName>>department;
    inFile>>grossSalary>>bonus>>taxRate;


    //output our answer to the file
    outFile << "Name: " << firstName << " " << lastName <<", "
            << "Department: " << department << endl;
    outFile << "Monthly Gross Salary: $" << grossSalary << ", Monthly Bonus: "
            << bonus << "%, Taxes: " << taxRate << "%"<< endl;
    outFile << "Paycheck: $" << grossSalary * (1+ bonus/100) * (1-taxRate/100)
            << endl << endl;
    //second Read content of the file
    inFile >> distanceTraveled >> travelTime;

    //second output our answer to the file
    outFile << "Distance Traveled: " << distanceTraveled 
            << " miles, Traveling Time: " << travelTime << " hours" <<endl;
    outFile << "Average Speed: " << distanceTraveled/travelTime << " miles per hour"
            << endl << endl;
    //third read content of the file
    inFile >> numCupsSold >> costCup;
    //third output our answer to the file
    outFile << "Number of Coffee Cups Sold: " << numCupsSold << ", Cost: $"
            << costCup << " per cup" << endl;
    outFile << "Sales Amount = $" << costCup*numCupsSold << endl;
    // Close files
    inFile.close();
    outFile.close();
  

    return 0;
}
