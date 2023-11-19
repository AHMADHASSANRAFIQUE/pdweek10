#include <iostream>
using namespace std;
void sort(int input[]);
int main()
{
    int input[10];
    cout << "Enter the weights of the 10 packages: " << endl;
    for (int x = 0; x < 10; x++)
    {
        cin >> input[x];
    }
    sort(input);
}
void sort(int input[])
{
    int number, smallinput;
    for (int z = 0; z < 10; z++)
    {
        smallinput = z;
        for (int y = z; y < 10; y++)
        {
            if (input[y] < input[smallinput])
            {
                smallinput = y;
            }
        }
        number = input[smallinput];
        input[smallinput] = input[z];
        input[z] = number;
    }
    cout << "Sorted array in ascending order: [";
    for (int m = 0; m < 10; m++)
    {
        cout << input[m];
        if (m < 9)
        {
            cout << ", ";
        }
    }
    cout << "]";
}