#include<iostream>
using namespace std;
bool repeatingcycles(int input,int digit[],int cycles);
main(){
    int input, cycles;
    cout<<"Enter the length of the array: ";
    cin>>input;
    int digit[input];
    cout<<"Enter the elements of the array: "<<endl;
    for(int x = 0; x < input; x++)
    {    
        cin>>digit[x];
    }
    cout<<"Enter the length of the cycle: ";
    cin>>cycles;
    bool output = repeatingcycles(input, digit,cycles);
    cout<<"Output: "<<output;
}
bool repeatingcycles(int input,int digit[],int cycles)
{
    bool check = false;
    for(int i = 0; i < cycles; i++)
    {
        if(cycles > input)
        {
            check = true;

        }
        else if(digit[i] == digit[cycles + i])
        {
            check = true;
        }
    }
    return check;
}