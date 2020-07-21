//Day 10(Binary Numbers)
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int i;
    vector <int> v;
    while(n!=0){
        v.push_back(n%2);
        n=n/2;
    }
    int m=0,c=0;
    for(i=sizeof(v)-1;i>=0;i--){
        if(v[i]==1){
            c++;
            m=max(c,m);
        }
        else {
        c=0;
        }
    }
    cout<<m;
    return 0;
}
