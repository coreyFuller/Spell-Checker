#include "spellcheck.h"

void read_in(ifstream &input, ifstream &dict,  unordered_set<string> &words, unordered_set<string> &mispelled)
{
  string word;
  while(dict >> word)
  {
    words.insert(word);
  }
  
 
  while(input >> word)
  {
    for(unsigned int i = 0; i < word.length(); i++)
    {
      if(word[i] == '.' ){
        word[i] = '\0';
        continue;
      }
      word[i] = (tolower(word[i]));
    }
    if(words.find(word) == words.end())
    {
      mispelled.insert(word);
    }
  }
}

void spell_check(unordered_set<string> &words, unordered_set<string> &mispelled)
{
  auto it = mispelled.begin();
  while(it != mispelled.end())
  {
    int choice = 0;
    cout << "Add to dictionary?: " << *it << endl;
    cout << "1. Yes     2. No " << endl;
    cin >> choice;
    if(choice == 1)
    {
     words.insert(*it);
     it = mispelled.erase(it);
    }
    else ++it;
  }   
}