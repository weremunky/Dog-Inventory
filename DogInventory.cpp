#include <iostream>
#include "DogInventory.h"

using namespace std;

DogInventory::DogInventory() //Default constructor
{
    priceQuoted = 0.0;
    dogLicense = "";
    dogName = "";
    ownerPhone = "";
}

void DogInventory::setDogLicense(std::string dogLicense)
{
    if (dogLicense.size() >= 10) //Sets the size for the dog license
    {
        cout << "Invalid license length. Must be less than 10 characters.\n";
        exit(EXIT_FAILURE);
    }
    
    
    this->dogLicense = dogLicense;
    
}

std::string DogInventory::getDogLicense()
{
    return dogLicense;
}

void DogInventory::setDogName(std::string dogName)
{
    if (dogName.size() >= 15) //Sets the size for the dog name
    {
      cout << "Invalid name length. Must be less than 15 characters.\n";
      exit(EXIT_FAILURE);
    }
    
    this->dogName = dogName;
    
}

std::string DogInventory::getDogName()
{
    return dogName;
}
    
void DogInventory::setOwnerPhone(std::string ownerPhone)
{
    
    if (ownerPhone.size() >= 11) //Sets the size for the owner phone
    {
        cout << "Invalid phone length. Must be less than 11 characters.\n";
        exit(EXIT_FAILURE);
    }
        
    
    this->ownerPhone = ownerPhone;
    
}

std::string DogInventory::getOwnerPhone()
{
    return ownerPhone;
}
    
    
void DogInventory::setPriceQuoted(float priceQuoted)
{
    if (priceQuoted < 0) //Sets the price quoted to be at least 0
    {
        cout << "Invalid price qoute. Must be at least 0.\n";
        exit(EXIT_FAILURE);
    }
    
    this->priceQuoted = priceQuoted;
    
}

float DogInventory::getPriceQuoted()
{
    return priceQuoted;
}

