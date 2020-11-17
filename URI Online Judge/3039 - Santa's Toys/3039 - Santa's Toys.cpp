#include <bits/stdc++.h>

using namespace std;

int main(){
    string name;
    int carsCount = 0, dollsCount = 0;

    int testCase;
    cin >> testCase;

    char gender[testCase];

    for(int i=0; i < testCase; i++){
        cin >> name >> gender;

        int mCompValue = strcmp(gender,"M");
        int fCompValue = strcmp(gender,"F");

        if(mCompValue == 0){
            carsCount++;
        }
        if(fCompValue == 0){
            dollsCount++;
        }
    }
    cout << carsCount <<" carrinhos" << endl;
    cout << dollsCount <<" bonecas" << endl;
}
