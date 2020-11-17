#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=0, j,l,l1,p;
    char s1[51];
    string  s;
    while(getline(cin,s))
    {
        i=0;
        l1=0;
        p=1;
        for(j=0; s[j]!='\0'; j++)
        {
            if(s[j]>47 && s[j]<58)
            {
                s1[i] = s[j];
                i++;
            }
            else if(s[j]=='o' || s[j]=='O')
            {
                s1[i] = '0';
                i++;
            }
            else if(s[j]=='l')
            {
                s1[i] = '1';
                i++;
            }
            else if(s[j] == ' ' || s[j] == ','  )
            {

            }
            else
            {
                p = 0 ;
                break;
            }
        }

        s1[i] = '\0';
        long long int k;
        k = atoll(s1);
        if(p==1)
            l1 = strlen(s1);

        if(l1!=0)
        {
            if(k<=2147483647)
                cout << k << endl;
            else
                cout << "error" << endl ;
        }
        else
        {
            cout << "error" << endl ;
        }
    }
}
