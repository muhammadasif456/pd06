#include<iostream>
using namespace std;
string zodic(int day, string month);
main()
{
    int day;
    string month;
    string value;
    cout<<"enter the date in numeric";
    cin>>day;
    cout<<"enter the name of month";
    cin>>month;
    value=zodic(day,month);
    cout<<"your zodic sign is.."<<value;
}
string zodic(int day, string month)
{
    string sign;
    if((day>=21 && month=="march") || (day<=19 && month=="april"))
    {
        sign="Aries";
    }
    if((day>=20 && month=="april") || (day<=20 && month=="may"))
    {
        sign="Taurus";
    }
    if((day>=21 && month=="may") || (day<=20 && month=="june"))
    {
        sign="Gemini";
    }
    if((day>=21 && month=="june") || (day<=22 && month=="july"))
    {
        sign="Cancer";
    }
    if((day>=23 && month=="july") || (day<=22 && month=="auguest"))
    {
        sign="leo";
    }
    if((day>=23 && month=="auguest") || (day<=22 && month=="september"))
    {
        sign="virgo";
    }
    if((day>=23 && month=="september") || (day<=22 && month=="october"))
    {
        sign="Libra";
    }
    if((day>=23 && month=="october") || (day<=21 && month=="november"))
    {
        sign="scorpia";
    }
    if((day>=22 && month=="november") || (day<=21 && month=="december"))
    {
        sign="sagaittrus";
    }
    if((day>=22 && month=="december") || (day<=19 && month=="january"))
    {
        sign="capricorn";
    }
    if((day>=20 && month=="january") || (day<=18 && month=="februry"))
    {
        sign="aquarious";
    }
    if((day>=19 && month=="februry") || (day<=20 && month=="march"))
    {
        sign="pisces";
    }
    return sign;
}
