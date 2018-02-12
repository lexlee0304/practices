#include<iostream>
#include<array>
#include"answers.h"

using namespace std;

void answer7_11()
{
    array<int,10> counts;
    for(size_t i = 0; i < 10; i++)
        counts[i] = 0;
    for(size_t i = 0; i < 10; i++)
        cout << counts[i] << "\t";
    cout << endl;
    array<int,15> bonus;
    for(size_t i = 0; i < 15; i++){
        bonus[i] = 0;
        bonus[i]++;
        cout << bonus[i] << "\t";
    }
    cout << endl;
    array<double,12> monthlyTemperature;
    cout << "Please input temperatures:";
    for(size_t i = 0; i < 12; i++){
        cin >> monthlyTemperature[i];
    }
    for(size_t i = 0; i < 12; i++){
        cout << monthlyTemperature[i] << "\t";
    }
    cout << endl;
    
}