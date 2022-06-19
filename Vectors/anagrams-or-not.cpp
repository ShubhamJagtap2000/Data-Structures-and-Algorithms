// Using separate counts for both the strings

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> count1(26), count2(26);
  string s1 = "apple";
  string s2 = "elapp";
  int flag = 1;
  
  for(int i = 0; i < s1.size(); i++)
  {
    count1[s1[i] - 'a']++;
  }
  for(int i = 0; i < s2.size(); i++)
  {
    count2[s2[i] - 'a']++;
  }
  
  for(int i = 0; i < 26; i++)
  {
    if(count1[i] != count2[i];)
    {
      flag = 0;
      cout << "NO" << endl;
      break;
    }
  }
  
  if(flag)
    cout << "YES" << endl;
  
  return 0;
}
