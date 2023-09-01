#include <iostream>
#include <vector>

using namespace std;

vector<float> adjustprices(vector<float> prices, float inflation) {
	vector<float> adjustprices;
	int i;
	for (int i = 0; i < prices.size(); i++) {
		float adjustedprice = (prices[i] * (inflation)) + prices[i];
		adjustprices.push_back(adjustedprice);
	}
	return adjustprices;
}

int main() {
	vector<float> prices;
	float price = 1;

	while (price != 0) {
		cout << "Please enter a price (enter 0 when finished): ";
		cin >> price;
		if (price != 0) {
			prices.push_back(price);
		}
	}

	float inflationrate;
	cout << "Please enter the rate of inflation : ";
	cin >> inflationrate;

	vector<float> adjustedprices = adjustprices(prices, inflationrate);
	for (int i = 0; i < adjustedprices.size(); i++) {
		cout << adjustedprices[i] << " ";
	}

	return 0;
}
