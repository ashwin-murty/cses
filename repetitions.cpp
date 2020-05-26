#include <iostream>
#include <string>
using namespace std;

int repetitions(const string& n);
int longestSubString(const string& s, int i);

int main()
{
  string dna;
  cin >> dna;
  cout << repetitions(dna) << endl;
  return 0;
}
int repetitions(const string& n)
{
  
  int maxSoFar = 0;
  for (int i = 0; i < n.size(); i++){
    int curr = longestSubString(n,i);
    if (curr > maxSoFar){
      maxSoFar = curr;
    }
    i = i + curr - 1;
  }
  return maxSoFar;
}
int longestSubString(const string& s, int i)
{
  int result = 1;
  for (int j = i +1; j < s.size(); j++){
    if (s[j] == s[i]) result++;
    else return result;
  }
  return result;
}
