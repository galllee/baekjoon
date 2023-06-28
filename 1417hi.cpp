#include <iostream>
using namespace std;
int max(int* arr, int n) {
	int m=0;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= arr[m])
			m = i;
	}
	return m;
}
int main() {
	int n;
	cin >> n;
	int arr[50];
	int m = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	

	while (max(arr, n)!=0) {
		m = max(arr, n);
		arr[m]--;
		arr[0]++;
		count++;
	}

	cout << count;

	return 0;
}