#include<iostream>
using namespace std;
main()
{
    char letter;
    int words;
    cout<<"Enter how many words you want to enter: ";
    cin>>words;
    string input[words],word;
    int count = 0;
    for(int i=0;i<words;i++)
    {
        cout<<"Enter word "<<i+1<<": ";
        cin>>input[i];
    }
    cout<<"Enter the letter you want to count: ";
    cin>>letter;
    for(int x = 0; x < words ; x++)
    {
        word = input[x];
        int z=0;
        while(word[z] != '\0')
        {
            if(word[z] == letter)
            {
                count++;
            }
            z++;
        }
    }
    cout<<letter<<" shows up "<<count<<" times in the data.";
}