#include <iostream>
using namespace std;

long long int minTurns(long long int array[], long int n)
{
  long long int result = 0;
  for (long int i = 1; i < n; i++)
  {
    if (array[i] < array[i-1])
    {
      
      result = result + array[i-1] - array[i];
      array[i] = array[i-1];
    }
  }
  return result;
}

int main()
{
  long int length;
  cin >> length;
  long long int initial[length];
  for (long int i = 0; i < length; i++)
  {
    cin >> initial[i];
  }
  cout << minTurns(initial, length);
  return 0;
}
