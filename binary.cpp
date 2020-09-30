#include <iostream>
#include <cassert>
#include <vector>
#include<bits/stdc++.h>

using std::vector;

int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size(); 
  int mid;
  std::vector<int> v;
  int z = 0;
  while(left < right){
     mid = left + (right - left)/2;
    if( x == a[mid]){
      z = 1;
    }  
    else if(x < a[mid]){
      right = left -1;
    }
    else{
      left = right + 1;
    }
  }

    if (z == 1){
      return mid;
    }
    else{
      return -1;
    }
  }

//int linear_search(const vector<int> &a, int x) {
 // for (size_t i = 0; i < a.size(); ++i) {
   // if (a[i] == x) return i;
  //}
  //return -1;

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  //for (size_t i = 0; i < a.size(); i++) {
  for (size_t i = 0; i < n; i++){
    std::cin >> a[i];
  }
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, b[i]) << ' ';
  }
}
