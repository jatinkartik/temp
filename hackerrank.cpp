#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   vector <string> split(string& s, char delimiter){
      vector <string> tokens;
      string token;
      istringstream tokenStream(s);
      while(getline(tokenStream, token, delimiter)){
         tokens.push_back(token);
      }
      return tokens;
   }
   static bool cmp(pair <string, int>& a, pair <string, int>& b){
      if(a.first.size() != b.first.size()) return a.first.size() < b.first.size();
         return a.second < b.second;
   }
   static bool a(string& a, string& b){
      return a.size() < b.size();
   }
   string arrangeWords(string text) {
      text[0] += 'a' - 'A';
      vector<string> x = split(text, ' ');
      vector<pair<string, int> > s;
      for (int i = 0; i < x.size(); i++)
      s.push_back({ x[i], i });
      sort(s.begin(), s.end(), cmp);
      string ret = "";
      for (int i = 0; i < s.size(); i++) {
         ret += s[i].first;
         if (i != s.size() - 1)
            ret += ' ';
      }
      ret[0] += 'A' - 'a';
      return ret;
   }
};
main(){
   Solution ob;
   cout << (ob.arrangeWords("hey there i love someone very much really you know that person name")); 
}
