// Typecasting is the process of converting one datatype into another datatype.

// Types of Typecasting:
// 1. Implicit Typecasting
// Done automatically by the compiler
// Used for compatible datatypes
// int a = 10;
// float b = a;

// 2.Explicit Typecasting
// Done manually by the programmer
// Used when conversion may cause data loss
// float x = 5.8f;
// int y = (int)x;

// Rule:
// Smaller datatype → Larger datatype = usually implicit
// Larger datatype → Smaller datatype = explicit preferred

#include<iostream>
using namespace std;

int main()
{
    // int to float (Implicit)
    int a = 10;
    float b = a;

    cout<<"int to float: "<<b<<endl;

    // float to int (Explicit)
    float c = 8.75f;
    int d = (int)c;

    cout<<"float to int: "<<d<<endl;

    // char to int (ASCII)
    char ch = 'A';
    int ascii = ch;

    cout<<"char to int: "<<ascii<<endl;

    // int to char
    int value = 66;
    char symbol = (char)value;

    cout<<"int to char: "<<symbol<<endl;

    // double to int
    double num = 99.99;
    int x = (int)num;

    cout<<"double to int: "<<x<<endl;

    return 0;
}