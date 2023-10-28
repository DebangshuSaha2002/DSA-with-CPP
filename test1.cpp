#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

string ConvertToNum(string str){
  int n=1;
  map<string,string> digits;

  digits["zero"]="0";
  digits["one"]="1";
  digits["two"]="2";
  digits["three"]="3";
  digits["four"]="4";
  digits["five"]="5";
  digits["six"]="6";
  digits["seven"]="7";
  digits["eight"]="8";
  digits["nine"]="9";

  map<string,int> rep;
  rep["double"]=2;
  rep["triple"]=3;
  string resnum="";
  for(int i=0;i<str.length();i++){
    string word="";
    while(i<str.length() && str[i]!=' '){
      word+=str[i];
      i++;
    } 

    if(rep.find(word)!=rep.end()){
      n=n*rep[word];
    }else{
      resnum+=digits[word];
      for(int j=1;j<n;j++){
        resnum+=digits[word];
      }
      n=1;
    }
  }
  return resnum;
}

int main(){
  string str;
  cout<<"Enter the phone num is string:";
  getline(cin,str);
  cout<<ConvertToNum(str)<<endl;
  return 0;
}