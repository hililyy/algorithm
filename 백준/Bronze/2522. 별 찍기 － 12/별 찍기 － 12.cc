#include <iostream>
using namespace std;

int main()  {
  int n;
  cin >> n;
  
  for(int i = 1; i <= n; i++) {
    for(int j = n - i; j > 0; j--) cout << ' ';
    for(int k = 0; k < i; k++) cout << "*";
    cout<<'\n';
  }
  
  for(int i = n - 1; i > 0; i--) {
    for(int j = n - i; j > 0; j--) cout << " ";
    for(int k = n - i; k < n; k++) cout<< "*";
    cout << '\n';
  }
  
  return 0;
}