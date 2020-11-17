#include <bits/stdc++.h>

using namespace std;

int main(){
    double inputNumber;
    int positiveNumberCounter = 0;

    for(int i=0; i < 6; i++){
        cin >> inputNumber;

        if(inputNumber > 0){
            positiveNumberCounter++;
        }
    }
    cout << positiveNumberCounter <<" valores positivos" << endl;
}
