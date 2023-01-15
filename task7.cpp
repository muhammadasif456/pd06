#include<iostream>
using namespace std;
string value(int exh, int exm, int sxh,int smin);
main()
{
    string value1;
    int exh;
    int exm;
    int sxh;
    int smin;
    int value2;
    int value3;
    int value4;
    int value5;
    int value6;
    int value7;
    cout<<"enter the exam time in hour";
    cin>>exh;
    cout<<"enter the exam time in min";
    cin>>exm;
    cout<<"enter the student time in hour";
    cin>>sxh;
    cout<<"enter the student time in min";
    cin>>smin;
    value1=value(exh,exm,sxh,smin);
    if(value1=="ontime" || value1=="late")
    {
        if(value1=="ontime")
        {
            if(smin<=30)
            {
                cout<<"Ontime";
                value6=30-smin;
                cout<<value6<<endl;
                cout<<"before the start of exam";
            }
        }
        if(value1=="late")
        {
            if(smin>exm)
            {
            value7=smin-30;
            cout<<"Late";
            cout<<value7<<"after the exam start";
            }

        }
     }
    if(value1=="Early")
    {
        value7=exh-exh;
        cout<<value7<<"hour early in exam";

    }
}
  string value(int exh, int exm, int sxh,int smin)
  {
  string value2;
  if(exh==sxh)
  {
    if(smin<=30)
    {
        value2="ontime";
    }
    if(smin>30)
    {
        value2="late";
    }
  }
  if(sxh<exh)
  {
    value2="Early";
  }
return value2;
}
