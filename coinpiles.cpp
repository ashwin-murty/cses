#include <iostream>
using namespace std;

bool canEmpty(int a, int b)
{
  if (((a + b) % 3 == 0) && (a <= 2*b) && (2*a >= b))
  {
    return true;
  }
  return false;
}

int main()
{
  int numTests;
  cin >> numTests;
  for (int i = 0; i < numTests; i++)
  {
    int a;
    int b;
    cin >> a;
    cin >> b;
    if (canEmpty(a,b)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
