#include<iostream>
#include<iomanip>
#include"answers.h"

using namespace std;

void answer4_13()
{
    double m = 0;
    double tm = 0;
    double tg = 0;
    double g = 0;
    while(true){
        cout << "Enter the miles drivern (-1 to quit): ";
        cin >> m;
        if(m == -1) break;
        cout << "Enter gallons used: ";
        cin >> g;
        tm += m;
        tg += g;
        cout << "Total MPG: " << setprecision(6) << tm/tg << endl;
        cout << endl;
    }
}

void answer4_14()
{
    double acount = 0;
    double balance = 0;
    double charges = 0;
    double credits = 0;
    double limits = 0;
    while(true)
    {
        cout << "Enter acount number (or -1 to quit): ";
        cin >> acount;
        if(acount  == -1) break;
        cout << "Enter beginning balance: ";
        cin >> balance;
        cout << "Enter total charges: ";
        cin >> charges;
        cout << "Enter total credits: ";
        cin >> credits;
        cout << "Enter credits limits: ";
        cin >> limits;
        balance = balance + charges - credits;
        if(balance > limits)
        {
            cout << "New balance is " << balance << endl;
            cout << "Account: " << acount << endl;
            cout << "Credit limit: " << limits << endl;
            cout << "Balance: " << balance << endl;
            cout << "Credit limit is Exceeded" << endl;
        }
        else 
            cout << "New balance is " << balance << endl;
        cout << endl;
    } 
}

void answer4_15()
{
    double sales = 0;
    const double percent = 0.09;
    const double basic  = 200;
    while(true)
    {
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> sales;
        if(sales == -1) break;
        cout << "Salary is: " << basic + sales * percent << endl;
        cout << endl;
    }
}

void answer4_16()
{
    double hours = 0;
    double rate = 0;
    double salary = 0;
    while(true)
    {
        cout << "Enter hours worked (-1 to end): ";
        cin >> hours;
        if(hours == -1) break;
        cout << "Enter hourly rate of employee ($00.00): ";
        cin >> rate;
        if(hours > 40)
            salary = 40 * rate + (hours - 40) * rate * 1.5;
        else 
            salary = hours * rate;
        cout << "Salary is " << salary << endl;
        cout << endl ;
    }
}

void answer4_17()
{
    double number = 0;
    double largest = 0;
    cout << "Please input 10 numbers: ";
    for(int i = 0; i < 10; i++)
    {
        cin >> number;
        if(number > largest)
            largest = number;
    }
    cout << "The largest number is: " << largest << endl;
    cout << endl;
}

void answer4_18()
{
    cout << "N\t10*N\t100*N\t1000*N" << endl;
    cout << endl;
    for(int i = 1; i < 6; i++)
        cout << i << "\t" << i * 10 << "\t" << 100 * i << "\t" << 1000 * i << endl;
}

void answer4_19()
{
    
}