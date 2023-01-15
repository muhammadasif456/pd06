#include<iostream>
using namespace std;
float apart(string month, int day);
float studio(string month,int day);
main()
{
    string month;
    int day;
    float bill1;
    float bill2;
    cout<<"enter the name of month";
    cin>>month;
    cout<<"enter the number of total stay in hotel";
    cin>>day;
    bill1=studio(month,day);
    cout<<"studio"<<bill1<<endl;
    bill2=apart(month,day);
    cout<<"appart.."<<bill2;
}
float studio(string month,int day)
{
    float value5;
    float value4;
    if(month=="may" || month=="october")
    {
        if(day<7)
        {
            value5=50*day;
        }
        if(day>=7)
        {
            value4=50*day;
            value5=value4 - ((value4*5) /100);
        }
        if(day>=14)
        {
           value4=50*day;
           value5=value4 - ((value4*30) /100); 
        }
    }

    if(month=="june" || month=="september")
    {
        if(day<14)
        {
            value5=75.02*day;
        }
        if(day>14)
        {
            value4=75.02*day;
            value5=value4 - ((value4*20) /100);
        }
    }

    if(month=="july" || month=="august")
    {
        value5=day*76;
    }
 return value5;
}
 float apart(string month, int day)
 {
    float value2;
    float value3;
    float value1;
    if(month=="may" || month=="october")
    {
        if(day<=14)
        {
            value1=day*65;
        }
     if(day>=14)
     {
        value2=(day*65);
        value1=value2-((value2*10) /100);
     }
    }
    if(month=="june" || month=="september")
    {
        if(day<=14)
        {
            value1=day*68.70;
        }
     if(day>=14)
     {
        value2=(day*68.70);
        value3=(value2*10) /100;
        value1=value2-value3;
     }
    }
    if(month=="july" || month=="august")
    {
        if(day<=14)
        {
            value1=day*77;
        }
       if(day>=14)
       {
        value2=(day*77);
        value3=(value2*10) /100;
        value1=value2-value3;
       }
    }
  return value1;    
 } 


  