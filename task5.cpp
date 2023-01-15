#include<iostream>
using namespace std;
float quan(string fruits, string day, float quantity);
main()
{
    string fruits;
    string day;
    float quantity;
    float bill;
    cout<<"enter fruites like banana apple grapefruite pineapple kiwi"<<endl;
    cin>>fruits;
    cout<<"enter the day in which you want to get the fruite"<<endl;
    cin>>day;
    cout<<"enter the quantity";
    cin>>quantity;
    bill=quan(fruits,day,quantity);
    cout<<fruits;
    cout<<day;
    cout<<bill;
}
float quan(string fruits, string day, float quantity)
{
    float value1;
    float value2;
    float value3;
    if(day=="saturday" || day=="sunday")
    {
        if(fruits=="banana")
        {
            value1=quantity*2.70;
        }
        if(fruits=="apple")
        {
            value1=quantity*1.25;
        }
        if(fruits=="orange")
        {
            value1=quantity*0.90;
        }
        if(fruits=="grapefruite")
        {
            value1=quantity*1.60;
        }
        if(fruits=="kiwi")
        {
            value1=quantity*3.00;
        }
        if(fruits=="pineapple")
        {
            value1=quantity*5.60;
        }if(fruits=="grapes")
        {
            value1=quantity*4.20;
        }
    }
    if((day=="monday" || day=="tuesday") || (day=="wednessday" || day=="thursday" || day=="friday"))
    {
        if(fruits=="banana")
        {
            value1=quantity*2.50;
        }
        if(fruits=="apple")
        {
            value1=quantity*1.20;
        }
        if(fruits=="orange")
        {
            value1=quantity*0.85;
        }
        if(fruits=="grapefruite")
        {
            value1=quantity*1.45;
        }
        if(fruits=="kiwi")
        {
            value1=quantity*2.70;
        }
        if(fruits=="pineapple")
        {
            value1=quantity*5.50;
        }if(fruits=="grapes")
        {
            value1=quantity*3.85;
        }
    }
  return value1;
}