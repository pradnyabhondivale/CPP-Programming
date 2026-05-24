
// Input one character.
// Check whether:

// vowel
// consonant
// digit
// special symbol

// Without using library functions.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter one character : ";
    cin>>ch;

    if(ch>='0' && ch<='9')
        cout<<"Digit";

    else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        if(ch == 'A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            cout<<"Vowel";
        }
        else{
            cout<<"Consonant";
        }
    }
    else
    {
        cout<<"Special Character";
    }

}