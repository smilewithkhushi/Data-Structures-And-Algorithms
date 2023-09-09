#include <iostream>
using namespace std;

int main()
{
    // Your code goes here
    printTriangle(5)

        return 0;
}

void printTriangle(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}