#include <iostream>
using namespace std;
int specialValue(int size, int elements[]);
main()
{
    int size;
    cout<<"Enter the length of the array: ";
    cin>>size;
    cout << "Enter the elements of the array: "<<endl;
    int elements[size];
    for(int x = 0; x < size; x++)
    {
        cin >> elements[x];
    }
    int output = specialValue(size, elements);
    cout<<"Special value: "<<output;
}
int specialValue(int size, int elements[])
{
    int counter = 0;
    for(int y = 0; y <= size; y++)
    {
        counter = 0;
        for(int z = 0; z < size; z++)
        {
            if(elements[z] >= y)
            {
                counter++;
            }
        }
        if (counter == y)
        {
            return counter;
        }
    }
    if(counter == 0)
    {
    return -1;
    }
}