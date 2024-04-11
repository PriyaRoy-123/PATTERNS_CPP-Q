#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n:" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col;
        while (col <= n)
        {
            char ch = row + col + 'A' - 2;
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}