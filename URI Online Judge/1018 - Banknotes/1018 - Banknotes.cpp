#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,a,b,c,d,e,f,g;
    cin >> N;
    cout << N << endl;
    a = N%100;
    cout << N/100 << " nota(s) de R$ 100,00" <<endl;
    b = a%50;
    cout << a/50 << " nota(s) de R$ 50,00" <<endl;
    c = b%20;
    cout << b/20 << " nota(s) de R$ 20,00" <<endl;
    d = c%10;
    cout << c/10 << " nota(s) de R$ 10,00" <<endl;
    e = d%5;
    cout << d/5 << " nota(s) de R$ 5,00" <<endl;
    f = e%2;
    cout << e/2 << " nota(s) de R$ 2,00" <<endl;
    cout << f << " nota(s) de R$ 1,00" <<endl;
}
