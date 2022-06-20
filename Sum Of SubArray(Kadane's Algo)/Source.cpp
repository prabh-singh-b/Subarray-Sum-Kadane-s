#include <iostream>
using namespace std;

//just printing the largest sum of the subarray

int PrintSum(int arr[], int n) {
	int sum =0, largest = arr[0];

	for (int i = 0; i < n; i++) {
		
		if (sum < 0) {
			sum = 0;
		}
		sum = sum + arr[i];
		if (sum > largest) {
			largest = sum;
		}
	}
	return largest;
}

int main() {
	int arr[] = { -2,3,4,-1,5,-12,6,1,3 };
	int n = sizeof(arr) / sizeof(int);
	int largest = PrintSum(arr, n);
	cout << "the Max Sum of Subarray is " << largest << endl;

}