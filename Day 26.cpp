///Day 26(Nested Logic)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d,m,y,dd,mm,yy;
    cin>>d>>m>>y;
    cin>>dd>>mm>>yy;
    int p=0;
    if(yy<y)
    p=10000;
    else if(mm<m&&yy<=y)
    p=500*(m-mm);
    else if(dd<d&&mm<=m&&yy<=y)
    p=15*(d-dd);
    else
    p=0;
    cout<<p;
    return 0;
}
