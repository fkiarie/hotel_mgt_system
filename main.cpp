#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;
     //Quantiy
     int Qroom{0}, Qpasta{0}, Qnoodles{0},Qburger{0},Qshake{0}, Qchicken{0};

     //Items sold
     int Srooms{0}, Spasta{0}, Snoodles{0}, Sburger{0},Sshake{0}, Schicken{0};

     //Total price of items
     int Total_rooms{0}, Total_pasta{0}, Total_noodles{0}, Total_burgers{0}, Total_shake{0}, Total_chicken{0};

     //input the quantity of items available. 
     cout << "Input the items in stock: " << endl;
     cout << "\tRooms available: " << endl;
     cin >> Qroom;
     cout << "\tpasta available: " << endl;
     cin >> Qpasta;
     cout << "\tNoodles available: " << endl;
     cin >> Qnoodles;
     cout << "\tBurgers available: " << endl;
     cin >> Qburger;
     cout << "\tShakes available: " << endl;
     cin >> Qshake;
     cout << "\tChicken available: " << endl;
     cin >> Qchicken;

     cout << "\t Select from the menu: " << endl;
     cout << "\n1) Rooms" << endl;
     cout << "\n2) Pasta" << endl;
     cout << "\n3) Noodles" << endl;
     cout << "\n4) Burger" << endl;
     cout << "\n5) shake" << endl;
     cout << "\n6) Chicken" << endl;
     cout << "\n7) Information on sale" << endl;
     cout << "\n8 Exit" << endl;

     cout << "Please enter your choice: " << endl;
     cin >> choice;


    return 0;
}