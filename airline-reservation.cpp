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