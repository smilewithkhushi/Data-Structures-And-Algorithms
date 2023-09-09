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
    int c = 0;
    // rows
    for (int i = 1; i <= n; i++)
    {
        // top left inverted half pyramid code of spaces - downwards
        int j = n - 1;
        while ((j - c) > 0)
        {
            cout << " ";
            j--;
        }

        // left half pyramid
        ++c;
        for (int m = 1; m < c; m++)
        {
            cout << "*";
        }

        // center star
        cout << "*";

        // right pyramid
        for (int k = 1; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// other solution
void printTriangle2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j > n - i && j < n + i)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    // code here
}