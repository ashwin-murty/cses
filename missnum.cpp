#include <iostream>
using namespace std;

int missingNum(int array[], int length)
{
  bool b[length];
  for (int i = 0; i < length; i++)
  {
    b[i] = false;
  }
  for (int i = 0; i < length - 1; i++)
  {
    int x = array[i];
    b[x-1] = true;
  }
  for (int i = 0; i < length; i++)
  {
    if (b[i] == false) return i+1;
  }
  return length;
}

int main()
{
  int size;
  cin >> size;
  int a[size-1];
  for (int i = 0; i < size - 1; i++)
  {
    cin >> a[i];
  }
  int result = missingNum(a,size);
  cout << result << endl;
  return 0;
}
