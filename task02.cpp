#include<iostream>
using namespace std;
string grade(int english, int math, int chemistry, int socialscience, int biology);
main()
{
 int english;
 int math;
 int chemistry;
 int socialscience;
 int biology;
 string name;
 string grade1;
 cout<<"enter your name";
 cin>>name;
 cout<<"enter number in math";
 cin>>math;
 cout<<"enter number in english";
 cin>>english;
 cout<<"enter number in chemistry";
 cin>>chemistry;
 cout<<"enter number in socialsciences";
 cin>>socialscience;
 cout<<"enter number in biology";
 cin>>biology;
 grade1=grade(english,math,chemistry,socialscience,biology);
 cout<<"your grade is..."<<grade1;
}
string grade(int english, int math, int chemistry, int socialscience, int biology)
{
    int value1;
    int total;
    string res;
    total=((english+math+chemistry+socialscience+biology)*100) /500;
    if(total>=90 || total<=100)
    {
        res="Aplus";
    }
    if(total>=80 || total<=90)
    {
        res="A";
    }
    if(total>=70 || total<=80)
    {
        res="Bplus";
    }
    if(total>=60 || total<=70)
    {
        res="B";
    }
    if(total>=50 || total<=60)
    {
        res="C";
    }
    if(total>=40 || total<=50)
    {
        res="d";
    }
    if(total>=30 || total<=40)
    {
        res="f";
    }
 return res;
}


