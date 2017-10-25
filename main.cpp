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
