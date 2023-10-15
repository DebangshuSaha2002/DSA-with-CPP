#include <iostream>
#include <string>
#include<map>
using namespace std;

int main() {
    string s = "one two three four";
    map<string,char> m;
    m["one"]='1';
    m["two"]='2';
    m["three"]='3';
    m["four"]='4';
    m["five"]='5';
    m["six"]='6';
    m["seven"]='7';
    m["eight"]='8';
    m["nine"]='9';
    s.append(" ");
    string val="";
    string ans="";
    string doubleit="";
    string trippleit="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            if(doubleit=="double"){
                trippleit="";
                val="";
            }
            
        }else{
            val+=s[i];
            doubleit+=s[i];
            trippleit+=s[i];
        }
    }
    cout<<ans;
}
