#include <iostream>
using namespace std;

long long int numArrangments(long long int n)
{
  long long int total = 0;
  if (n == 1) return 0;
  if (n == 2) return 6;
  if (n == 3) return 28;
  total = total+ (n*n-9)*((n-4)*(n-4))/2;
  total = total + ((n-4)*4*(n*n-7))/2;
  total = total + ((4+(n-4)*4)*(n*n-5))/2;
  total = total + 4*(n*n-3)/2;
  total = total + 8*(n*n-4)/2;
  return total;
}

int main()
{
  long long int n;
  cin >> n;
  for (long long int i = 1; i <= n; i++)
  {
    cout << numArrangments(i) << endl;
  }
}
