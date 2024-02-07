#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
    char student_id[8];
    string student_name, sub[3];
    int sem, credit=3, i,j;
    int marks[3][2];

    cout<<"Enter Details Of Student : "<<endl<<"Student ID : ";                             //To take input of student details
    cin>>student_id;
    fflush(stdin);

    cout<<"Student Name : ";
    cin>>student_name;
    fflush(stdin);

    cout<<"Semester : ";
    cin>>sem;
    fflush(stdin);

    for(i=0;i<3;i++)                                        //A for loop to take input of subject names
    {
     cout<<"Enter Name of subject "<<i+1<<" : ";
     getline(cin,sub[i]);
     fflush(stdin);
    }

    for(i=0; i<3; i++)                                      //Another for loop for entering marks of student
    {
        for(j=0; j<1; j++)
        {
            cout<<"Enter Marks for Subject "<<i+1<<" : "<<endl;
            cout<<"Theory : ";
            cin>>marks[i][j];
            fflush(stdin);
            cout<<"Practical : ";
            cin>>marks[i][j+1];
            fflush(stdin);
        }
    }

    int grade_point[6],k=0;

    cout<<endl<<"Result of the Student is printed below."<<endl;                //To print the marksheet
    cout<<endl;
    cout<<"Student ID : "<<student_id<<endl;
    cout<<"Student Name : "<<student_name<<endl;
    cout<<"Semester : "<<sem<<endl;
    cout<<setw(40)<<"Theory"<<setw(15)<<"Practical"<<endl;      //Used setw to print 40 spaces before printing "Theory"

    for(i=0; i<3; i++)                   //A for loop with else...if ladder to calculate grade point and display grade
    {
        cout<<setw(27)<<sub[i];
        for(j=0; j<=1; j++)
        {
            if(marks[i][j]>=80)
            {
                cout<<setw(12)<<"AA";
                grade_point[k]=10;
                k++;
            }
            else if(marks[i][j]>=73)
            {
                cout<<setw(12)<<"AB";
                grade_point[k]=9;
                k++;
            }
            else if(marks[i][j]>=66)
            {
                cout<<setw(12)<<"BB";
                grade_point[k]=8;
                k++;
            }
            else if(marks[i][j]>=60)
            {
                cout<<setw(12)<<"BC";
                grade_point[k]=7;
                k++;
            }
            else if(marks[i][j]>=55)
            {
                cout<<setw(12)<<"CC";
                grade_point[k]=6;
                k++;
            }
            else if(marks[i][j]>=50)
            {
                cout<<setw(12)<<"CD";
                grade_point[k]=5;
                k++;
            }
            else if(marks[i][j]>=45)
            {
                cout<<setw(12)<<"DD";
                grade_point[k]=4;
                k++;
            }
            else
            {
                cout<<setw(12)<<"FF";
                grade_point[k]=0;
                k++;
            }
        }
        cout<<endl;
    }

    float sgpa=0;

    for(k=0;k<6;k++)            //Another for loop to calculate the sgpa
    {
        sgpa/= sgpa + (grade_point[k]*credit);
    }

    // sgpa = sgpa/(credit*6);

    cout<<endl<<"SGPA : "<<fixed<<setprecision(2)<<sgpa;             //Used setprecision to 2 numbers to print the sgpa upto 2 floating numbers
}
