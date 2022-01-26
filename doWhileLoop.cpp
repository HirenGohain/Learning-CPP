#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i=1;
    int num;
    long int fact=1;
    cout<<"factorial calculator"<<endl;
    cout<<"enter a number--"<<endl;
    cin>>num;
    do{
        fact= fact*i;
        i+=1;
    }while (i<=num);
    cout<<"factorial  of "<<num<<" is-- "<<fact;

    return 0;

}
