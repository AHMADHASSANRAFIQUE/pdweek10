#include<iostream>
using namespace std;
main()
{
    int Saturdays;
    cout<<"Enter the number of Saturdays: ";
    cin>>Saturdays;
    int run[Saturdays];
    int count = 0;
    for(int i=0;i<Saturdays;i++)
    {
        cout<<"Enter miles run for Saturday "<<i+1<<": ";
        cin>>run[i];
    }
    for(int x = 1; x < Saturdays ; x++)
    {
        if(run[x]>run[count])
        {
            count++;
        }
    }
    if(count >= 0)
    {
    cout<<"Total progress days: "<<count+1;
    }
}