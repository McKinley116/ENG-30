#include <iostream>
using namespace std;

//Function prototype

void printTriangle(int n);

int main ()
{
    int n = 9;

    printTriangle(9);

    return 0;
}

//Functions

void printTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
       for (int x = 1; x <= i; x ++)
        { 
            cout << x << " "; 
        }
        cout << endl;    
    }  

};