#include <bits/stdc++.h>
#include<iomanip>

using namespace std;

int main()
{
    double n1, n2, n3, n4, lastScore, average;
    cin >> n1 >> n2 >> n3 >> n4;
    average = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    cout << fixed << setprecision(1);
    cout << "Media: " << average << endl;
    if (average >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (average >= 5.0)
    {
        cout << "Aluno em exame." << endl;
        cin >> lastScore;
        cout << "Nota do exame: " << lastScore << endl;
        if (lastScore + average / 2.0 >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
           cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << (lastScore + average ) / 2.0 << endl;
    }
    else
    {
        cout << "Aluno reprovado." << endl;
    }
}
