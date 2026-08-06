#include <iostream>
using namespace std;
int main()
{
    int mb,s,m,cpf,p;
    float total,average,percentage;
    string enm,b,sn;
    cout<<"enter enrollment number"<<endl;
    cin>>enm;
    cout<<"enter student name"<<endl;
    cin>>sn;
    cout<<"enter branch"<<endl;
    cin>>b;
    cout<<"enter semester"<<endl;
    cin>>s;
    cout<<"enter mobile number"<<endl;
    cin>>mb;
    cout<<"enter maths marks:"<<endl;
    cin>>m;
    cout<<"enter physics marks:"<<endl;
    cin>>p;
    cout<<"enter programming marks:"<<endl;
    cin>>cpf;
    total=m+p+cpf;
    average=total/3;
    percentage=total/3;
    cout<<endl;
    cout<<"********************************************"<<endl;
    cout<<"      STUDENT RECORD MANAGEMENT SYSTEM      "<<endl;
    cout<<"********************************************"<<endl;
    cout<<endl;
    cout<<"software version : 1.2"<<endl;


    cout<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Student Information                         "<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"enrollment number:"<<enm<<endl;
    cout<<"student name:"<<sn<<endl;
    cout<<"branch:"<<b<<endl;
    cout<<"semester:"<<s<<endl;
    cout<<"mobile number:"<<mb<<endl;
    cout<<endl;

    cout<<"--------------------------------------------"<<endl;
    cout<<"Academic Information                        "<<endl;
    cout<<"--------------------------------------------"<<endl;

    cout<<endl;
    cout<<"maths marks:"<<m<<endl;
    cout<<"physics marks:"<<p<<endl;
    cout<<"programming marks"<<cpf<<endl;
    cout<<endl;

    cout<<"--------------------------------------------"<<endl;
    cout<<"Academic Summery                            "<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<endl;

    cout<<"total marks:"<<total<<endl;
    cout<<"average marks:"<<average<<endl;
    cout<<"percentage"<<percentage<<endl;
    cout<<"--------------------------------------------"<<endl;











}
