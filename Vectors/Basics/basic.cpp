#include<bits/stdc++.h>

using namespace std;

int main()
{
  //Declaring a integer vector v
  vector<int> v;
  v.push_back(1);                      //Adding an element at the end of a vector v
  v.push_back(2);
  v.push_back(3);
  
  int S = v.size();
  
  for(int i = 0; i < S; i++)
  {
    cout << i << endl;
    v.push_back(v[i]);
  }
  
  v.pop_back();                         //Deleting an element at the end of a vector v
 
  v.resize(x);                          //Resizes the vector v so that now it contains 'x' elements
  
  //Insert new elements before the element at the specified position
  v.insert(v.begin(), 5);               //Inserts 5 at the beginning of the vector v
  
  //Remove elements from a container from the specified position or range.
  v.erase(v.begin());                   //Removes the first element of vector v  
  
  cout << v.size() << endl;             //Tells you how many elements you currently have
  
  cout << v.capacity() << endl;         //Tells you how large the size can get before the vector needs to reallocate memory for itself. Capacity is always greater than or equal to size.
  return 0;
}
