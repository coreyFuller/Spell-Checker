#ifndef SPELLCHECK_H
#define SPELLCHECK_H
#include <iostream>
#include <unordered_set>
#include <cctype>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

void read_in(ifstream &input, ifstream &dict,  unordered_set<string> &words, unordered_set<string> &mispelled);
void spell_check(unordered_set<string> &words, unordered_set<string> &mispelled);

#endif