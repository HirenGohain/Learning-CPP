#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    short int day;
    cout<<"enter the day number of week\n";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"You have select sunday of the week";
        break;
    case 2:
        cout<<"You have select monday of the week";
        break;
    case 3:
        cout<<"You have select tuesday of the week";
        break;
    case 4:
        cout<<"You have select wednessday of the week";
        break;
    case 5:
        cout<<"You have select thursday of the week";
        break;
    case 6:
        cout<<"You have select friday of the week";
        break;
    case 7:
        cout<<"You have select saturday of the week";
        break;
    
    default:
        cout<<"You have select invalid input";
        break;
    }
    getch();
    return 0;
    
}