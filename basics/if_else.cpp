#include<iostream>
using namespace std;
int main()
{
    // Input an age.
    // Rules:

    // Age <0 → "Invalid"
    // Age ≤ 12 → "Child"
    // Age ≤ 19 → "Teen"
    // Age ≤ 59 → "Adult"
    // Otherwise → "Senior"

    // Extra twist:
    // If age is exactly divisible by 7 print:

    // Lucky Age

    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age%7==0)
    {
        cout<<"Lucky age";
    }
    else
    {
        if(age<0)
            cout<<"Invalid";
        else if(age<=12)
            cout<<"Child";
        else if(age<=19)
            cout<<"Teen";
        else if(age<=59)
            cout<<"Adult";
        else
            cout<<"Otherwise";
    }

    return 0;
}