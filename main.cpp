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
//108
#include <iostream>

using namespace std;

int main()
{
long long int n, m, a, b;
cin>>n;
n=m;
while(n>0){
    a=a*10+n%10;
    n=n/100;
}
b=m%10;
m=m/10;
while(m>0){
    b=b*10+m%10;
    m=m/100;
}
cout<<a<<endl<<b;
}

