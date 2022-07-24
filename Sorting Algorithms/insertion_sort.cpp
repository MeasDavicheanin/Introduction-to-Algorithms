#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int> a = { -4, 10, 20, 2 };
	for (int i = 0; i < a.size(); i++) {
		int j = i;
		while (j > 0 && a[j] < a[j - 1]) {
			// swap
			int temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
			j--;
		}
	}
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	return 0;
}