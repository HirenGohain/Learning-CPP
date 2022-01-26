#include<iostream>
#include"myHeader.h"
using namespace std;
int main(){
    int a, b;
    cout<<"enter num1 \n";
    cin>>a;
    cout<<"enter num2 \n";
    cin >> b;
    
    cout<< "the sum of two numbers is : "<<sum(a,b);

    return 0;
}