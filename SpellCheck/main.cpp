#include "spellcheck.h"
using namespace std;

int main(int argc, char * argv[]) {

  unordered_set<string>words;
  unordered_set<string>mispelled;
  ifstream input(argv[1]);
  ifstream dict("words.txt");

  read_in(input, dict, words, mispelled);
  spell_check(words, mispelled);
  return 0;
}
