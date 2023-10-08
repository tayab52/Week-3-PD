#include <iostream>

using namespace std;
float taxCalculator(char vehicleType, int price);

main()
{
    char vehicleType;
    int price;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> vehicleType;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    float finalprice = taxCalculator(vehicleType, price);
    cout << "The final price of a vehicle of type " << vehicleType << " after adding the tax is $" << finalprice;
}
float taxCalculator(char vehicleType, int price)
{
    float taxAmount, finalPrice;
    string output;
    if (vehicleType == 'E')
    {

        taxAmount = price * (0.08);
        finalPrice = price + taxAmount;
    }
    if (vehicleType == 'M')
  {
        taxAmount = price * (0.06);
    finalPrice = price + taxAmount;
  }
     if (vehicleType == 'S')
  {

    taxAmount = price * (0.1);
    finalPrice = price + taxAmount;
   }
if (vehicleType == 'V')
   {

    taxAmount = price * (0.12);
    finalPrice = price + taxAmount;
   }
if (vehicleType == 'T')
   {

    taxAmount = price * (0.15);
    finalPrice = price + taxAmount;
    }
return finalPrice;
}