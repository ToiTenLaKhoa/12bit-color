#include <iostream>
using namespace std;
const char a[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int main()
{
    freopen("color.txt", "w", stdout);
    int maxlength = 16;
    for (int i = 0; i < maxlength; i++)
        for (int j = 0; j < maxlength; j++)
            for (int k = 0; k < maxlength; k++)
                cout << "#" << (char)a[i] << (char)a[j] << (char)a[k] << endl;
}
// for (int l = 0; l < maxlength; l++)
// for (int m = 0; m < maxlength; m++)
// for (int n = 0; n < maxlength; n++)