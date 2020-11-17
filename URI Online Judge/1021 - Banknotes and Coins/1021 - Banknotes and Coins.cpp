#include<bits/stdc++.h>
using namespace std;
int main(){
    double N;
    int a,b,c,d,e,f,g,h,i,j,k,l;
    cin >> N;
    int notes = N;
    int coins = (N - notes) * 100;


    cout << "NOTAS:" << endl;
    a = notes % 100;
    cout << notes/100 << " nota(s) de R$ 100.00" <<endl;
    b = a % 50;
    cout << a/50 << " nota(s) de R$ 50.00" <<endl;
    c = b%20;
    cout << b/20 << " nota(s) de R$ 20.00" <<endl;
    d = c%10;
    cout << c/10 << " nota(s) de R$ 10.00" <<endl;
    e = d%5;
    cout << d/5 << " nota(s) de R$ 5.00" <<endl;
    f = e%2;
    cout << e/2 << " nota(s) de R$ 2.00" <<endl;


    cout << "MOEDAS:" << endl;
    g = f%1;
    cout << f/1 << " moeda(s) de R$ 1.00" <<endl;
    h = coins%50;
    cout << coins/50 << " moeda(s) de R$ 0.50" <<endl;
    i = h%25;
    cout << h/25 << " moeda(s) de R$ 0.25" <<endl;
    j = i%10;
    cout << i/10 << " moeda(s) de R$ 0.10" <<endl;
    k = j%5;
    cout << j/5 << " moeda(s) de R$ 0.05" <<endl;
    cout << k/1 << " moeda(s) de R$ 0.01" <<endl;
    return 0;
}
