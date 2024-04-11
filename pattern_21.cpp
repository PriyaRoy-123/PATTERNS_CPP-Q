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
        // space print krlo
        int space = (row - 1);
        while (space)
        {
            cout << " ";
            space = space + 1;
        }
        // star print krlo
        int col = 1;

        while (col <= row)
        {
            int value = (n - row + 1);
            cout << "*";
            value = value +1;

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}