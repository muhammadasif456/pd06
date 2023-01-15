#include<iostream>
using namespace std;
string move(float value, float value2, float value3);
main()
{
    system("cls");
    float value;
    float value2;
    float value3;
    string value4;
    cout<<"enter the height";
    cin>>value;
    cout<<"enter the x coordinate";
    cin>>value2;
    cout<<"enter the y coordinate";
    cin>>value3;
    value4=move(value,value2,value3);
    cout<<value4;
}
 string move(float value, float value2, float value3)
{
   string value5;
   if(value==2)
   {
    if((value2>=0 || value2<=2) || (value3>=0 || value3<=6))
    {
        value5=="border";
    }
   }
return value5;
}