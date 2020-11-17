#include <bits/stdc++.h>

using namespace std;

int main()
{
    int inputValue;
    int count = 0;

    for (int i = 0; i < 5; ++i)
    {
        cin >> inputValue;
        if(inputValue < 0)
        {
            inputValue = -inputValue;
        }

        if(inputValue % 2 == 0)
        {
            count++;
        }
    }
    cout << count << " valores pares" << endl;
}
