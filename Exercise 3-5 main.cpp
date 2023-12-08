//Name: David Fletcher
//Date: 9-13-2023
//File Name: main.cpp
/*Purpose: Write a program that reads data from a file specified by the user at runtime (i.e. your program should accept the filename as user input) and stores the output in the file Ch3_Ex5Output.dat. To test your program, use the Ch3_Ex5Data.txt file.*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    //Declarations
    ifstream inFile;
    ofstream outFile;
    string lastName, firstName;
    double currentSalary, increaseRate, updatedSalary;

    //Open the Files
    inFile.open("Ch3_Ex5Data.txt");
    outFile.open("Ch3_Ex5Output.dat");

    //Format the output
    outFile << fixed << showpoint << setprecision(2);

    //1read the content of the file
    inFile >>lastName>>firstName;
    inFile >>currentSalary>>increaseRate;
    
    //1Calculations
    updatedSalary = currentSalary * (1+ increaseRate/100);

    //1output our answer to the file
    outFile << firstName << " " << lastName << " "
    << updatedSalary << endl;

    //2read the content of the file
    inFile >>lastName>>firstName;
    inFile >>currentSalary>>increaseRate;
    
    //2Calculations
    updatedSalary = currentSalary * (1+ increaseRate/100);

    //2output our answer to the file
    outFile << firstName << " " << lastName << " "
    << updatedSalary << endl;

    //3read the content of the file
    inFile >>lastName>>firstName;
    inFile >>currentSalary>>increaseRate;
    
    //3Calculations
    updatedSalary = currentSalary * (1+ increaseRate/100);

    //3output our answer to the file
    outFile << firstName << " " << lastName << " "
    << updatedSalary << endl;

    //close first input file
    inFile.close();

    //open second input file
    inFile.open(".testFileData.txt"); 
    //this input file was missing from the instructions


    //4read the content of the file
    inFile >>lastName>>firstName;
    inFile >>currentSalary>>increaseRate;
    
    //4Calculations
    updatedSalary = currentSalary * (1+ increaseRate/100);

    //4output our answer to the file
    outFile << firstName << " " << lastName << " "
    << updatedSalary << endl;

    //5read the content of the file
    inFile >>lastName>>firstName;
    inFile >>currentSalary>>increaseRate;
    
    //5Calculations
    updatedSalary = currentSalary * (1+ increaseRate/100);

    //5output our answer to the file
    outFile << firstName << " " << lastName << " "
    << updatedSalary << endl;

    //6read the content of the file
    inFile >>lastName>>firstName;
    inFile >>currentSalary>>increaseRate;
    
    //6Calculations
    updatedSalary = currentSalary * (1+ increaseRate/100);

    //6output our answer to the file
    outFile << firstName << " " << lastName << " "
    << updatedSalary << endl;

    //Close Files  
    inFile.close();
    inFile.close();
    return 0;
}
