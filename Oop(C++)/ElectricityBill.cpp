#include <iostream>
using namespace std;

int main()
{
    char consumerNumber[20], consumerName[50], billType[15];
    int previousMonthUnits, currentMonthUnits, unitsConsumed;
    double billAmount = 0.0;

    cout << "Enter Consumer Number: ";
    cin >> consumerNumber;
    cout << "Enter Consumer Name: ";
    cin >> consumerName;
    cout << "Enter Previous Month Units: ";
    cin >> previousMonthUnits;
    cout << "Enter Current Month Units: ";
    cin >> currentMonthUnits;
    cout << "Enter Bill Type (domestic/commercial): ";
    cin >> billType;

    unitsConsumed = currentMonthUnits - previousMonthUnits;

    if (strcmp(billType, "domestic") == 0)
    {
        if (unitsConsumed <= 100)
            billAmount = unitsConsumed * 1;
        else if (unitsConsumed <= 200)
            billAmount = 100 * 1 + (unitsConsumed - 100) * 4;
        else if (unitsConsumed <= 300)
            billAmount = 100 * 1 + 100 * 4 + (unitsConsumed - 200) * 6;
        else if (unitsConsumed <= 400)
            billAmount = 100 * 1 + 100 * 4 + 100 * 6 + (unitsConsumed - 300) * 8;
        else
            billAmount = 100 * 1 + 100 * 4 + 100 * 6 + 100 * 8 + (unitsConsumed - 400) * 10;
    }
    else if (strcmp(billType, "commercial") == 0)
    {
        if (unitsConsumed <= 100)
            billAmount = unitsConsumed * 4;
        else if (unitsConsumed <= 200)
            billAmount = 100 * 4 + (unitsConsumed - 100) * 8;
        else if (unitsConsumed <= 300)
            billAmount = 100 * 4 + 100 * 8 + (unitsConsumed - 200) * 10;
        else if (unitsConsumed <= 400)
            billAmount = 100 * 4 + 100 * 8 + 100 * 10 + (unitsConsumed - 300) * 12;
        else
            billAmount = 100 * 4 + 100 * 8 + 100 * 10 + 100 * 12 + (unitsConsumed - 400) * 13;
    }

    cout << "Total Bill Amount: Rs. " << billAmount << endl;

    return 0;
}
