#include <iostream>

using namespace std;

int main(){
    int a, b, d, e;
    cin>>a>>b>>d;
    e=(a*b) / (d*d);
    e = e + (a*b) % (d*d);
    cout<<e;
    return 0;
}
