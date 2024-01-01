#include <string>

// DogInventory class declaration

class DogInventory
{
private:
   std::string dogLicense;
   std::string dogName;
   std::string ownerPhone;
   float priceQuoted;
   
public:
   // Default constructor
   DogInventory();
   
   void setDogLicense(std::string dogLicense); //Mutator function
   std::string getDogLicense(); //Accessor functions
   
   void setDogName(std::string dogName); //Mutator function
   std::string getDogName(); //Accessor functions
   
   void setOwnerPhone(std::string ownerPhone); //Mutator function
   std::string getOwnerPhone(); //Accessor functions
   
   void setPriceQuoted(float priceQuoted); //Mutator function
   float getPriceQuoted(); //Accessor functions
};
   
   
   
   
   
   
   