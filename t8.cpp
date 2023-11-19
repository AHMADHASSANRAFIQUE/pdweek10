#include <iostream>
using namespace std;
int numofRotation(int length);
string elements[20];
int main()
{
    int length;
    cout<<"Enter the length of the array: ";
    cin>>length;
    cout<< "Enter the elements of the array ("
         << "\"left\" or "
         << "\"right\""
         << "): " << endl;
    for(int x = 0; x < length; x++)
    {
        cin >> elements[x];
    }
    int output = numofRotation(length);
    cout<<"Number of full rotations: "<<output;
}
int numofRotation(int length)
{
    int number1 = 0, number2 = 0, result = 0;
    for(int x = 0; x < length; x++)
    {
        if(elements[x] == "right" || elements[x] == "Right")
        {
            number1++;
        }
        else if(elements[x] == "left" || elements[x] == "Left")
        {
            number2++;
        }
    }
    result = (number1 * 90 - number2 * 90) / 360;
    if(result < 0)
    {
        result = result * (-1);
    }
    return result;
}