#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,Month,Day,Year,Temp;
    cin >> N;
    for(int i=1;i<=3;i++){
        Temp = N%365;
        Year = N/365;
        Month = Temp/30;
        Day = Temp%30;
    }
    cout << Year << " ano(s)" << endl;
    cout << Month << " mes(es)" << endl;
    cout << Day << " dia(s)" << endl;
}
