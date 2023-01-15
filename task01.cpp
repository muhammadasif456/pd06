#include<iostream>
using namespace std;
string activity(string temperature, string humidity);
main()
{
    string temperature;
    string humidity;
    string value;
    cout<<"enter the temperature";
    cin>>temperature;
    cout<<"enter the humidity";
    cin>>humidity;
    value=activity(temperature,humidity);
    cout<<"the temperature suits this.."<<value;
}
string activity(string temperature, string humidity)
{
    string weather;
    if(temperature=="warm" && humidity=="dry")
    {
        weather="playtennis";
    }
    if(temperature=="warm" && humidity=="humid")
    {
        weather="swim";
    }
    if(temperature=="cold" && humidity=="dry")
    {
        weather="playbasketball";
    }
    if(temperature=="cold" && humidity=="humid")
    {
        weather="watchtv";
    }
    return weather;
}
