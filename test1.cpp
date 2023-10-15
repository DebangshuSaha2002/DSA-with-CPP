#include <iostream>
#include <unordered_map>
#include <sstream>

using namespace std;

string convertString(string inputString) {
  // Create a dictionary mapping words to their corresponding digits
  unordered_map<string, string> wordToDigitMap;

  pair<string, string> entries[12] = {
    pair<string, string>("one", "1"),
    pair<string, string>("two", "2"),
    pair<string, string>("three", "3"),
    pair<string, string>("four", "4"),
    pair<string, string>("five", "5"),
    pair<string, string>("six", "6"),
    pair<string, string>("seven", "7"),
    pair<string, string>("eight", "8"),
    pair<string, string>("nine", "9"),
    pair<string, string>("zero", "0"),
    pair<string, string>("double", "2"),
    pair<string, string>("triple", "3")
  };

  for (int i = 0; i < 12; i++) { // Size of the array is 12
    wordToDigitMap.insert(entries[i]);
  }

  string outputString = "";

  // Split the input string into words
  stringstream ss(inputString);
  string word;
  while (ss >> word) {
    if (wordToDigitMap.find(word) != wordToDigitMap.end()) {
      // If the word is in the dictionary, append its corresponding digit
      outputString += wordToDigitMap[word];
    } else {
      // If the word is not in the dictionary, append the word itself
      outputString += word;
    }
  }

  return outputString;
}

int main() {
  string inputString = "one two three double five eight triple three";

  string outputString = convertString(inputString);

  cout << outputString << endl;

  return 0;
}
