#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management{
    public:

        Management(){
            mainMenu();
        }
};

class details{
    public:
        static string name, gender;
        int phoneNo;
        int age;
        string add;
        static int cID;
        char arr[100];

        void information(){
            cout<<"\nEnter the customer ID: ";
            cin>>cID;
            cout<<"\nEnter the name: ";
            cin>>name;
            cout<<"\nEnter the age: ";
            cin>>age;
            cout<<"\nEnter the address: ";
            cin>>add;
            cout<<"\nEnter the gender:";
            cin>>gender;

            cout<<"Your details are saved with us\n";
        }
};

int details::cID;
string details::name;
string details::gender;

class registration{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights(){
            string flightN[]={"Emirates","Canada","UK", "USA", "Australia", "Europe"};

            for (int a = 0; a < 6; a++){
                cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
            }

            cout<<"\nWelcome to the Fast Airlines!\n";
            cout<<"Enter the number of the country for which you want to book the flight:";
            cin>>choice;

            cout<<"_______________Welcome to "<<flightN[choice]<<" Airlines_______________\n";
            
            cout<<"Your comfort is our priority. Enjoy your journey!"<<endl;

            cout<<"Following are the flights \n"<<endl;

            switch(choice){
                case 1:
                    cout<<"1. DUB - 498"<<endl;
                    cout<<"\t08-01-2022 8:00 AM 10hrs 980CAD"<<endl;

                    cout<<"2. DUB - 498"<<endl;
                    cout<<"\t09-01-2022 10:00 AM 10hrs 1100CAD"<<endl;

                    cout<<"\nSelect the flight you want to book: ";
                    cin >> choice1;

                    if(choice == 1){
                        charges = 980;
                    }
                    else{
                        charges = 1100;
                    }

                case 2:
                    cout<<"1. CA - 235"<<endl;
                    cout<<"\t08-01-2022 8:00 AM 10hrs 1500CAD"<<endl;

                    cout<<"2. CA - 256"<<endl;
                    cout<<"\t09-01-2022 10:00 AM 10hrs 1300CAD"<<endl;

                    cout<<"\nSelect the flight you want to book: ";
                    cin >> choice1;

                    if(choice == 1){
                        charges = 1500;
                    }
                    else{
                        charges = 1300;
                    }
                
                case 3:
                    cout<<"1. UK - 365"<<endl;
                    cout<<"\t08-01-2022 8:00 AM 10hrs 1400CAD"<<endl;

                    cout<<"2. UK - 387"<<endl;
                    cout<<"\t09-01-2022 10:00 AM 10hrs 1300CAD"<<endl;

                    cout<<"\nSelect the flight you want to book: ";
                    cin >> choice1;

                    if(choice == 1){
                        charges = 1400;
                    }
                    else{
                        charges = 1300;
                    }

                case 4:
                    cout<<"1. US - 567"<<endl;
                    cout<<"\t08-01-2022 8:00 AM 10hrs 780CAD"<<endl;

                    cout<<"2. US - 598"<<endl;
                    cout<<"\t09-01-2022 10:00 AM 10hrs 870CAD"<<endl;

                    cout<<"\nSelect the flight you want to book: ";
                    cin >> choice1;

                    if(choice == 1){
                        charges = 780;
                    }
                    else{
                        charges = 870;
                    }

                case 5:
                    cout<<"1. AUS - 795"<<endl;
                    cout<<"\t08-01-2022 8:00 AM 10hrs 735CAD"<<endl;

                    cout<<"2. AUS - 751"<<endl;
                    cout<<"\t09-01-2022 10:00 AM 10hrs 965CAD"<<endl;

                    cout<<"\nSelect the flight you want to book: ";
                    cin >> choice1;

                    if(choice == 1){
                        charges = 735;
                    }
                    else{
                        charges = 965;
                    }
                
                case 6:
                    cout<<"1. EUR - 498"<<endl;
                    cout<<"\t08-01-2022 8:00 AM 10hrs 980CAD"<<endl;

                    cout<<"2. EUR - 498"<<endl;
                    cout<<"\t09-01-2022 10:00 AM 10hrs 1100CAD"<<endl;

                    cout<<"\nSelect the flight you want to book: ";
                    cin >> choice1;

                    if(choice == 1){
                        charges = 980;
                    }
                    else{
                        charges = 1100;
                    }
                
                default:
                    cout<<"Wrong entry! Shifting to the main menu!\n";
                    mainMenu();
                    break;
            }
            cout<<"\nYou have successfully booked the flight!\n";
            cout<<"enter any key to go back to the main menu: ";
            cin >> back;
            mainMenu();
            
        }
};

void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout<<"\t                 Fast Airlines \n"<<endl;
    cout<<"\t_______________Main Menu__________________"<<endl;

    cout<<"\t__________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;

    cout<<"\t\t Enter 1 to add the Customer Details     \t|"<<endl;
    cout<<"\t\t Enter 2 for Flight Registration         \t|"<<endl;
    cout<<"\t\t Enter 3 for Ticket and Charges          \t|"<<endl;
    cout<<"\t\t Enter 4 to Exit                         \t|"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;
    cout<<"\t___________________________________________"<<endl;

    cout<<"Enter the choice: ";
    cin>>lchoice;

    details d;
    registration r;
    ticket t;

    switch(lchoice){
        case 1:{
                cout<<"_____________Customers____________"<<endl;
                d.information();
                cout<<"Enter any key to go back to the Main Menu";
                cin>>back;

                if(back == 1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                break;
            }
        case 2:{
            cout<<"_____________Book a flight using this system_________\n";
            r.flights();
            break;
        }

        case 3:{
            cout<<"____________Get Your Ticket_______________\n";
            t.bill();
            cout<<"Your ticket is printed; you can collect it!\n";
            cout<<"Enter 1 to display your ticket\n";

            cin>>back;

            if(back == 1){
                t.display();
                cout<<"Press any key to go back to the main manu:";
                cin>>back;
                if(back == 1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
                break;
            }
        }
        
        case 4:{
            cout<<"\n\n\t__________Thank You___________"<<endl;
            break;
        }

        default:{
            cout<<"Invalid input; Please try again!\n";
            mainMenu();
            break;
        }

    }
}


int main(){
    Management Mobj;
    return 0;
}