#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m1,m2,m3;
    float total,average,percentage,grade;
    cout<<"enter marks1"<<endl;
    cin>>m1;
    cout<<"enter marks2"<<endl;
    cin>>m2;
    cout<<"enter marks3"<<endl;
    cin>>m3;
    total=m1+m2+m3;
    average=total/3;
    percentage=total/3;
    cout<<endl;
    cout<<"******************************************************"<<endl;
    cout<<"          STUDENT RECORD MANAGEMENT SYSTEM            "<<endl;
    cout<<"******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<" Acedemic Summery                                     "<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Total Marks "<<setw(7)<<":"<<total<<endl;
    cout<<"Average Marks "<<setw(5)<<":"<<average<<endl;
    cout<<"Percentage "<<setw(8)<<":"<<percentage<<"%"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<" Acedemic Result                                      "<<endl;
    cout<<"------------------------------------------------------"<<endl;
     cout<<endl;
    if(percentage<=100 && percentage>=40)
    {


        cout<<"Result "<<setw(12)<<":"<<"Pass"<<endl;
        if(percentage<=100 && percentage>=90)
        {


            cout<<"Grade "<<setw(13)<<":"<<"O"<<endl;
            cout<<"Performance "<<setw(7)<<":"<<"Outstanding"<<endl;
        }
        else if(percentage<=89 && percentage>=80)
        {

            cout<<"Grade "<<setw(13)<<":"<<"A+"<<endl;
            cout<<"Performance "<<setw(7)<<":"<<"Excellent"<<endl;
        }
        else if(percentage<=79 && percentage>=70)
        {

            cout<<"Grade "<<setw(13)<<":"<<"A"<<endl;
            cout<<"Performance "<<setw(7)<<":"<<"Very Good"<<endl;
        }
        else if(percentage<=69 && percentage>=60)
        {

            cout<<"Grade "<<setw(13)<<":"<<"B+"<<endl;
            cout<<"Performance "<<setw(7)<<":"<<"Good"<<endl;
        }
        else if(percentage<=59 && percentage>=50)
        {

            cout<<"Grade "<<setw(13)<<":"<<"B"<<endl;
            cout<<"Performance "<<setw(7)<<":"<<"Satisfactory"<<endl;
        }
        else if(percentage<=49 && percentage>=40)
        {

            cout<<"Grade "<<setw(13)<<":"<<"C"<<endl;
            cout<<"Performance "<<setw(7)<<":"<<"Needs Improvement"<<endl;
        }

    }
    else
    {


        cout<<"Result "<<setw(12)<<":"<<"Fail"<<endl;
        if(percentage<40)
        {

            cout<<"Grade "<<setw(13)<<":"<<"F"<<endl;
            cout<<"Performance "<<setw(7)<<":"<<"Failed"<<endl;
        }


    }
}