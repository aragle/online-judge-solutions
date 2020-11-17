#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,x,x1,y,y1,z,z1;
    cin >> N;
    for(int i=1;i<=3;i++){
        x = N/60;
        x1 = N%60;
        y = x/60;
        y1 = x%60;
        z = y/60;
        z1 = y%60;
    }
    cout << z1 << ":" << y1 << ":" << x1 <<endl;

}
