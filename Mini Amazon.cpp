#include <iostream>
#include <string>
#include <cstring>
#include <ctime>
#include <ctype.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#define SIZE 45
#include <bits/stdc++.h>
using namespace std;
char enQueue(std::string const &element);
string items[SIZE], ItemName[50], nm, d, ch1, m;
int front, rear, j = 0;
int Qty[50], Price[50], ch2, i, num, n = 50;
float Total[50];
string DelAdd;
class home
{
public:
    int age, gn, cat, l;
    char mob[10];

    home()
    {
        cout << "\n                                         WELCOME TO HOME\n"
             << endl;
        cout << "                            ----------ENTER FOLLOWING DETAILS----------\n\n\n";
        cout << "\nUSER NAME:- ";
        getline(cin >> ws, nm);

        cout << "\nUSER MOBILE NO:- ";
        cin >> mob;
        l = strlen(mob);
        while (l != 10)
        {
            cout << "INVALID MOBILE NUMBER! \nPLEASE ENTER A VALID 10 DIGIT MOBILE NUMBER :- ";
            cin >> mob;
            l = strlen(mob);
        }
        cout << "\nUSER AGE:- ";
        cin >> age;
        while (age <= 2 || age >= 110)
        {
            cout << "INVALID AGE !\nPLEASE ENTER A VALID AGE :- " << endl;
            cin >> age;
        }
    }
};

class Billing
{
public:
    static int objectCount;

public:
    void Buy(string name, int qty, int price, float total, int i)
    {

        num = i;
        ItemName[num] = name;
        Qty[num] = qty;
        Price[num] = price;
        Total[num] = total;

        objectCount++;
    }

    static int getCount()
    {
        return objectCount;
    }

    void putdata(int j)
    {
        if (ItemName[j].size() != 0)
        {
            cout
                << left
                << setw(25)
                << left
                << setw(50)
                << ItemName[j]
                << left
                << setw(10)
                << Qty[j]
                << left
                << setw(60)
                << Price[j]
                << left
                << setw(40)
                << Total[j]
                << left
                << setw(250)
                << endl;
        }
    }
};
int Billing::objectCount = 0;

void choice();

class groceries : public Billing
{

public:
    int choice1, price, quantity, total;
    float i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;

    groceries()
    {
        cout << endl
             << "\n"
             << "                                *****************************************\n";
        cout << "                                *---  Welcome to the Grocery Section ---*\n";
        cout << "                                *****************************************\n";
        do
        {
            cout
                << "\n                                1.Essentials             2.Dairy Products\n"
                << "\n                                3.Fruits and Vegetables  4.Exit\n";
            cout << endl
                 << "Enter the sub-category you want to shop from: ";
            cin >> choice1;
            if (choice1 == 1)
            {
                cout << "The following Essentials are available: " << endl;
                cout << endl
                     << "Rice\nWheat\nDal\nJowar" << endl;
                cout << endl
                     << "Enter the name of the product you want:";
                cin >> d;
                if (d == "Rice" || d == "rice" || d == "RICE")
                {
                    price = 100;
                    cout << "Price of 1 kg rice = " << price << endl;
                    cout << "Enter the quantity of rice you want to buy in kgs:";
                    cin >> quantity;
                    total = price * quantity;
                    i1 = 1;
                    cout << "Total amount = Rs." << total << endl;
                    Buy("RICE", quantity, price, total, i1);
                    choice();
                }
                else if (d == "Wheat" || d == "wheat" || d == "WHEAT")
                {
                    price = 140;
                    cout << "Price of 1 kg wheat = " << price << endl;
                    cout << "Enter the quantity of wheat you want to buy in kgs:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i2 = 2;
                    Buy("WHEAT", quantity, price, total, i2);
                    choice();
                }
                else if (d == "Dal" || d == "dal" || d == "DAL")
                {
                    price = 80;
                    cout << "Price of 1 kg Dal = " << price << endl;
                    cout << "Enter the quantity of Dal you want to buy in kgs: ";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i3 = 3;
                    Buy("Dal", quantity, price, total, i3);
                    choice();
                }

                else if (d == "Jowar" || d == "jowar" || d == "JOWAR")
                {
                    price = 200;
                    cout << "Price of 1 kg Jowar = " << price << endl;
                    cout << "Enter the quantity of Jowar you want to buy in kgs: ";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i4 = 4;
                    Buy("JOWAR", quantity, price, total, i4);
                    choice();
                }

                else
                {
                    cout << "Invalid Product !!! Please re-enter a valid PRODUCT" << endl;
                }
            }
            else if (choice1 == 2)
            {
                cout << endl
                     << "The following Dairy Products are available: " << endl;
                cout << endl
                     << "Milk\nButter\nPaneer\nCheese" << endl;
                cout << endl
                     << "Enter the name of the product you want:";
                cin >> d;
                if (d == "Milk" || d == "milk" || d == "MILK")
                {
                    price = 60;
                    cout << endl
                         << "Price of 1 litre milk = " << price << endl;
                    cout << endl
                         << "Enter the quantity of milk you want to buy in litres:";
                    cin >> quantity;
                    total = price * quantity;

                    cout << "Total amount = Rs." << total << endl;
                    i5 = 5;
                    Buy("MILK", quantity, price, total, i5);
                    choice();
                }
                else if (d == "Butter" || d == "butter" || d == "BUTTER")
                {
                    price = 100;
                    cout << endl
                         << "Price of 1 packet of butter = " << price << endl;
                    cout << endl
                         << "Enter how many packets of butter you want to buy:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i6 = 6;
                    Buy("BUTTER", quantity, price, total, i6);
                    choice();
                }
                else if (d == "Paneer" || d == "paneer" || d == "PANEER")
                {
                    price = 70;
                    cout << endl
                         << "Price of 1 kg of paneer = " << price << endl;
                    cout << endl
                         << "Enter the quantity of paneer you want to buy in kgs:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i7 = 7;
                    Buy("PANEER", quantity, price, total, i7);
                    choice();
                }
                else if (d == "Cheese" || d == "cheese" || d == "CHEESE")
                {
                    price = 70;
                    cout << endl
                         << "Price of 1 packet of cheese = " << price << endl;
                    cout << endl
                         << "Enter how many packets of cheese you want to buy:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i8 = 8;
                    Buy("CHEESE", quantity, price, total, i8);
                    choice();
                }

                else
                {
                    cout << "Invalid Product !!! Please re-enter a valid PRODUCT" << endl;
                }
            }

            else if (choice1 == 3)
            {
                cout << endl
                     << "The following fruits and vegetables are available:" << endl;
                cout << endl
                     << "Brinjal\nCabbage\nMango\nBanana" << endl;
                cout << endl
                     << "Enter the name of the product you want:";
                cin >> d;
                if (d == "Brinjal" || d == "brinjal" || d == "BRINJAL")
                {
                    price = 10;
                    cout << endl
                         << "Price of 1 kg Brinjal= " << price << endl;
                    cout << endl
                         << "Enter the quantity of brinjal you want to buy in kgs:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i9 = 9;
                    choice();
                    Buy("BRINJAL", quantity, price, total, i9);
                }
                else if (d == "Cabbage" || d == "cabbage" || d == "CABBAGE")
                {
                    price = 30;
                    cout << endl
                         << "Price of 1 kg Cabbage = " << price << endl;
                    cout << endl
                         << "Enter the quantity of Cabbage you want to buy in kgs: ";
                    cin >> quantity;
                    total = price * quantity;
                    cout << endl
                         << "Total amount = Rs." << total << endl;
                    i10 = 10;
                    Buy("CABBAGE", quantity, price, total, i10);
                    choice();
                }
                else if (d == "Mango" || d == "mango" || d == "MANGO")
                {
                    price = 50;
                    cout << endl
                         << "Price of 1 kg Mango = " << price << endl;
                    cout << endl
                         << "Enter the quantity of Mango you want to buy in kgs:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i11 = 11;
                    Buy("MANGO", quantity, price, total, i11);
                    choice();
                }
                else if (d == "Banana" || d == "banana" || d == "BANANA")
                {
                    price = 40;
                    cout << endl
                         << "Price of 1 kg banana = " << price << endl;
                    cout << endl
                         << "Enter the quantity of banana you want to buy in kgs:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i12 = 12;
                    Buy("BANANA", quantity, price, total, i12);
                    choice();
                }

                else
                {
                    cout << "Invalid Product !!! Please re-enter a valid PRODUCT" << endl;
                }
            }

            else if (choice1 == 4)
            {
                cout << endl
                     << " Thank You for shopping from the Groceries Section! " << endl;
            }
            else
            {
                cout << "Invalid choice!Please re-enter a valid choice" << endl;
            }
        } while (choice1 != 4);
    }
};
class luggage : public Billing
{
public:
    int c1, price, quantity, total;
    float i13, i14, i15, i16, i17, i18, i19, i20, i21;

    luggage()
    {
        cout << endl
             << "                                 *******************************************\n";
        cout << "                                 *---- Welcome to the Luggage Section ---- *" << endl;
        cout << "                                 *******************************************";
        do
        {
            cout << endl
                 << "\n                                 1.Backpacks                    2.Suitcases\n"
                 << "\n                                 3.Handbags                     4.Exit\n";
            cout << endl
                 << "Enter the sub-category you want to shop from: ";
            cin >> c1;
            if (c1 == 1)
            {
                cout << "The following Backpacks are available: " << endl;
                cout << endl
                     << "Satchel\nRucksack\nHaversack" << endl;
                cout << endl
                     << "Enter the name of the Backpack you want to buy:";
                cin >> d;
                if (d == "Satchel" || d == "satchel" || d == "SATCHEL")
                {
                    cout << endl
                         << "Details = Travex 14 inch Satchel" << endl;
                    price = 950;
                    cout << "Price  = Rs." << price << endl;
                    cout << "Enter the number of Satchels you want: ";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i13 = 13;
                    Buy("SATCHEL", quantity, price, total, i13);
                    choice();
                }
                else if (d == "Rucksack" || d == "rucksack" || d == "RUCKSACK")
                {
                    cout << endl
                         << "Details = Wildcraft 45 Ltrs Grey and Orange Rucksack" << endl;
                    price = 2500;
                    cout << "Price = Rs." << price << endl;
                    cout << "Enter the number of rucksacks you want to buy:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i14 = 14;
                    Buy("RUCKSACK", quantity, price, total, i14);
                    choice();
                }
                else if (d == "Haversack" || d == "haversack" || d == "HAVERSACK")
                {
                    cout << endl
                         << "Details = BLUTECH Polyester 36 Liters Waterproof Royal Blue Haversack" << endl;
                    price = 1050;
                    cout << "Price = Rs." << price << endl;
                    cout << "Enter the number of Haversack you want to buy: ";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i15 = 15;
                    Buy("HAVERSACK", quantity, price, total, i15);
                    choice();
                }
                else
                {
                    cout << "Invalid Product !!! Please re-enter a valid PRODUCT" << endl;
                }
            }
            else if (c1 == 2)
            {
                cout << endl
                     << "The following Suitcases are available: " << endl;
                cout << endl
                     << "Breifcases\nTrolley\nDuffel" << endl;
                cout << endl
                     << "Enter the name of the bag you want:";
                cin >> d;
                if (d == "Briefcases" || d == "briefcases" || d == "BRIEFCASES")
                {
                    cout << endl
                         << "Details = American Tourister Ivy Spinner 77 cms PP Black Suitcase" << endl;
                    price = 6500;
                    cout << "Price = Rs." << price << endl;
                    cout << "Enter the number of briefcases you wish to buy:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i16 = 16;

                    Buy("BRIEFCASES", quantity, price, total, i16);
                    choice();
                }
                else if (d == "Trolley" || d == "trolley" || d == "TROLLEY")
                {
                    cout << endl
                         << "Details: Skybags Trick 4W Polyester 69 cms Softsided Medium Luggage Trolley (Blue)" << endl;
                    price = 8500;
                    cout << "Price = Rs." << price << endl;
                    cout << "Enter the number of Trolley you wish to buy:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i17 = 17;
                    Buy("TROLLEY", quantity, price, total, i17);
                    choice();
                }
                else if (d == "Duffel" || d == "duffel" || d == "DUFFEL")
                {
                    cout << endl
                         << "Details = Victorinox Werks Traveler 5.0 Wt East/west" << endl;
                    price = 3000;
                    cout << "Price = Rs. " << price << endl;
                    cout << "Enter the number of Duffels you wish to buy: ";
                    cin >> quantity;
                    total = price * quantity;
                    cout << endl
                         << "Total amount = Rs." << total << endl;
                    i18 = 18;
                    Buy("DUFFEL", quantity, price, total, i18);
                    choice();
                }
                else
                {
                    cout << "Invalid Product !!! Please re-enter a valid PRODUCT" << endl;
                }
            }
            else if (c1 == 3)
            {
                cout << endl
                     << "The following Handbags are available:" << endl;
                cout << endl
                     << "Clutch\nWallet\nHobo" << endl;
                cout << endl
                     << "Enter the name of the Handbag you want:";
                cin >> d;
                if (d == "Clutch" || d == "clutch" || d == "CLUTCH")
                {
                    cout << endl
                         << "Details = Baggit Black Synthetic Clutch" << endl;
                    price = 600;
                    cout << "Price = Rs. " << price << endl;
                    cout << "Enter the number of cluthes you wish to buy:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i19 = 19;
                    Buy("CLUTCH", quantity, price, total, i19);
                    choice();
                }
                else if (d == "Wallet" || d == "wallet" || d == "WALLET")
                {
                    cout << endl
                         << "Details: URBAN FOREST Oliver Black RFID Blocking Leather Wallet" << endl;
                    price = 500;
                    cout << "Price = Rs. " << price << endl;
                    cout << "Enter the number of wallets you wish to buy:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i20 = 20;
                    Buy("WALLET", quantity, price, total, i20);
                    choice();
                }
                else if (d == "Hobo" || d == "hobo" || d == "HOBO")
                {
                    cout << endl
                         << "Details: Caprese Women's Hobo (Beige)" << endl;
                    price = 800;
                    cout << "Price = Rs." << price << endl;
                    cout << "Enter the number of Hobos you wish to buy:";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i21 = 21;
                    Buy("HOBO", quantity, price, total, i21);
                    choice();
                }
                else
                {
                    cout << "Invalid Product !!! Please re-enter a valid PRODUCT" << endl;
                }
            }
            else if (c1 == 4)
            {
                cout << endl
                     << " Thank You for Shopping from the Luggage Section! " << endl;
                break;
            }
            else
            {
                cout << "Invalid choice!Please re-enter a valid choice" << endl;
            }
        } while (c1 != 4);
    }
};
class clothing : public Billing
{
public:
    int choice1, price, quantity, total;
    float i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33;
    clothing()
    {
        cout << endl
             << "*********************************" << endl;
        cout << "Welcome to the Clothing section!" << endl;
        cout << "*********************************" << endl;
        do
        {
            cout << endl;
            cout << "1. Women" << endl
                 << "2. Men" << endl
                 << "3. Kids" << endl
                 << "4. Exit" << endl;
            cout << endl
                 << "Enter the sub-category you want to shop from: ";
            cin >> choice1;

            switch (choice1)
            {
            case 1:
                cout << "\n \n";
                cout << "Clothing for Womens are as follows : " << endl;
                cout << " Dress" << endl;
                cout << " Saree" << endl;
                cout << " Bottomwear" << endl;
                cout << " Sweatshirt" << endl;
                cout << "\n ";
                cout << endl
                     << "Enter the name of the product you want :";
                cin >> d;
                if (d == "Dress" || d == "dress" || d == "DRESS")
                {
                    price = 1200.00;
                    cout << "Chain Bodycon Dress" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i22 = 22;
                    Buy("Dress", quantity, price, total, i22);
                    choice();
                }
                else if (d == "Saree" || d == "saree" || d == "SAREE")
                {
                    price = 839.00;
                    cout << "Womanista Women's Georgette Sarees" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i23 = 23;
                    Buy("Saree", quantity, price, total, i23);
                    choice();
                }
                else if (d == "Bottomwear" || d == "bottomwear" || d == "BOTTOMWEAR")
                {
                    price = 1432.00;
                    cout << "Ripped Wide Leg Jeans" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i24 = 24;
                    Buy("Bottomwear", quantity, price, total, i24);
                    choice();
                }
                else if (d == "Sweatshirts" || d == "sweatshirts" || d == "SWEATSHIRT")
                {
                    price = 990.00;
                    cout << "Pocket Pullover Sweatshirt" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i25 = 25;
                    Buy("Sweatshirt", quantity, price, total, i25);
                    choice();
                }
                else
                {
                    cout << "Invalid Product !!! Please re-enter a valid PRODUCT" << endl;
                }
                break;
            case 2:
                cout << "\n \n";
                cout << "Clothing for Mens are as follows : " << endl;
                cout << " Blazer" << endl;
                cout << " Jeans" << endl;
                cout << " Shirt" << endl;
                cout << " Kurta" << endl;
                cout << " \n";
                cout << endl
                     << "Enter the name of the product you want:";
                cin >> d;
                if (d == "Blazer" || d == "blazer" || d == "BLAZER")
                {
                    price = 9999.00;
                    cout << "\n \n";
                    cout << "Cotton Full Sleeve Slim-fit Blazer for Men" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i26 = 26;
                    Buy("Blazer", quantity, price, total, i26);
                    choice();
                }
                else if (d == "Jeans" || d == "jeans" || d == "JEANS")
                {
                    price = 609.00;
                    cout << "\n \n";
                    cout << "Men's Relaxed Fit Jeans" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i27 = 27;
                    Buy("Jeans", quantity, price, total, i27);
                    choice();
                }
                else if (d == "Shirt" || d == "shirt" || d == "SHIRT")
                {
                    price = 599.00;
                    cout << "\n \n";
                    cout << "Men's Solid Regular Fit Formal Shirt" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i28 = 28;
                    Buy("Men's Solid Regular Fit Formal Shirt", quantity, price, total, i28);
                    choice();
                }
                else if (d == "Kurta" || d == "kurta" || d == "KURTA")
                {
                    price = 649.00;
                    cout << "\n \n";
                    cout << "Ethnic Pure Cotton Men's Kurta" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i29 = 29;
                    Buy("Kurta", quantity, price, total, i29);
                    choice();
                }
                else if (choice1 == 5)
                {
                    break;
                }
                else
                {
                    cout << "Invalid Product !!! Please re-enter a valid PRODUCT" << endl;
                }
                break;
            case 3:
                cout << "\n \n";
                cout << "Clothing for Kids are as follows : " << endl;
                cout << " Polos" << endl;
                cout << " Bodysuit" << endl;
                cout << " Jumpsuit" << endl;
                cout << " Joggers" << endl;
                cout << endl
                     << "Enter the name of the product you want:";
                cin >> d;
                if (d == "Polos" || d == "polos" || d == "POLOS")
                {
                    price = 1418.00;
                    cout << "\n \n";
                    cout << "Max Boy's Regular T-Shirt" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i30 = 30;
                    Buy("Polos", quantity, price, total, i30);
                    choice();
                }
                else if (d == "Bodysuit" || d == "bodysuit" || d == "BODYSUIT")
                {
                    price = 849.00;
                    cout << "\n \n";
                    cout << "Bodysuit For Toddler Half Sleeve White" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i31 = 31;
                    Buy("Bodysuit", quantity, price, total, i31);
                    choice();
                }
                else if (d == "Jumpsuit" || d == "jumpsuit" || d == "JUMPSUIT")
                {
                    price = 1499.00;
                    cout << "\n \n";
                    cout << "Girls Square Neck Patch Work jumpsuit" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i32 = 32;
                    Buy("Jumpsuit", quantity, price, total, i32);
                    choice();
                }
                else if (d == "Joggers" || d == "joggers" || d == "JOGGERS")
                {
                    price = 2999.00;
                    cout << "\n \n";
                    cout << "Kidsville Boy's Regular Joggers" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i33 = 33;
                    Buy("Joggers", quantity, price, total, i33);
                    choice();
                }
                else if (choice1 == 5)
                {
                    break;
                }
                else
                {
                    cout << "Invalid Product !!! Please re-enter a valid PRODUCT" << endl;
                }
                break;
            case 4:
                cout << endl
                     << "Thank You for shopping from the Clothing Section!" << endl;
                break;
            default:
                cout << "Sorry, Invalid choice ! Please re-enter your choice !" << endl;
                break;
            }
        } while (choice1 != 4);
    }
};
class electronics : public Billing
{
public:
    int c1, price, total, quantity;
    float i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45;
    electronics()
    {
        cout << endl
             << "******************************************\n";
        cout << "---- Welcome to the Electronics Section ----" << endl;
        cout << "******************************************\n";
        do
        {
            cout << endl
                 << "1.Mobiles\n2.Kitchen Appliances\n3.Home Appliances\n4.Exit" << endl;
            cout << endl
                 << "Enter the sub-category you want to shop from:";
            cin >> c1;
            if (c1 == 1)
            {
                cout << "The following Mobiles are available: " << endl;
                cout << endl
                     << "Oppo\nSamsung\nApple" << endl;
                cout << endl
                     << "Enter the mobile you want to buy:";
                cin >> d;
                if (d == "Oppo" || d == "oppo" || d == "OPPO")
                {
                    cout << endl
                         << "OPPOF21 AMOLED Display 6.5 Inches MOBILE PHONE" << endl;
                    price = 20000;
                    cout << "Price  = Rs." << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i34 = 34;
                    Buy("OPPO PHONE", quantity, price, total, i34);
                    choice();
                }
                else if (d == "Samsung" || d == "samsung" || d == "SAMSUNG")
                {
                    cout << endl
                         << "SAMSUNG M31 AMOLED Display 7 Inches FOLDABLE PHONE" << endl;
                    price = 50000;
                    cout << "Price = Rs." << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i35 = 35;
                    Buy("SAMSUNG MOBILE", quantity, price, total, i35);
                    choice();
                }
                else if (d == "Apple" || d == "apple" || d == "APPLE")
                {
                    cout << endl
                         << "IPHONE13 PRO XDR 6.7 Inches 60MP CAMERA PHONE" << endl;
                    price = 110000;
                    cout << "Price = Rs." << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i36 = 36;
                    Buy("IPHONE CAMERA PHONE", quantity, price, total, i36);
                    choice();
                }
                else
                {
                    cout << "Invalid Product !!! Please re-enter a valid PRODUCT" << endl;
                }
            }
            else if (c1 == 2)
            {
                cout << endl
                     << "The following Kitchen Appliances are available: " << endl;
                cout << endl
                     << "Mixer\nCooker\nMicrowave" << endl;
                cout << endl
                     << "Enter the name of the Kitchen Appliance you wish to buy:";
                cin >> d;
                if (d == "Mixer" || d == "mixer" || d == "MIXER")
                {
                    cout << endl
                         << "BAJAJ REX 750W MIXER WITH TWO YEARS SERVICEABLE ONSITE WARRANTY" << endl;
                    price = 3000;
                    cout << "Price = Rs." << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i37 = 37;
                    Buy("MIXER", quantity, price, total, i37);
                    choice();
                }
                else if (d == "Cooker" || d == "cooker" || d == "COOKER")
                {
                    cout << endl
                         << "PRESTIGE SVACHH ANODISED ALUMINUM PRESSURE COOKER" << endl;
                    price = 5000;
                    cout << "Price = Rs." << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i38 = 38;
                    Buy("COOKER", quantity, price, total, i38);
                    choice();
                }
                else if (d == "Microwave" || d == "microwave" || d == "MICROWAVE")
                {
                    cout << endl
                         << "PANASONIC SOLO 20L IRON MICROWAVE" << endl;
                    price = 7000;
                    cout << "Price = Rs." << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i39 = 39;
                    Buy("MICROWAVE", quantity, price, total, i39);
                    choice();
                }
                else
                {
                    cout << "Invalid Product !!! Please re-enter a valid PRODUCT" << endl;
                }
            }
            else if (c1 == 3)
            {
                cout << endl
                     << "The following Home Appliances are available:" << endl;
                cout << endl
                     << "1.Telivision\n2.Refrigerator\n3.Tubelight" << endl;
                cout << endl
                     << "Enter the Home Appliance you wish to buy:";
                cin >> d;
                if (d == "Television" || d == "television" || d == "TELEVISION")
                {
                    cout << endl
                         << "LG Ultra HD Smart LED TV" << endl;
                    price = 65000;
                    cout << "Price = Rs. " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i40 = 40;
                    Buy("LG Ultra HD Smart LED TV", quantity, price, total, i40);
                    choice();
                }
                else if (d == "Refrigerator" || d == "refrigerator" || d == "REFRIGERATOR")
                {
                    cout << endl
                         << "Whirpool 190 L3 Star Direct-Cool Single Door Refrigerator" << endl;
                    price = 105000;
                    cout << "Price = Rs. " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i41 = 41;
                    Buy("Refrigerator", quantity, price, total, i41);
                    choice();
                }
                else if (d == "Tubelight" || d == "tubelight" || d == "TUBELIGHT")
                {
                    cout << endl
                         << "EVEREADY Straight Linear LED Tubelight" << endl;
                    price = 750;
                    cout << "Price = Rs. " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total price = " << total << endl;
                    i42 = 42;
                    Buy("Tubelight", quantity, price, total, i42);
                    choice();
                }
                else
                {
                    cout << "Invalid Product !!! Please re-enter a valid PRODUCT" << endl;
                }
            }
            else if (c1 == 4)
            {
                cout << endl
                     << "Thank You for Shopping from the Electronics Section!" << endl;
                break;
            }
            else
            {
                cout << "Invalid choice !!! Please re-enter a valid choice" << endl;
            }
        } while (c1 != 4);
    }
};
bool isFull()
{
    if (front == 0 && rear == SIZE - 1)
    {
        return true;
    }
    if (front == rear + 1)
    {
        return true;
    }
    return false;
}
// Check if the queue is empty
bool isEmpty()
{
    if (front == -1 && rear == -1)
        return true;
    else
        return false;
}
// Adding an element
void enQueue()
{
    if (isFull())
    {
        cout << "Cart is full";
    }
    else
    {
        if (front == -1 && rear == -1)
            front = rear = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = d;

        cout << endl
             << items[rear] << " is added to the Cart" << endl;
    }
}
// Displaying all elements
void displayQueue()
{
    if (front == 0 && rear == 0)
    {
        cout << "\nCart is Empty" << endl;
        return;
    }

    else
    {
        cout << ("\nProducts in the cart are: ") << endl;
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
                cout << items[i] << endl;
        }
        else
        {
            for (int i = front; i < SIZE; i++)
                cout << items[i] << endl;

            for (int i = 0; i <= rear; i++)
                cout << items[i] << endl;
        }
    }
}
void buynow()
{
    int p, days, h;
    char otp[4];
    cout << endl
         << "1.Cash on Delivery\n2.Online Payment" << endl;
    cout << "\nEnter your payment method:";
    cin >> p;
    if (p == 1)
    {

        time_t now = time(0);
        char *date_time = ctime(&now);
        cout << "Enter customer name : " << endl;
        getline(cin >> ws, nm);
        cout << "Enter delivery address : " << endl;
        getline(cin, DelAdd);
        cout << "Generating your invoice .";
        Sleep(2000);
        cout << ".";
        Sleep(2000);
        cout << ".";
        Sleep(4000);
        cout << "\n\n";

        cout
            << left
            << setw(5)
            << "Customer Name : "
            << left
            << setw(20)
            << nm
            << setw(10)
            << left
            << setw(5)
            << "Date : " << date_time << "\n\n"
            << left
            << setw(25)
            << left
            << setw(50)

            << endl;

        cout
            << left
            << setw(5)
            << "Delivery Address : "
            << left
            << setw(50)
            << DelAdd
            << endl
            << "\nYour order will be delivered in 2 days.\n"
            << right
            << setw(125)
            << "~Regards"
            << endl
            << right
            << setw(125)
            << "Amazon"
            << endl;
        cout << "\n\n You bought " << Billing::objectCount << " products!" << endl;
        cout << endl
             << endl
             << "                           ***************************************************" << endl;
        ;
        cout << "                           *     Thank You for Shopping with MINI AMAZON!    *" << endl;
        cout << "                           *                  Visit Again!                   *" << endl;
        cout << "                           ***************************************************" << endl;
        ;
    }
    else if (p == 2)
    {
        cout << endl
             << "UPI ID: 3425341@amazonworldbank\n";
        cout << endl
             << "You can Pay Online with the above UPI ID" << endl;
        cout << "Enter OTP to proceed the transcation : " << endl;
        cin >> otp;
        h = strlen(otp);
        while (h != 4)
        {
            /* code */
            cout << "INVALID OTP!!" << endl;
            cout << "Re-enter correct OTP :" << endl;
            cin >> otp;
            h = strlen(otp);
        }

        time_t now = time(0);
        char *date_time = ctime(&now);
        cout << "Enter customer name : " << endl;
        getline(cin >> ws, nm);
        cout << "Enter delivery address : " << endl;
        getline(cin, DelAdd);
        cout << "Generating your invoice .";
        Sleep(2000);
        cout << ".";
        Sleep(2000);
        cout << ".";
        Sleep(4000);
        cout << "\n\n";

        cout
            << left
            << setw(5)
            << "Customer Name : "
            << left
            << setw(20)
            << nm
            << setw(10)
            << left
            << setw(5)
            << "Date : " << date_time << "\n\n"
            << left
            << setw(25)
            << left
            << setw(50)

            << endl;

        cout
            << left
            << setw(5)
            << "Delivery Address : "
            << left
            << setw(50)
            << DelAdd
            << endl
            << "\nYour order will be delivered in 2 days.\n"
            << right
            << setw(125)
            << "~Regards"
            << endl
            << right
            << setw(125)
            << "Amazon"
            << endl;
        cout << "\n\n You bought " << Billing::objectCount << " products!" << endl;
        cout << endl
             << endl
             << "                           ***************************************************" << endl;
        ;
        cout << "                           *     Thank You for Shopping with MINI AMAZON!    *" << endl;
        cout << "                           *                  Visit Again!                   *" << endl;
        cout << "                           ***************************************************" << endl;
        ;
    }
    else
    {
        cout << "\nInvalid choice! Please re-enter your choice " << endl;
    }
}
void choice()
{
    cout << "\n1.Buy Now\n2.Add to Cart\n3.Display Cart\n4.Exit\n";
    cout << endl
         << "Enter your choice:";
    cin >> ch2;
    switch (ch2)
    {
    case 1:
        buynow();
        break;
    case 2:
        enQueue();
        break;
    case 3:
        displayQueue();
        break;
    case 4:
        cout << endl
             << "Thank You shopping from the Groceries Section!" << endl;
        break;
    default:
        cout << "Invalid Choice!" << endl;
    }
}

int main()
{

    int j;
    cout << endl;
    cout << "                                 **********************************" << endl;
    cout << "                                 * ------------------------------ *" << endl;
    cout << "                                 *  -- WELCOME TO MINI AMAZON --  *" << endl;
    cout << "                                 * ------------------------------ *" << endl;
    cout << "                                 **********************************" << endl;
    home obj;

    do
    {
        cout << endl
             << endl
             << "                           *******************************************************\n";
        cout << "                           *     Following are the categories of MINI AMAZON:    *" << endl;
        cout << "                           *******************************************************";
        cout << endl
             << "\n                           1.Groceries                               2.Luggage\n"
             << "\n                           3.Clothing                                4.Electronics\n"
             << "\n                           5.Go to Cart                              6.Generate Invoice\n"
             << "\n                                                   7.Exit\n"
             << endl;
        cout << "Enter the category you want to shop from: ";
        cin >> ch1;
        if (ch1 == "1")
        {
            groceries g;
        }
        else if (ch1 == "2")
        {
            luggage l;
        }
        else if (ch1 == "3")
        {
            clothing c;
        }
        else if (ch1 == "4")
        {
            electronics e;
        }
        else if (ch1 == "5")
        {
            displayQueue();
        }
        else if (ch1 == "6")
        {
            if (front == 0 && rear == 0)
            {
                cout << "\nYour cart is currently empty! Add some items to checkout!! :)" << endl;
                // return;
            }
            else
            {
                Billing obj[50];
                time_t now = time(0);
                char *date_time = ctime(&now);
                cout << "Enter customer name : " << endl;
                getline(cin >> ws, nm);
                cout << "Enter delivery address : " << endl;
                getline(cin, DelAdd);
                cout << "Generating your invoice .";
                Sleep(2000);
                cout << ".";
                Sleep(2000);
                cout << ".";
                Sleep(4000);
                cout << "\n\n";

                cout
                    << left
                    << setw(5)
                    << "Customer Name : "
                    << left
                    << setw(20)
                    << nm
                    << setw(10)
                    << left
                    << setw(5)
                    << "Date : " << date_time << "\n\n"
                    << left
                    << setw(25)
                    << left
                    << setw(50)
                    << "Item name"
                    << left
                    << setw(10)
                    << "Qty"
                    << left
                    << setw(60)
                    << "Price"
                    << left
                    << setw(3)
                    << "Total"
                    << left
                    << setw(250)
                    << endl;

                for (int i = 0; i < n; i++)
                {
                    j = i;
                    obj[i].putdata(j);
                }

                cout
                    << left
                    << setw(5)
                    << "Delivery Address : "
                    << left
                    << setw(50)
                    << DelAdd
                    << endl
                    << right
                    << setw(125)
                    << "~Regards"
                    << endl
                    << right
                    << setw(125)
                    << "Amazon"
                    << endl;
                cout << "\n\n You bought " << Billing::objectCount << " products!" << endl;
                cout << endl
                     << endl
                     << "                           ***************************************************" << endl;

                cout << "                           *     Thank You for Shopping with MINI AMAZON!    *" << endl;
                cout << "                           *                  Visit Again!                   *" << endl;
                cout << "                           ***************************************************" << endl;
                ;
                break;
            }
        }
        else if (ch1 == "7")
        {
            cout << endl
                 << endl
                 << "                           ***************************************************\n";
            cout << "                           *     Thank You for Shopping with MINI AMAZON!    *" << endl;
            cout << "                           *                  Visit Again!                   *" << endl;
            cout << "                           ***************************************************";
            cout << endl;
            break;
        }
        else
        {
            cout << "Invalid !!!" << endl;
        }
    } while (ch1 != "7");
    return 0;
}
