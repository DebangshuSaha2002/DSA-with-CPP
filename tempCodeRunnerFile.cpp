#include <iostream>
#include <map>
#include <string>

using namespace std;

string convert_to_number(string s) {
    map<string, string> digits = {
        {"zero", "0"},
        {"one", "1"},
        {"two", "2"},
        {"three", "3"},
        {"four", "4"},
        {"five", "5"},
        {"six", "6"},
        {"seven", "7"},
        {"eight", "8"},
        {"nine", "9"}
    };
    map<string, int> rep = {
        {"double", 2},
        {"triple", 3},
    };
    string resnum = "";
    int n = 1;
    for (int i = 0; i < s.length(); i++) {
        string word = "";
        while (i < s.length() && s[i] != ' ') {
            word += s[i];
            i++;
        }
        if (rep.find(word) != rep.end()) {
            n *= rep[word];
        } else {
            resnum += digits[word];
            for (int j = 1; j < n; j++) {
                resnum += digits[word];
            }
            n = 1;
        }
    }
    return resnum;
} 

int main() {
    string input_str;
    cout << "Enter the num :";
    getline(cin, input_str);
    cout <<convert_to_number(input_str) << endl;
    return 0;
}