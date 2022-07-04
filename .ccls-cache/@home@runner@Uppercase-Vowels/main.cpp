#include <iostream>
#include <string>

using namespace std;



int main() {
  string sentence;
  char vowels[5] = {'a','e','i','o','u'};
  getline(cin, sentence);
  for(int i = 0; i < sentence.length(); i++){
    for(int r = 0; r < 5; r++){
      if(vowels[r] == sentence[i]){
        sentence[i] = toupper(sentence[i]);
      }
    }
  }
  cout << sentence << endl;
}