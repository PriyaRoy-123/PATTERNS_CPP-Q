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
        // print space(1st triangle)
        int space = n - row;
        ;
        while (space)
        {
            cout << " ";
            space--;
        }
        // print 2nd triangle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }
        // print 3rd triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }
        cout << endl;
        row = row + 1;
    }
}