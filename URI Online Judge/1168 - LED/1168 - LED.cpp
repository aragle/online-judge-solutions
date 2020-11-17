#include <bits/stdc++.h>

using namespace std;

int main(){

    int testCase, ledCount, length;

    string inputValue;

    cin >> testCase;

    for (int i = 0; i < testCase; ++i){
        ledCount = 0;
        cin >> inputValue;
        length = inputValue.length();

        for (int j = 0; j < length; ++j){
            if(inputValue[j] == '0' || inputValue[j] == '6' || inputValue[j] == '9'){
                ledCount += 6;
            }else if(inputValue[j] == '1'){
                ledCount += 2;
            }else if(inputValue[j] == '2' || inputValue[j] == '3' || inputValue[j] == '5'){
                ledCount += 5;
            }else if(inputValue[j] == '4'){
                ledCount += 4;
            }else if(inputValue[j] == '7'){
                ledCount += 3;
            }else{
                ledCount += 7;
            }
        }
        cout << ledCount << " leds" << endl;
    }
}
