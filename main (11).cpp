//imaginry electricity billing system
#include<iostream>
using namespace std;
int main(){
    string name,adress;
    int reading,wage;
    cout<<"welcome to the bill calcuolator \n";
    cout<<"enter your name:\n";
    cin>>name;
    cout<<"welcome mr "<<name<<endl;
    cout<<"enter your adress:\n";
    cin>>adress;
    cout<<"please enter your wage in (egp):\n";
    cin>>wage;
    cout<<"please enter your meter reading :\n";
    cin>>reading;
if (reading<1300&&wage<10000){cout<<"bill free";}
if (reading>=1300&&reading<=1900&&wage<=6000){cout<<"your bill="<<wage/15;}
if(reading>1600&&reading<=1900&&wage>6000&&wage<=10000){cout<<"your bill="<<wage/12;}
if (reading>1900||wage>10000){cout<<"your bill="<<wage/7;}
return 0;

}