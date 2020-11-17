#include <bits/stdc++.h>

using namespace std;

int main(){

    int inputAnInteger;

    cin >> inputAnInteger;

    if(inputAnInteger%2==0){
        inputAnInteger +=1;
    }

    for (int i = inputAnInteger; i < inputAnInteger+12; i+=2){
        cout << i << endl;
    }
}
