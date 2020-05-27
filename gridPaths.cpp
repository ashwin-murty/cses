#include <iostream>
#include <string>
#include <set>
#include <utility>
using namespace std;


int numPaths(int i, int j, set<pair<int, int> > visited, const string& path, int index)
{
  int result = 0;
  if ((i < 0) || (i > 6) || (j < 0) || (j > 6) )
  {
    return 0;
  }
  if ((i == 6) && (j == 0))
  {
    if (index == 47) return 1;
    return 0;
  }
  if (visited.find(make_pair(i,j)) != visited.end())
  {
    return 0;
  }
  visited.insert(make_pair(i,j));
  if (path[index] == '?') result = numPaths(i+1,j, visited, path, index + 1) + numPaths(i-1, j, visited, path, index + 1) + numPaths(i, j+1, visited, path, index + 1) + numPaths(i,j-1, visited, path, index + 1);
  else if (path[index] =='D') result = numPaths(i+1,j, visited, path, index + 1);
  else if (path[index] == 'U') result = numPaths(i-1,j, visited, path, index + 1);
  else if (path[index] == 'L') result = numPaths(i, j-1, visited, path, index + 1);
  else result = numPaths(i, j+1, visited, path, index + 1);
  visited.erase(visited.find(make_pair(i,j)));
  return result;
}

int main()
{
  string s;
  cin >> s;
  set<pair<int, int> > v;
  int n = numPaths(0,0, v, s, 0);
  cout << s << endl;
  cout << n << endl;
  return 0;
}
