#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int a1,a2;
	cin >> a2 >> a1;

	int len = 0;
	int currl = 0;
	for (int i = 0; i < n - 2; i++) {
		int a;
		cin >> a;
		if (a != a1 + a2) {
			currl = i + 1;
		}
		else {
			len = max(len, i - currl + 1);
		}
		swap(a1, a2);
		a1 = a;
	}

	cout << min(len + 2, n);
}
