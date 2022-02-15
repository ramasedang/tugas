#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{

    int n;
    int i = 0;
    int x = 1;
    int total = 0;

    cout << "Masukkan nilai n: ";
    cin >> n;
    
    while (i < n)
    {
        if(i % 2 == 0)
        {
            int a = -1*(x+2*i);
            total += a;
        }
        else
        {
            int b = x+2*i;
            total += b;
        }
    i++;
        
    }
    cout << total;

    return 0;
}