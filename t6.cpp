#include <iostream>
using namespace std;
void rversestring(string input);
int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    rversestring(input);
}
void rversestring(string input)
{
    int k = 0;
    string result[10], word;
    for(int i = 0; i <= input.length(); i++)
    {

        if (input[i] == ' ' || input[i] == '\0')
        {
            result[k] = word;
            word = "";
            k++;
            continue;
        }
        word += input[i];
    }
    cout << "Reversed string: ";
    for(int j = k; j >= 0; j--)
    {
        cout << result[j];
        if(j > 0)
        {
            cout << " ";
        }
    }
}