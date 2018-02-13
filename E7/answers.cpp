#include<iostream>
#include<array>
#include<vector>
#include"answers.h"
#include<fstream>
#include<algorithm>
#include<cstdlib>
#include<string>

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

bool isSame(int num, array<int,20> nums, int count)
{
    for(size_t i = 0; i < count; i++){
        if(nums[i] == num)
            return true;
    }
    return false;
}

void answer7_13(){
    array<int,20> nums;
    for(size_t i = 0; i < 20; i++){
        nums[i] = 0;
    }
    ifstream file("resource/7_13.txt",ios::in);
    int num;
    int i = 0;
    while(file >> num)
    {
        if(!isSame(num,nums,i)){
            nums[i] = num;
            cout << nums[i++] << "\t";
        }
    }
}

void answer7_14(){
    vector<int> nums;
    vector<int>::iterator index;
    int num;
    ifstream file("resource/7_13.txt",ios::in);
    while(file >> num){
        index = find(nums.begin(),nums.end(),num);
        if(index == nums.end()){
            nums.push_back(num);
        }
    }
    for(int num:nums){
        cout << num << "\t";
    }
}

void answer7_15(){
    array<array<int,5>,3> nums;
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums[i].size(); j++){
            nums[i][j] = 0;
        }
    }
    int x = 0;
    for(array<int,5> &i:nums){
        for(int &j:i){
            j = x;
            cout << j << "\t";
            x++;
        }
        cout << endl;
    }
}

void answer7_16()
{
    array<array<int,4>,5> sales;
    for(size_t i = 0; i < 5; i++){
        for(size_t j = 0; j < 4; j++){
            sales[i][j] = 0;
        }
    }
    ifstream file("resource/7_16.txt",ios::in);
    if(!file){
        cout << "file is not open" << endl;
        exit(EXIT_FAILURE);
    }
    int salers=0, no =0, money = 0;
    while(file >> salers >> no >> money){
        sales[no-1][salers-1] += money;
    }
    for(int i = 0; i < 4;i++){
        cout << "\t" << i+1;
    }
    cout << "\ttotal";
    cout << endl;
    for(size_t i =0; i < 5; i++){
        cout << i ;
        int total = 0;
        for(size_t j =0; j < 4; j++){
            total += sales[i][j];
            cout << "\t" << sales[i][j];
        }
        cout << "\t" << total << endl;
    }
    cout << "total";
    for(int i = 0; i < 4; i++){
        cout << "\t" << sales[0][i] + sales[1][i] + sales[2][i] + sales[3][i] + sales[4][i]; 
    }
}

bool huiweng(string target,int begin,int end)
{
    if(begin >= end)
        return true;
    if(huiweng(target,begin+1,end-1) && target[begin] == target[end]){
        return true;
    }else{
        return false;
    }
}

void answer7_28(){
    string target = "";
    cout << "Please input a string: ";
    cin >> target;
    if(huiweng(target,0,target.size()-1)){
        cout << "The string is huiweng!" << endl;
    }else{
        cout << "The string is not huiweng" << endl;
    }
}

void tishi(string &target)
{
    cout << "Please input a string: ";
    cin >> target;
}

void printReverse(string target,int begin)
{
    if(target.size()-1 != begin){
        printReverse(target,begin+1);
    }
    cout << target[begin];
}

void answer7_30()
{
    string target = "";
    tishi(target);
    printReverse(target,0);
    cout << endl;
}

int recursiveMininum(array<int,20> nums,int begin, int end)
{
    if(begin == end || begin == end-1)
        return (nums[begin] > nums[end])?nums[end]:nums[begin];
    int x = 0;
    int min = recursiveMininum(nums,begin+1,end-1);
    if(nums[begin] > nums[end])
        x = nums[end];
    else
        x = nums[begin];
    return x > min?min:x;
}

void answer7_32()
{
    array<int,20> nums;
    int num = 0;
    ifstream file("resource/7_13.txt",ios::in);
    int i = 0;
    while(file >> num){
        nums[i] = num;
        i++;
    }
    cout << recursiveMininum(nums,0,19);
}

void printMap(array<array<char,12>,12> &map)
{
    cout << endl;
    for(size_t i = 0; i < 12; i++){
        for(size_t j = 0; j < 12; j++){
            cout << map[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void findMap(array<array<char,12>,12> &map, int x, int y, bool &flag)
{
    if(map[y][x] != '.' || flag == true)
        return;
    if(map[y][x] == '.')
    {
        map[y][x] = 'x';
        if(x == 11 || y == 11){
            flag = true;
            return;
        }
        printMap(map);
        findMap(map,x,y-1,flag);
        findMap(map,x+1,y,flag);
        findMap(map,x,y+1,flag);
        findMap(map,x-1,y,flag);
    }
}

void loadMap(array<array<char,12>,12> &map)
{
    string line = "";
    ifstream file("resource/7_33.txt",ios::in);
    int i = 0;
    while(file >> line){
        for(int j = 0; j < 12; j++)
            map[i][j] = line[j];
        i++;
    }   
}

void answer7_33()
{
    bool flag = false;
    array<array<char,12>,12> map;
    loadMap(map);
    printMap(map);
    findMap(map,0,2,flag);
    printMap(map);
}