#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
    while(true)
    {
        cout<<"\nEnter operator (+,-,*,/ or q to quit): ";
        cin>>op;

        if(op=='q')
            break;
        switch(op)
        {
            case '+' : cout<<"Addition : "<<a+b;
            break;
            case '-' : cout<<"Subtraction : "<<a-b;
            break;
            case '*' : cout<<"Multiplication : "<<a*b;
            break;
            case '/' : if(b==0)
                        cout<<"Cannot divide by 0";
                    else
                        cout<<"Division : "<<a/b;
            break;
            default : cout<<"Invalid Operator";
            break;
        }
    }
    
    return 0;
}