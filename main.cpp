#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int quant;
    int choice;
     //Quantiy
     int Qroom{10}, Qpasta{10}, Qnoodles{10},Qburger{10},Qshake{10}, Qchicken{10};

     //Items sold
     int Srooms{0}, Spasta{0}, Snoodles{0}, Sburger{0},Sshake{0}, Schicken{0};

     //price of items
     int room_price{1200}, pasta_price{120}, noodles_price{250}, burger_price{300}, shake_price{100}, chicken_price{200};

     //Total price of items
     int Total_rooms{0}, Total_pasta{0}, Total_noodles{0}, Total_burgers{0}, Total_shake{0}, Total_chicken{0};
     int col_width=20;

     cout << "\t---Welcome---" << endl;
     cout << endl;

     m:
     cout << "\t Select from the menu: " << endl;
     cout << endl;
     cout << "\n1) Rooms" << endl;
     cout << "\n2) Pasta" << endl;
     cout << "\n3) Noodles" << endl;
     cout << "\n4) Burger" << endl;
     cout << "\n5) shake" << endl;
     cout << "\n6) Chicken" << endl;
     cout << "\n7) Information on sale" << endl;
     cout << "\n8) Exit" << endl;

     cout << "\t---Please enter your choice---: " << endl;
     cout << "\t -----------------------------" << endl;
     cout << endl;
     cin >> choice;

     switch(choice){
        case 1:
        cout << "Enter the number of rooms you need: " << endl;
        cin >> quant;
        
        if(Qroom - Srooms >= quant){
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + quant * room_price;
            cout << left;
            cout << setw(col_width) << "No. of rooms" << setw(col_width) << "Price" << setw(col_width) << "Total" << endl;
            cout << setw(col_width) << quant << setw(col_width) << room_price << setw(col_width) << Total_rooms << endl;

            }else{
            cout << left;
            cout << setw(col_width) <<"selected rooms" << setw(col_width) << "Availble rooms" << endl;
            cout << setw(col_width) << quant << setw(col_width) << Qroom-Srooms << endl; 
            }
        break;

        case 2:
        cout << "Amount of pasta: " << endl;
        cin >> quant;
        if(Qpasta- Spasta >= quant){
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + quant * pasta_price;
            cout << left;
            cout << setw(col_width) << "Quantity" << setw(col_width) << "Price" << setw(col_width) << "Total" << endl;
            cout << setw(col_width) << quant << setw(col_width) << pasta_price << setw(col_width) << Total_pasta << endl;

            }else{
            cout << left;
            cout << setw(col_width) <<"selected rooms" << setw(col_width) << "Availble rooms" << endl;
            cout << setw(col_width) << quant << setw(col_width) << Qpasta-Spasta << endl; 
            }
        break;

        case 3:
        cout << "Amount of burgers: " << endl;
        cin >> quant;
        if(Qnoodles - Snoodles >= quant){
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + quant * noodles_price;
            cout << left;
            cout << setw(col_width) << "Quantity" << setw(col_width) << "Price" << setw(col_width) << "Total" << endl;
            cout << setw(col_width) << quant << setw(col_width) << noodles_price << setw(col_width) << Total_noodles << endl;
            }else{
            cout << left;
            cout << setw(col_width) <<"Amount selected" << setw(col_width) << "Availble noodles" << endl;
            cout << setw(col_width) << quant << setw(col_width) << Qnoodles-Snoodles << endl; 
            }
        break;

        case 4:
        cout << "Amount of noodles: " << endl;
        cin >> quant;
        if(Qburger - Sburger >= quant){
            Sburger = Sburger + quant;
            Total_burgers = Total_burgers + quant * burger_price;
            cout << left;
            cout << setw(col_width) << "Quantity" << setw(col_width) << "Price" << setw(col_width) << "Total" << endl;
            cout << setw(col_width) << quant << setw(col_width) << burger_price << setw(col_width) << Total_burgers << endl;
            }else{
            cout << left;
            cout << setw(col_width) <<"Amount selected" << setw(col_width) << "Availble noodles" << endl;
            cout << setw(col_width) << quant << setw(col_width) << Qburger-Sburger << endl; 
            }
        break;

        case 5:
        cout << "Shakes to order: " << endl;
        cin >> quant;
        if(Qshake - Sshake >= quant){
            Sshake = Sshake + quant;
            Total_shake = Total_shake + quant * shake_price;
            cout << left;
            cout << setw(col_width) << "Quantity" << setw(col_width) << "Price" << setw(col_width) << "Total" << endl;
            cout << setw(col_width) << quant << setw(col_width) << shake_price << setw(col_width) << Total_shake << endl;
            }else{
            cout << left;
            cout << setw(col_width) <<"Amount selected" << setw(col_width) << "Availble noodles" << endl;
            cout << setw(col_width) << quant << setw(col_width) << Qburger-Sburger << endl; 
            }
        break;

        case 6:
        cout << "Chicken to order: " << endl;
        cin >> quant;
        if(Qchicken - Schicken >= quant){
            Schicken = Schicken + quant;
            Total_chicken = Total_chicken + quant * chicken_price;
            cout << left;
            cout << setw(col_width) << "Quantity" << setw(col_width) << "Price" << setw(col_width) << "Total" << endl;
            cout << setw(col_width) << quant << setw(col_width) << chicken_price << setw(col_width) << Total_chicken << endl;
            }else{
            cout << left;
            cout << setw(col_width) <<"Amount selected" << setw(col_width) << "Availble noodles" << endl;
            cout << setw(col_width) << quant << setw(col_width) << Qchicken-Schicken << endl; 
            }
        break;

        case 7:
            cout << "\t --Sales report--" << endl;
            cout << left;
            cout << setw(col_width) << "Item" << setw(col_width) << "Initial Quantity" << setw(col_width) << "Quantity sold" << setw(col_width)<<"Total sales" << endl;
            cout << setw(col_width) << "Rooms" << setw(col_width) << Qroom << setw(col_width) << Srooms << setw(col_width) << Total_rooms << endl;
            cout << setw(col_width) << "Pasta" << setw(col_width) << Qpasta << setw(col_width) << Spasta << setw(col_width) << Total_pasta << endl;
            cout << setw(col_width) << "Noodles" << setw(col_width) << Qnoodles << setw(col_width) << Snoodles << setw(col_width) << Total_noodles << endl;
            cout << setw(col_width) << "Burgers" << setw(col_width) << Qburger << setw(col_width) << Sburger << setw(col_width) << Total_burgers << endl;
            cout << setw(col_width) << "Shake" << setw(col_width) << Qshake << setw(col_width) << Sshake << setw(col_width) << Total_shake << endl;
            cout << setw(col_width) << "Chicken" << setw(col_width) << Qchicken << setw(col_width) << Schicken << setw(col_width) << Total_chicken << endl;
        break;

        case 8:
        exit(0);

        default:
            cout << "Not valid!" << endl;

     }
     goto m;


    return 0;
}