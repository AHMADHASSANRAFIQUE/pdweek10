#include<iostream>
using namespace std;
main()
{
    int boxes;
    cout<<"Enter the number of boxes: ";
    cin>>boxes;
    cout<<"Enter the dimensions of the boxes (length, width, height):"<<endl;
    int array[boxes*3];
    for(int x = 0; x < boxes*3; x++)
    {
        cin>>array[x];
    }
    int vol=1,sum = 0;
    for(int z = 0; z < boxes*3; z++)
    {
        if(z % 3 == 0)
        {
        sum = sum + vol;
        vol = 1;
        }
        vol = array[z] * vol;
    }
    if(boxes == 1)
    {
    cout<<"Total volume of all boxes: "<<sum;
    }
    else
    {
    cout<<"Total volume of all boxes: "<<sum+1;
    }
}