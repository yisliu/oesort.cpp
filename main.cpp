#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main() {
  int n;
  cin>>n;
  // vector <int> str;
  vector <int> str1;
  vector <int> str2;
  for(int i = 0; i<n; i++){
    int temp;
    cin>>temp;
    // str.push_back(temp);
    if(temp%2==0){
      str2.push_back(temp);
      continue;
    }
    if(temp==1){
      str1.push_back(temp);
    }
    str1.push_back(temp);
  }

  /*
    if(str[i]%2==0){
      str2.push_back(str[i]);
      continue;
    }
    str1.push_back(str[i]);
*/
  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());
  for(int i = str1.size()-1; i>0; i--){
    cout<<str1[i]<<" ";
  }
  for(int i = str2.size()-1; i>0; i--){
    cout<<str2[i]<<" ";
  }
  // int len = str2.size();
  cout<<str2[0];
}
/*
example:
6
1 3 8 3 2 9
*/