#include <iostream>
using namespace std;
long long n, dp[101][11], answer;

int main() {
  cout.tie(0); cin.tie(0) -> sync_with_stdio(0);
  
  cin >> n;
  
  for(int i = 1; i <= 9; i++) dp[1][i] = 1;
  
  for(int i = 2; i <= n; i++) {
    for(int j = 0; j < 10; j++) {
      
      if(j == 0) dp[i][0] = dp[i - 1][1];
      else if(j == 9) dp[i][9] = dp[i - 1][8];
      else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
    }
  }
  
  for(int i = 0; i <= 9; i++) answer += dp[n][i];

  cout << answer % 1000000000;
  
  return 0;
}