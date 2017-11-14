#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int conflength = 1;
fstream config("main.conf");

bool getConfig(string in){
    string line;
    //string prefix;
for (int i=0; i<=conflength; i++){
    config>>line;
    //cout<<line<<endl;
    //cout<<line.substr(0, line.find("="))<<endl;
    if(line.substr(0, line.find("="))==in){
    line = line.erase(line.find("=") + 1);
    cout<<line<<endl;
    if(line == "true") return true;
    else return false;
    break;
    }
}

}

int main()
{
    string setting;
cin>>setting;
if(getConfig(setting)==true) cout<<"IGAZ";
    else cout<<"HAMIS";
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
int a, b, c, d, e, maxi, a1, b1, c1, r;
cin>>a>>b>>c>>d>>e;
//a1
if(a>b && a>c && a>d && a>e) {
        a1=a;
        a=0;

}
if(b>a && b>c && b>d && b>e){
        a1=b;
        b=0;
}
if(c>b && c>a && c>d && c>e) {
        a1=c;
        c=0;
}
if(d>b && d>c && d>a && d>e) {
        a1=d;
        d=0;
}
if(e>b && e>c && e>d && e>a) {
        a1=e;
        e=0;
}
//b1
if(a>b && a>c && a>d && a>e) {
        b1=a;
        a=0;

}
if(b>a && b>c && b>d && b>e){
        b1=b;
        b=0;
}
if(c>b && c>a && c>d && c>e) {
        b1=c;
        c=0;
}
if(d>b && d>c && d>a && d>e) {
        b1=d;
        d=0;
}
if(e>b && e>c && e>d && e>a) {
        b1=e;
        e=0;
}
//c1
if(a>b && a>c && a>d && a>e) {
        c1=a;
        a=0;

}
if(b>a && b>c && b>d && b>e){
        c1=b;
        b=0;
}
if(c>b && c>a && c>d && c>e) {
        c1=c;
        c=0;
}
if(d>b && d>c && d>a && d>e) {
        c1=d;
        d=0;
}
if(e>b && e>c && e>d && e>a) {
        c1=e;
        e=0;
}


cout<<a1<<' '<<b1<<' '<<c1;
//r=a1+b1+c1;
//cout>>r;
}
//haromszog 1376
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
for(int j=0; j<n-1-i; j++) cout<<' ';
  if(i==0){
    cout<<'*';
  }
  else if(i==n-1){
    for(int j=0; j<n; j++)cout<<"* ";
  }else{
    cout<<'*';
    for(int j=0; j<i+2; j++){
            cout<<' ';
    }
    cout<<'*';
  }
  cout<<"\n";
  }
}
//HF 327,328,330,331,1362
