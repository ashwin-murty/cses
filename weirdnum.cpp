#include <iostream>
using namespace std;

long long int weird(long long int n);

int main()
{
  long long int n;
  cin >> n;
  cout << weird(n) << endl;
  return 0;
}
long long int weird(long long int n)
{
  if (n == 1) return 1;
  if (n % 2 == 0)
  {
    cout << n << " ";
    return weird(n/2);
  }
  else
  {
    cout << n << " ";
    return weird(3*n + 1);
  }
}
