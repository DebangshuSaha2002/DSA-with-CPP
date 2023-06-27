#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <limits.h>
using namespace std;
int main(){
    vector<string> arr;
    arr.push_back("Debangshu");
    arr.push_back("Hello");
    arr.push_back("Debangshu");
    arr.push_back("Hello");
    arr.push_back("Hello");
    arr.push_back("Hi");
    arr.push_back("Hello");
    arr.push_back("Hi");
    arr.push_back("Hi");
    unordered_map<string,int> count;

    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
    }

    unordered_map<string,int> :: iterator it = count.begin();
    while(it!=count.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    int highest_count=INT_MIN;
    int secondHighest_count=INT_MIN;
    string secondMostRepeated="";
    it=count.begin();
    while(it!=count.end()){
        int c=it->second;
        if(c>highest_count){
            secondHighest_count=highest_count;
            highest_count=c;
        }
        else if(c>secondHighest_count && c!=highest_count){
            secondHighest_count=c;
            secondMostRepeated=it->first;
        }
        it++;
    }
    cout<<"second most repeaed word is: "<<secondMostRepeated<<endl;
}