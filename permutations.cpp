#include <iostream>
#include <string>
using namespace std;

string permutation(int n)
{
  if (n == 1) return "1";
  if (n <= 3) return "NO SOLUTION";
  if (n == 4) return "2 4 1 3";
  string result = "";
  for (int i = 1; i <= n; i = i + 2)
  {
    string s = to_string(i);
    result.insert(result.size(),s);
    result.push_back(' ');
  }
  for (int i = 2; i <= n; i = i +2)
  {
    string s = to_string(i);
    result.insert(result.size(),s);
    result.push_back(' ');
  }
  return result;
}
int main()
{
  int n;
  cin >> n;
  cout << permutation(n) << endl;
  return 0;

}
