/*
*
* Ian Angel
*
* Chapter 13, Programming Assignment
*
* March 2023
*
*/

#include <iostream>
#include <iomanip>
#include "DogInventory.h"
using namespace std;


void menu(); //Function that outputs the header and lists the options to the user

int main()
{
    const int NUMBER_OF_CUSTOMERS = 5; //Constant integer for the number of customers
    DogInventory customers[NUMBER_OF_CUSTOMERS]; //An array of objects that would hold a maximum of 5 dog customers objects
    int currentCustomer = -1; //Integer to store the number of dogs

    string dogLicense;
    string dogName;
    string ownerPhone;
    float priceQuoted;
    
    int option; //User input for menu option
    
    while(option != 3) //While loop to start the menu
    {
        menu();
        cout << "Enter menu option: ";
        cin >> option;
        cin.ignore();
        
        switch(option) //Switch statement to create a menu loop
        {
                case 1: //Enters a new job
                
                    currentCustomer++; //Increment the customer counter
            
                    cout << "\nDog License Number: ";
                    cin >> dogLicense;
                    cout << endl;
                    customers[currentCustomer].setDogLicense(dogLicense); //this setter inserts the dog licence in the array
                    
                    cout << "Dog Name:  ";
                    cin.ignore();
                    getline(cin,dogName);
                    cout << endl;
                    customers[currentCustomer].setDogName(dogName); //this setter inserts the dog name in the array
                    
                    cout << "Customer Phone:  ";
                    getline(cin,ownerPhone);
                    cout << endl;
                    customers[currentCustomer].setOwnerPhone(ownerPhone); //this setter inserts the owner phone in the array
                    
                    cout << "Price: $";
                    cin >> priceQuoted;
                    cout << endl;
                    customers[currentCustomer].setPriceQuoted(priceQuoted); //this setter inserts the price qouted in the array
                    
                    cout << "Thank you, we will take good care of " << dogName << " today!\n";
                    
                break; 
            
                case 2: //Lists all the current jobs, including information about each of them and the total amount
                {    
                    float totalPrice = 0; //Variable to store the total amount
                    
                    cout << "\nCurrent Jobs: " << endl;
                    
                    for (int k = 0; k <= currentCustomer; k++) //Loop to display all the current jobs
                    {
                        
                        cout << endl << customers[k].getDogLicense() << endl;
                        
                        cout << endl << customers[k].getDogName() << endl;
                        
                        cout << endl << customers[k].getOwnerPhone() << endl;
                        
                        cout << endl << "$" << customers[k].getPriceQuoted() << endl;
                        
                        cout << endl << "***" << endl;
                        
                        totalPrice = totalPrice + customers[k].getPriceQuoted(); //Calculates the total price
                    }
                    
                    cout << "\nYou currently have " << (currentCustomer+1) << " jobs with a total of $" << totalPrice << "\n";
                }
                break;
            
                case 3: //Exits the menu loop
                {
                    cout << "\nThank you for using the menu system and have a nice day.\n";
    
                    cout << "-----------------------------------------------------" << endl; //A seperation line
                
                    exit(0); //Exit the program
                }
            
                default: //If the user input is not 1,2,3

                cout << "The menu option must be either 1, 2, or 3. Please enter one of the given options.\n";
            
           
        }
    }
  return 0;  
}



void menu()
{
    cout << "\nYou Dirty Dog Menu:\n" << "1. Enter a new job\n" << "2. List all current jobs\n" << "3. Exit\n";
}