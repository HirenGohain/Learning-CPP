#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i = 1;
    int n;
    int count = 0;
    cout << "enter a number--" << endl;
    cin >> n;
    cout << "the first " << n << " odd numbers are--" << endl;

    while (count < n)
    {
        if (i % 2 == 0){
            i+=1;
            continue;
        }
        cout << i << endl;
        count = count + 1;
        i += 1;
    }
    return 0;
}