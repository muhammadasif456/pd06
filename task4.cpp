#include<iostream>
using namespace std;
float bill(char type, int minute);
main()
{
    system("cls");
    char type;
    int minute;
    float bill1;
    cout<<"enter the type of services you are using"<<endl;
    cin>>type;
    cout<<"minutes"<<endl;
    cin>>minute;
    bill1=bill(type,minute);
    cout<<"your bill is..."<<bill1;
}
float bill(char type, int minute)
{
    int value1;
    int value2;
    int value3;
    char time;
    if(type=='n')
    {
        if(minute<=50)
        {
            value1=10;
        }
        if(minute>=50)
        {
            value2=(minute-50)*0.20;
            value1=value2+10;
        }
    }
    if(type=='P' || type=='p')
    {
        cout<<"enter the time n for night D for day";
        cin>>time;
        if(time=='d')
        {
            if(minute<=75)
            {
                value1=25;
            }
            if(minute>=75)
            {
                value2=(minute-75)*10;
                value1=value2+25;
            }
        }
        if(time=='n')
        {
            if(minute<=100)
            {
                value1=25;
            }
            if(minute>=100)
            {
                value2=(minute-100)*0.05;
                value1=value2+25;
            }
        }
         
    }
 return value1;
}