// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to return minimum difference
// between two subarray sums
int minDiffSubArray(int arr[], int n)
{

	// To store prefix sums
	int prefix_sum[n];

	// Generate prefix sum array
	prefix_sum[0] = arr[0];

	for(int i = 1; i < n; i++)
		prefix_sum[i] = prefix_sum[i - 1] +
							arr[i];

	// To store suffix sums
	int suffix_sum[n];

	// Generate suffix sum array
	suffix_sum[n - 1] = arr[n - 1];

	for(int i = n - 2; i >= 0; i--)
		suffix_sum[i] = suffix_sum[i + 1] +
							arr[i];

	// Stores the minimum difference
	int minDiff = INT_MAX;

	// Traverse the given array
	for(int i = 0; i < n - 1; i++)
	{

		// Calculate the difference
		int diff = abs(prefix_sum[i] -
					suffix_sum[i + 1]);

		// Update minDiff
		if (diff < minDiff)
			minDiff = diff;
	}

	// Return minDiff
	return minDiff;
}

// Driver Code
int main()
{

	// Given array
	int arr[] = { 7, 9, 5, 10 };

	// Length of the array
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<n<<endl;

	cout << minDiffSubArray(arr, n);
}

// This code is contributed by code_hunt
