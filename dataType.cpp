#include<iostream>
using namespace std;

int main(){

    int a;
    a=12;
    cout<<"size of int is "<< sizeof(a)<<" byte"<<endl;

    float b;
    cout<<"size of float is "<< sizeof(b)<<" byte"<<endl;

    char c;
    cout<<"size of char is "<< sizeof(c)<<" byte"<<endl;

    double d;
    cout<<"size of double is "<< sizeof(d)<<" byte"<<endl;

    bool e;
    cout<<"size of bool is "<< sizeof(e)<<" byte"<<endl;

    short int si;
    cout<<"size of short int is "<< sizeof(si)<<" byte"<<endl;
    long int li;
    cout<<"size of long int is "<< sizeof(li)<<" byte"<<endl;



    return 0;
}