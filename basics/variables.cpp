#include<iostream>
using namespace std;
int global = 100;
int main()
{
    //Local Global Variables
    int local = 20;
    int global = 150;

    cout<<"Global Variable : "<<global<<endl;
    cout<<"Local Variable : "<<local<<endl;

    cout<<"Local global variable : "<<global<<endl;
    cout<<"Original global variable : "<<::global<<endl;

    //Referenced variables
    int x = 10;
    int &ref = x;               //x and ref refer to the same memory location, ref is just another name (alias) for x
    cout<<"Original X : "<<x<<endl;
    
    ref=50;
    cout<<"x : "<<x<<endl;
    cout<<"ref : "<<ref;


    // int x = 10;
    // int y = x;
    // y gets a copy of x
    // y has a different memory location
    // Changing y does not affect x

}