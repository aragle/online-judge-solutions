#include <bits/stdc++.h>
#include<iomanip>

using namespace std;

int main(){
    double inputNumber, sum;

    int positiveNumberCounter = 0;

    for(int i=0; i < 6; i++){
        cin >> inputNumber;

        if(inputNumber > 0){
            positiveNumberCounter++;
            sum = sum + inputNumber;
        }
    }
    cout << positiveNumberCounter <<" valores positivos" << endl;
    cout << fixed << setprecision(1) << sum / positiveNumberCounter  << endl;
}
