#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
using namespace std;
class TATA
{
    private:
    string Modelname,Fueltype,airbag,Transmission;
    float Price,Mileage,Tankcap;
    int seat,carchoice;
    public:
    void getcardetail()
    {
        cout << "Enter the Model Name : ";
        fflush(stdin);
        getline(cin,Modelname);
        cout << "Enter the Fuel Type : ";
        cin >> Fueltype;
        cout << "Enter the Showroom Price : ";
        cin >> Price;
        cout << "Enter the Mileage : ";
        cin >> Mileage;
        cout << "Enter the Transmission Type : ";
        cin >> Transmission;
        cout << "Enter the Capacity of Tank : ";
        cin >> Tankcap;
        cout << "Enter the seating of car : ";
        cin >> seat;
        cout << "Do car have the airbags : ";
        cin >> airbag; 
    }
    void searchmodel(string Findmodel)
    {
        char MArray[10],Fmodel[15];
        strcpy(MArray,Modelname.c_str());
        strcpy(Fmodel,Findmodel.c_str());
        if(strcmp(MArray,Fmodel)==0)
        {
            cout << Modelname << setw(15) << Fueltype << setw(15) << Price << setw(15) << Mileage << setw(15) << Transmission << setw(18) ;
            cout << Tankcap << setw(20) << seat << setw(11) << airbag  << endl;
        }
    }
    void searchfuel(string fuel)
    {
        char arr[40],arr1[10];
        strcpy(arr,fuel.c_str());
        strcpy(arr1,Fueltype.c_str());
        if(strcmp(arr1,arr)==0)
        {
            cout << Modelname << setw(15) << Fueltype << setw(15) << Price << setw(15) << Mileage << setw(15) << Transmission << setw(18) ;
            cout << Tankcap << setw(20) << seat << setw(11) << airbag  << endl;
        }
    }
    void Sortbyprice(float affordprice)
    {
        if(affordprice>Price)
        {
            cout << Modelname << setw(15) << Fueltype << setw(15) << Price << setw(15) << Mileage << setw(15) << Transmission << setw(18) ;
            cout << Tankcap << setw(20) << seat << setw(11) << airbag  << endl;
        }
    }
}car[30];
int main()
{   
    int n,i,search,fuels,SModel,afford;
    cout << "Enter the number of car you want to enter : ";
    cin >> n;
    for(i=0;i<n;i++)
    {
        car[i].getcardetail();
    }
    system("CLS");
    cout << "Welcome to TATA Motors\n";
    cout << "Get the car details as per your preference.\n";
    cout << "1)Model name\n";
    cout << "2)Fuel type\n";
    cout << "3)Price Range\n";
    cout << "Enter your option : ";
    cin >> search;
    switch(search)
    {
        case 1:
        cout << "------------------------------------------";
        cout << "\nList of cars";
        cout << "\n(1)TIAGO\t(2)PUNCH\t(3)ALTROZ\t(4)TIGOR\t(5)NEXON\t(6)HARRIER\t(7)SAFARI";
        cout << "\nCHOOSE YOUR CAR TO GET DETAILS : ";
        cin >> SModel;
        cout << "Model" << setw(15) << "Fuel" << setw(15) << "Price" << setw(15) << "Mileage" << setw(15) << "Transmission" << setw(18) ;
        cout << "Tank Capacity" << setw(20) << "Seating capacity" << setw(11) << "Airbags\n" ;
        switch(SModel)
        {
            case 1:
            for(i=0;i<n;i++)
            {
                car[i].searchmodel("tiago");
            }
            break;
            case 2:
            for(i=0;i<n;i++)
            {
                car[i].searchmodel("punch");
            }
            break;
            case 3:
            for(i=0;i<n;i++)
            {
                car[i].searchmodel("altroz");
            }
            break;
            case 4:
            for(i=0;i<n;i++)
            {
                car[i].searchmodel("tigor");
            }
            break;
            case 5:
            for(i=0;i<n;i++)
            {
                car[i].searchmodel("nexon");
            }
            break;
            case 6:
            for(i=0;i<n;i++)
            {
                car[i].searchmodel("harrier");
            }
            break;
            case 7:
            for(i=0;i<n;i++)
            {
                car[i].searchmodel("safari");
            }
            break;
        }
        break;
        case 2 :
        cout << "------------------------------------------";
        cout << "TATA MOTORS ARE AVAILABLE WITH  FUEL OPTIONS.";
        cout << "\n1)PETROL \t2)DIESEL \t3)CNG \t4)ELECTRIC";
        cout << "\nEnter your fuel preference : "; 
        cin >> fuels;
        cout << "Model" << setw(15) << "Fuel" << setw(15) << "Price" << setw(15) << "Mileage" << setw(15) << "Transmission" << setw(18) ;
        cout << "Tank Capacity" << setw(20) << "Seating capacity" << setw(11) << "Airbags\n" ;
        switch(fuels)
        {
            case 1:
            for(i=0;i<n;i++)
            {
                car[i].searchfuel("petrol");
            }
            break;
            case 2:
            for(i=0;i<n;i++)
            {
                car[i].searchfuel("diesel");
            }
            break;
            case 3:
            for(i=0;i<n;i++)
            {
                car[i].searchfuel("CNG");
            }
            break;
            case 4:
            for(i=0;i<n;i++)
            {
                car[i].searchfuel("electric");
            }
            break;
        }
        break;
        case 3:
        cout << "------------------------------------------";
        cout << "\nENTER THE MAXIMUM AFFORDABLE RANGE IN LAKHS : ";
        cin >> afford;
        cout << "Model" << setw(15) << "Fuel" << setw(15) << "Price" << setw(15) << "Mileage" << setw(15) << "Transmission" << setw(18) ;
        cout << "Tank Capacity" << setw(20) << "Seating capacity" << setw(11) << "Airbags\n" ;
        for(i=0;i<n;i++)
        {
            car[i].Sortbyprice(afford);
        }
        break;
    }
}