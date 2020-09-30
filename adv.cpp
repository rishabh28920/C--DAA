#include <algorithm>
#include <iostream>
#include <vector>
#include <bits/stdc++.h> 

using std::vector;

int max_dot_product(vector<int> a, vector<int> b) {
  // write your code here
  int sum = 0;
  std::sort(a.begin(),a.end());
  std::sort(b.begin(),b.end());
  for(int i=0;i<a.size()-1;i++){
  	sum = sum + (a[i]*b[i]);
  }
  return sum;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b) << std::endl;
}
