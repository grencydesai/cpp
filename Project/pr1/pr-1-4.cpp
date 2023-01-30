e#include<iostream>
using namespace std;

int main()
{
    char g;
    int i;

    cout << "enter a character :";
    cin >> g;

    if (g == 'a' || g == 'e' || g == 'i' || g == 'o' || g == 'u')
    {
        cout << "Character is vowel";
    }
    else if (g == 'A' || g == 'E' || g == 'I' || g == 'O' || g == 'U')
    {
        cout << "Character is vowel";
    }
    else
    {
        cout << "character is consonant";
    }
}
