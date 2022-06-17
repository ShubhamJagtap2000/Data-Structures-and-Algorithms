// Program to find out which 2 elements of a vector give a sum of 10 or any

#include<bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> v = {2, 4, 3, 1, 7, 11};
  sort(v.begin(), v.end());
  int start;
  int end = v.size() - 1;
  wihle(start < end)
  {
    int sum = v[start] + v[end];
    if(target == sum)
    {
      cout << "YES" << endl;
      break;
    }
    else if(sum > target)
    {
      end--;
    }
    else
    {
      start++;
    }
  }
  return 0;
}
