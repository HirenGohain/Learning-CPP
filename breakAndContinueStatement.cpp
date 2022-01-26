#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num1,num2;
    int lcm;
    int i=1;
    cout<<"enter the first number: "<<endl;
    cin>>num1;
    cout<<"enter the second number: "<<endl;
    cin>>num2;
    while(lcm!=i){
        if((i%num1==0)&&(i%num2==0)){
            cout<<"lcm of "<<num1<<" and "<<num2<<" is "<<i;
            break;
        }
        else{
            i+=1;
            continue;
        }

    }
    return 0;
}