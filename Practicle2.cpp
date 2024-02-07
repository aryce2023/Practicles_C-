#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct employee              //Created a structure employee to store data of different employees
{
    private:                //This are private objects accessed within structure only
    int emp_id;
    string emp_name,qualification,exp;
    long long int contact;
    
    public:                 //This are public objects which can be accessed within main() also

    void getdata()           //A function to collect data of employees from user
    {
        cout << "\nEnter an Employee id : ";
        cin >> emp_id;
        cout << "Employee Name   : ";
        fflush(stdin);
        getline(cin,emp_name);
        cout << "Qualification   : ";
        getline(cin, qualification);
        fflush(stdin);
        cout << "Experience      : ";
        getline(cin, exp);
        fflush(stdin);
        cout << "Contact Number  : ";
        cin >> contact;
    }

    int putdata(int id)     //A function to display the stored data
    {
        cout << "--------------------------------------\n";
        if(emp_id==id)
        {
            cout << "Employee Name   : " << emp_name;
            cout << endl << "Qualification   : " << qualification;
            cout << endl << "Experience      : " << exp;
            cout << endl << "Contact Number  : " << contact;
            cout << endl;
            return 1;
        }
        else
            return 0;
    }
}emp[15];

int main()
{
    int n, search, result;
    char next='Y';
    cout << "Enter the number of employees : ";
    cin >> n;
    for(int j=0; j<n; j++)          //A for loop to enter the id of the employee
    {
        emp[j].getdata();           //Getdata function is called
            break;
    }
    fflush(stdin);
    x:cout << "\nSearch employee id : ";
    cin >> search;
    for(int j=0; j<n; j++)         //A for loop to search given employee id within all the employee ids 
    {
        result = emp[j].putdata(search);            //Putdata function is called
        cout << "--------------------------------------\n";
       
    }
    if(result==0)
        {
            cout << "\nERROR : ENTER EMPLOYEE ID DOESN'T EXIST\n\n";
        }
    cout <<  "Press Y to get another employee detail, Press N to exit : ";
    cin >> next;
    if(next=='Y')
        goto x;             //Goto statement to give the choice whether you wants to get another employee detail or to exit rom the code
    
    return 0;
}
