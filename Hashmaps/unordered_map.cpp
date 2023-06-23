//Unordered_map here inserting, deletion and searching all occurs at O(1) TC.
//That is all operations are done in constant time

//Where as in ordered map the T.C for inserting, deletion, searching, updation takes O(log n) 

//Unordered_map does not preserves the order in which the data is inserted
//whereas map preserves the order in which the data is inserted


#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map <string,int> m;

    //Insertion
    //Approach 1
    pair <string,int> pair1 = make_pair("Debangshu",2);
    m.insert(pair1);

    //Approach 2
    pair <string,int> pair2 ("Hello",3);
    m.insert(pair2);

    //Approach 3
    m["World"]=1;

    //Searching
    //m.count() function return 1 if the key is present otherwise returns 0 if its not present
    cout<<m.count("Hello")<<endl; //Present so returns 0
    cout<<m.count("Hi")<<endl; //Absent so returns 1

    cout<<m["Hello"]<<endl;
    cout<<m.at("World")<<endl;

    //If a value is not present in the map and if i try to search it using m.at()  then it will return an error
    // cout<<m.at("Saha")<<endl;

    //But if the value is not present in the may and first i run m["unknownvalue"] then it will make an 
    //entry for that value into the map and return 0
    //after that if i run m.at("unknownvalue") it will return 0
    //EXAMPLE

    cout<<m["unknownvalue"]<<endl;
    cout<<m.at("unknownvalue")<<endl;

    //Iterator to iterate over the maps
    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

}