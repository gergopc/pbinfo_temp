#include <iostream>

using namespace std;

int main(){
long long int sz, n, e, maxi;
cin>>n;
cin>>maxi;
e=1;
for(int i=1; i<n; i++){
    cin>>sz;
    if(sz>maxi)
        maxi=sz;
    else if(sz==maxi)
        e++;
}
cout<<maxi<<' '<<e;

}
