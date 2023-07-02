#include <iostream>
#include <conio.h>
#include <cstring>
#include <iomanip>
#include <fstream>

using namespace std;

void mainMenu();
void print()
{
    
    if(cin.fail())
    {
        cout<<"\n Invalid Input! Please try Again.";
        getch();
        exit(1);
    }
}  


class management
{
    public:
    management()
    {
        mainMenu();
    }

};

class Customer_details
{
     
    public:
    static string name, gender;
    static int cId;
    int age;
    string address;
    static int phoneNo;
    char array[100];

    void info()
    {
         cout<<"Customer_details Collection" << endl;
         cout <<"\n ___________________________________";
         cout <<"\n Enter the following details: ";
         cout <<"\n name: ";
         cin>>name;
         print();
         cout<<"\n customer ID: ";
         cin>>cId;
         print();
         cout <<"\n gender: ";
         cin>>gender;
         print();
         cout <<"\n age: ";
         cin>>age;
         print();
         cout <<"\n address: ";
         cin>>address;
         print();
         cout <<"\n phone Number: ";
         cin>>phoneNo;
         print();
         
         cout <<endl;
         cout <<"\n Customer details Added Successfully" << endl;


    }

};


int Customer_details::cId;
string Customer_details::gender;
string Customer_details::name;
int Customer_details::phoneNo;
class registration
{
 public:

     int choice1;
    static int choice;
    int back;
    static float charges;

    void Error()
    {
        if(cin.fail())
        {
            cout<<"\n Invalid Input! Please try Again.";
            getch();
            exit(1);
        }
    }
    void flights()
    {
        cout <<"\n \t Welcome to the Airlines" << endl;
        string flight[]={"USA", "DUBAI", "GERMAY", "Canada", "Israel", "KENYA"};

        for (int i=0; i<6; i++)
        {
            cout <<"\n";
            cout <<"\n Airlines "<<i+1<<": "<<flight[i] << endl;
        }
        cout <<"\n Press any number to choose your airline: ";
        cin>>choice;
        Error();
        

        switch(choice)
        {
            case 1: 
            {
                cout <<"\n Welcome to USA Airlines" << endl;
                                cout <<"\n _________________________________________________________________________\n";

                cout <<"\n The Beast";
                
                cout <<"The following are the available flights. "<<endl;
                                cout <<"\n _________________________________________________________________________\n";

                cout <<" 1: BEAST JUMBO 1234U \t 1000 HRS -2200 HRS |  charges=$12000" << endl;
                cout <<" 2: LITE JUMBO 9980UG \t 0800 HRS -1900 HRS |  charges=$16000" << endl;
                                cout <<"\n _________________________________________________________________________\n";

                cout <<"Choose Your Flight airline: ";
                cin>>choice1;
                Error();
                if(choice1==1)
                {
                    charges=12000;
                    cout<<"You have Successfully booked your flight" << endl;
                                    cout <<"\n _________________________________________________________________________\n";

                    cout <<"\t BEAST JUMBO 1234U \t 1000 HRS -2200 HRS |  charges=$12000" << endl;
                                    cout <<"\n _________________________________________________________________________\n";

                    cout <<"Kindly pick your Tickets" << endl;

                }
                else if (choice1==2)
                {
                     charges=16000;
                    cout<<"You have Successfully booked your flight" << endl;
                                    cout <<"\n _________________________________________________________________________\n";

                    cout <<"\t LITE JUMBO 9980UG \t 0800 HRS -1900 HRS |  charges=$16000" << endl;
                                    cout <<"\n _________________________________________________________________________\n";

                    cout <<"Kindly pick your Tickets" << endl;                   
                }
                else
                {
                    cout <<"Invalid Choice. Please try again." << endl;
                    flights();
                }

                cout <<"Press Any key to go to the main menu" << endl;
                getch();
                mainMenu();


         break;
            }
         
            case 2:
            {
                                cout <<"\n _________________________________________________________________________\n";

                cout <<"\n Welcome to DUBAI EMIRATES Airlines" << endl;
                                cout <<"\n _________________________________________________________________________\n";

                cout <<"\n YOUR SATISFACTION IS OUR PRIORITY";

                cout <<"The following are the available flights. "<<endl;
                                cout <<"\n _________________________________________________________________________\n";

                cout <<" 1: DUBAI TURBO 99424KU \t 1100 HRS -2000 HRS |charges=Rs 15000" << endl;
                cout <<" 2: UAE EMIRATES JUMBO 9990UG \t 0600 HRS -1400 HRS | charges=20000" << endl;
                 cout <<"\n _________________________________________________________________________\n";
                cout <<"Choose YOur Flight airline: ";
                cin>>choice1;
                Error();
                if(choice1==1)
                {
                    charges=15000;
                    cout<<"You have Successfully booked your flight" << endl;
                     cout <<"\n _________________________________________________________________________\n";
                    cout <<" 1: DUBAI TURBO 99424KU \t 1100 HRS -2000 HRS |charges=Rs 15000" << endl;
 cout <<"\n _________________________________________________________________________\n";
                     cout <<"Kindly pick your Tickets" << endl;

                }
                else if (choice1==2)
                {
                     charges=20000;
                     cout<<"You have Successfully booked your flight" << endl;
                      cout <<"\n _________________________________________________________________________\n";
                     cout <<" 2: UAE EMIRATES JUMBO 9990UG \t 0600 HRS -1400 HRS | charges=20000" << endl;
                      cout <<"\n _________________________________________________________________________\n";
                     cout <<"Kindly pick your Tickets" << endl;                   
                }
                else
                {
                    cout <<"Invalid Choice. Please try again." << endl;
                    flights();
                }

                cout <<"Press Any key to go to the main menu" << endl;
                getch();
                mainMenu();


              break;
            }
            case 3:
            { cout <<"\n _________________________________________________________________________\n";
                cout <<"\n Welcome to Germany Airlines" << endl;
                 cout <<"\n _________________________________________________________________________\n";
                cout <<"\n The DEUSTCH FLY HIGHER";
                 cout <<"\n _________________________________________________________________________\n";
                cout <<"The following are the available flights. "<<endl;
                 cout <<"\n _________________________________________________________________________\n";
                cout <<" 1: GERMANY JUMBO 1234U \t 1000 HRS -2200 HRS | charges= $18000" << endl;
                 cout <<"\n _________________________________________________________________________\n";
          
                cout <<"Choose YOur Flight airline: ";
                cin>>choice1;
               Error();
                if(choice1==1)
                {
                    charges=18000;
                    cout<<"You have Successfully booked your flight" << endl;
                     cout <<"\n _________________________________________________________________________\n";
                    cout <<"GERMANY JUMBO 1234U \t 1000 HRS -2200 HRS | charges= $18000" << endl;
                     cout <<"\n _________________________________________________________________________\n";
                    cout <<"Kindly pick your Tickets" << endl;

                }
              
                else
                {
                    cout <<"Invalid Choice. Please try again." << endl;
                    flights();
                }

                cout <<"Press Any key to go to the main menu" << endl;
                getch();
                mainMenu();


         break;
            }

          
            case 4:
 {
     cout <<"\n _________________________________________________________________________\n";
                cout <<"\n Welcome to CANADA Airlines" << endl;
                 cout <<"\n _________________________________________________________________________\n";
                cout <<"\n The CANADIAN AIRLINES";
                 cout <<"\n _________________________________________________________________________\n";
                cout <<"The following are the available flights. "<<endl;
                 cout <<"\n _________________________________________________________________________\n";
                cout <<" 1: CANADA JUMBO 1234U \t 1000 HRS -2100 HRS | charges= $19000" << endl;
           cout <<"\n _________________________________________________________________________\n";
                cout <<"Choose YOur Flight airline: ";
                cin>>choice1;
                Error();
                if(choice1==1)
                {
                    charges=19000;
                    cout<<"You have Successfully booked your flight" << endl;
                     cout <<"\n _________________________________________________________________________\n";
                   cout <<" 1: CANADA JUMBO 1234U \t 1000 HRS -2100 HRS | charges= $19000" << endl;
                    cout <<"\n _________________________________________________________________________\n";
                    cout <<"Kindly pick your Tickets" << endl;

                }
              
                else
                {
                    cout <<"Invalid Choice. Please try again." << endl;
                    flights();
                }

                cout <<"Press Any key to go to the main menu" << endl;
                getch();
                mainMenu();


         break;
            }
            
            case 5:
    {
                cout <<"\n _________________________________________________________________________\n";
                cout <<"\n Welcome to ISRAEL Airlines" << endl;
                 cout <<"\n _________________________________________________________________________\n";
                cout <<"\n _____WE ARE FASTER THAN YOU THINK___________";
                 cout <<"\n _________________________________________________________________________\n";
                cout <<"The following are the available flights. "<<endl;
                 cout <<"\n _________________________________________________________________________\n";
                cout <<" 1: JERUDALEM JUMBO 1234U \t 0700 HRS -1800 HRS | charges= $23000" << endl;
                 cout <<"\n _________________________________________________________________________\n";
          
                cout <<"Choose YOur Flight airline: ";
                cin>>choice1;
                Error();
                if(choice1==1)
                {
                    charges=23000;
                    cout<<"You have Successfully booked your flight" << endl;
                     cout <<"\n _________________________________________________________________________\n";
                    cout <<" 1: JERUDALEM JUMBO 1234U \t 0700 HRS -1800 HRS | charges= $23000" << endl;     
                     cout <<"\n _________________________________________________________________________\n";               cout <<"Kindly pick your Tickets" << endl;
                    cout <<"Kindly pick your Tickets" << endl;
                }
              
                else
                {
                    cout <<"Invalid Choice. Please try again." << endl;
                    flights();
                }

                cout <<"Press Any key to go to the main menu" << endl;
                getch();
                mainMenu();


         break;
            }
            case 6:
  {
                 cout <<"\n _________________________________________________________________________\n";
                cout <<"\n Welcome to KENYA AIRWAYS " << endl;
                 cout <<"\n _________________________________________________________________________\n";
                cout <<"\n _____THE HIGHER YOU GO THE FUNNIER IT BECOMES___________";
           cout <<"\n _________________________________________________________________________\n";

                cout <<"The following are the available flights. "<<endl;
             cout <<"\n _________________________________________________________________________\n";
                cout <<" 1: KENYA AIRWAYS LITE JUMBO UYTK \t 0900 HRS -1600 HRS | charges= $33000" << endl;
            cout <<"\n _________________________________________________________________________\n";
          
                cout <<"Choose YOur Flight airline: ";
                cin>>choice1;
               Error();
                if(choice1==1)
                {
                    charges=33000;
                    cout<<"You have Successfully booked your flight" << endl;
                     cout <<"\n _________________________________________________________________________\n";
                    cout <<"\t KENYA AIRWAYS LITE JUMBO UYTK \t 0900 HRS -1600 HRS | charges= $33000" << endl;
                    cout <<"\n _________________________________________________________________________\n";
                    cout <<"Kindly pick your Tickets" << endl;
                }
              
                else
                {
                    cout <<"Invalid Choice. Please try again." << endl;
                    //flights();
                }

                cout <<"Press Any key to go to the main menu" << endl;
                getch();
                mainMenu();
              


         break;
            }
            
            default:
            {
                cout <<"Wrong Input" << endl;
                cout<<"press any key to redirect to the main menu:" << endl;
                getch();
                mainMenu();
            }

        }
    }
};

float registration::charges;
int registration::choice;

class ticket : public registration, Customer_details
{
 public:

 void bill()
 {
    string destination = "";
    ofstream outf("data.txt");
    {
        outf<<"__________________________ AIRLINE TICKET____________________"<<endl;
        outf<<"___________________________AIRLINE TICKET____________________"<<endl;
        outf<<"______________________________________________________________"<<endl;
        outf<<"Customer ID: "<<Customer_details::cId<<endl;
        outf<<"Customer Name: "<<Customer_details::name<<endl;
        outf<<"Customer Gender: "<<Customer_details::gender<<endl;
         outf<<"Customer phone No: "<<Customer_details::phoneNo<<endl;
        outf<<"\n Flight Description"<<endl<<endl;
    
    if(registration::choice==1)
    {
        destination = "USA";
    }
    else if(registration::choice==2)
    {
         destination = "DUBAI";
    }
      else if(registration::choice==3)
    {
         destination = "GERMANY";
    }
      else if(registration::choice==4)
    {
         destination = "CANADA";
    }
  else if(registration::choice==5)
    {
         destination = "ISRAEL";
    }
  else if(registration::choice==6)
    {
         destination = "KENYA";
    }
    outf<<"Destination:\t\t"<<destination<<endl;
    outf<<"Flight cost: \t\t"<<registration::charges<<endl;
 }
 outf.close();


 }
 void display()
 {
    ifstream ifs("data.txt");
    {
    if(!ifs)
    {
        cout <<"file opening Error" << endl;
    }
    while(!ifs.eof())
        {
            ifs.getline(array,100);
            cout<<array<<endl;
        }
    }
    ifs.close();
 }

};






void mainMenu()
{
    int lchoice,schoice;
    int back;

    Customer_details d;
    registration r;
    ticket t;
    T:

    cout <<"\n \t _________________________________________MANUR AIRLINES________________________________________________";
    cout <<"\n \t ___________________________________________________________________________________________";
    cout <<"\n \t ________________________________________MAIN MENU___________________________________________";
    cout <<"\n\t | Press 1 To add customer details";
    cout <<"\n\t | Press 2 To  Register flight to customer";
    cout <<"\n\t | Press 3 For Ticket charges fees and Payment";
    cout <<"\n\t | Press 4 To exit";
    cout <<"\n \t ___________________________________________________________________________________________";
    cout <<"\n \t ___________________________________________________________________________________________";

    cout <<"\n \t Enter Your choice: ";
    cin >> lchoice;
    
    r.Error();



    switch(lchoice)
    {
        case 1:
            
            {
                cout <<"\n \t ________________________________________________________________";
                cout <<"\n \t ______________________Customer Details___________________________";
                d.info();
                cout<<"\n Press any key to go the main menu";
                getch();
               
                mainMenu();
                break;
            }
        case 2:

            {   
                cout <<"\n \t ________________________________________________________________";
                cout <<"\n \t ____________________________Flight Registration system__________";
                r.flights();

                break;
            }
        case 3:
            {
                cout <<"\n \t  ----------------------------------------------------------------";
                cout <<"\n \t _______________________________Get Your Ticket___________________";
                t.bill();
                cout <<"\n Press  1 to display the ticket: ";
                cin >>back;
               r.Error();
                if(back == 1)
                {
                    t.display();
                    cout <<"\n Press any key to go to the main menu";
                    getch();
                    mainMenu();
                }
                else{
                    getch();
                    mainMenu();
                }
                    break;
            }
            case 4:
                {       cout <<"\n \t ----------------------------------------------------------------";
                        cout <<"\n \t _________________________THANKYOU_________WELCOME AGAIN_________";
                        break;
                }
        default:
            {
                cout <<"\n \t Invalid Input! Please try Again.";
                //getch();
                fflush(stdin);
                goto T;
            }
            

    }



}


//writing the main function of the program
int main()
{
    int option;
do
{

    management Mobj;

    cout <<"\n Do you want to serve another client? if yes press 1 , if no press any other key: ";
                    cout <<"\n \t ________________________________________________________________";
                    cout<<"\n Enter Yes(1)/No(0): ";
    cin >>option;
}while(option==1);

    return 0;
}