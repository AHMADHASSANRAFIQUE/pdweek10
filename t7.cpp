#include <iostream>
using namespace std;
bool isarange(int length, int arr[]);
int main()
{
    int length;
    cout<<"Enter the length of the array: ";
    cin >> length;
    int arr[length];
    cout<<"Enter the elements of the array: "<<endl;
    for (int x = 0; x < length; x++)
    {
        cin >> arr[x];
    }
    bool output = isarange(length,arr);
    cout<<"Can be arranged: "<<output;
}
bool isarange(int length, int arr[])
{
    int smallvalue, number;
    for(int x = 0; x < length; x++)
    {
        smallvalue = x;
        for(int y = x; y < length; y++)
        {
            if(arr[smallvalue] > arr[y])
            {
                smallvalue = y;
            }
        }
        number = arr[smallvalue];
        arr[smallvalue] = arr[x];
        arr[x] = number;
    }

    bool ans = false;

    for(int z = 0; z < length - 1; z++)
    {

        if(arr[z + 1] == arr[z] + 1)
        {
            ans = true;
        }
        else
        {
            return false;
        }
    }
    return ans;
}