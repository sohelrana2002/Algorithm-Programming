#include <bits/stdc++.h>
using namespace std;
int getMaxProfit(int length[], int price[], int n, int L) {
	int dp[n + 1][L + 1];
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= L; j++)
			if (j == 0 || i == 0)
				dp[i][j] = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= L; j++) {
			if (length[i - 1] <= j) {
				dp[i][j] = max(dp[i - 1][j],
				               price[i - 1] + dp[i][j - length[i - 1]]);
			}
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	return dp[n][L];
}
int main() {
	int n;
	cout<<"Enter no. of object: ";
	cin >> n;
	int length[n], price[n];
	cout<<"Enter length of each object: "<<endl;
	for (int i = 0; i < n; i++)
		cin >> length[i];
	cout<<"Enter price of each object: "<<endl;
	for (int i = 0; i < n; i++)
		cin >> price[i];
	cout<<"Needed length: "<<endl;
	int L;
	cin >> L;
	cout <<"MaxProfit is: "<< getMaxProfit(length, price, n, L) << endl;
	return 0;
}