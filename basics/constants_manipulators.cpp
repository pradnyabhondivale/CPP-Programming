#include<iostream>
#include<iomanip>       //used for manipulators
using namespace std;
// Constants are fixed values that cannot be changed during program execution. define with 'const' keyword
// Manipulators are special functions used with cin and cout to format input/output.
int main()
{
    int x = 10;
    cout<<x<<endl;
    x=20;       //x value change to 20
    cout<<x<<endl;

    const int a=5;
    cout<<a<<endl<<endl;
    //  a=10;    it will throw an error


    cout<<"Hello"<<endl;                            //endl - New line
    cout<<setw(5)<<10<<endl;                        //setw(n)- Set width
    cout<<fixed<<setprecision(2)<<3.14159;          //setprecision(n) - Set decimal places,  fixed-Fixed decimal format

}