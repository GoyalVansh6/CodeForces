#include<bits/stdc++.h>
using namespace std;

void fxn(){
	int x, m;
	cin >> m >> x;

	vector<int> cost(m);	
	vector<int> happiness(m);
	int maxHappiness = 0;
	for(int i = 0; i < m; i++){
		cin >> cost[i] >> happiness[i];
		maxHappiness += happiness[i];
	}
	
	vector<long long> dp(maxHappiness + 1, INT64_MAX);
	dp[0] = 0;
	int ongoingHappiness = 0;
	long long Ans = 0;
	
	for(int i = 0; i < m; i++){
		ongoingHappiness += happiness[i];
		for(int j = ongoingHappiness; j >= happiness[i]; j--){
			if(dp[j - happiness[i]] != INT64_MAX && cost[i] + dp[j - happiness[i]] <= 1LL * i * x) {
				dp[j] = min(dp[j], dp[j - happiness[i]] + cost[i]);
				Ans = max(Ans, j*1LL);
			}
		}
	}
	
	cout << Ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		fxn();
	}
}
