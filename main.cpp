#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
 int h1, m1, x, y, h2, m2;
 cin>>h1>>m1>>x>>y; //7 11 5 34
 if(x <= 10000 && y < 79){
    h2 = h1 + x; //h2 = 7 + 5 = 12
    m2 = m1 + y;
    if(h2 > 23) //m2 = 11 + 34 = 45
    h2 = m2/60; //h2 = 0
    m2 = m2%60; //m2 = 45

    h2 = h2 % 24;
 }

 cout<<h2<<' '<<m2;
}
