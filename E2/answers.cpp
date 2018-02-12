#include<iostream>
#include<iomanip>
#include"answers.h"

using namespace std;

void answer2_16()
{
    int x;
    int y;
    cin >> x;
    cin >> y;
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
}

void answer2_17()
{
    cout << "1 2 3 4";
    cout << endl;
    cout << "1 " << "2 " << "3 " << "4 ";
    cout << endl;
}

void answer2_18()
{
    int x;
    int y;

    cout << "Please input x:";
    cin >> x;
    cout << "Please input y:";
    cin >> y;

    if(x != y)
        cout << (x > y?x:y) << " is larger." << endl;
    else
        cout << "These number is equal." << endl;
}

void answer2_19()
{
    int x;
    int y;
    int z;

    cout << "Input three different integers: ";
    cin >> x;
    cin >> y;
    cin >> z;
    cout << "Sum is " << x+y+z << endl;
    cout << "Average is " << (x+y+z)/3 << endl;
    cout << "Product is " << x * y * z << endl;
    cout << "Smallest is " << (x<(y<z?y:z)?x:(y<z?y:z)) << endl;
    cout << "Largest is " << (x>(y>z?y:z)?x:(y>z?y:z)) << endl; 
}

void answer2_20()
{
    const double pi = 3.14159;
    int r;

    cout << "Please input r: ";
    cin >> r;
    cout << "d is " << r * 2 << endl;
    cout << "c is " << 2 * pi * r << endl;
    cout << "a is " << pi * r * r << endl;
}

void answer2_21()
{
    for(int i = 0; i < 9; i++)
        cout << "*";
    cout << endl;
    for(int i = 0; i < 7; i++)
        cout << "*" << setw(8) << "*" << endl;
    for(int i = 0; i < 9; i++)
        cout << "*";
    cout << endl;
    cout << setw(6) << "***" << endl;
    cout << " *" << setw(6) << "*" << endl;
    for(int i = 0; i < 5; i++)
        cout << "*" << setw(8) << "*" << endl;
    cout << " *" << setw(6) << "*" << endl;
    cout << setw(6) << "***" << endl;
    cout << endl;
    cout << setw(3) << "*" << endl;
    cout << setw(2) << "***" << endl;
    cout << setw(1) << "*****" << endl;
    for(int i = 0; i < 6; i++)
        cout << setw(3) << "*" << endl;
    cout << endl;
}

void answer2_29(){
    cout << "integer\t" << "sqare\t" << "cube" << endl;
    for(int i = 0; i < 11; i++)
        cout << i << "\t" << i*i << "\t" << i*i*i << endl;
}