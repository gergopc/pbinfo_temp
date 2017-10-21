#include <iostream>

using namespace std;
int main (){
int n;
cin>>n;
if(n != 0){
  if (n%792==0) cout<<n/792<<' '<<0;
  else{
     if (n%792<=9) cout<<(n/792+1)<<' '<<(n%792);
     else{
  if (n%792<=189) {
     if ((n%792-9)%2==0) cout<<(n/792+1)<<' '<<((n%792-9)/2+9);
    else cout<<"IMPOSIBIL";
 }else{
     if ((n%792-189)%3==0) cout<<(n/792+1)<<' '<<((n%792-189)/3+99);
     else cout<<"IMPOSIBIL";
}
}
}
}else cout<<"IMPOSIBIL";
}
