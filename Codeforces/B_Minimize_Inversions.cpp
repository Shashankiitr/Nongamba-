#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
#define INF 1e18
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define MAX 1000000000
#define MIN -1000000000
#define PI 3.1415926535897932384626433832795
using namespace std;

/**
 * Merge two sorted halves of an array and count the number of inversions.
 *
 * @param arr The input vector containing the array elements.
 * @param left The index of the leftmost element in the current range.
 * @param mid The index of the middle element in the current range.
 * @param right The index of the rightmost element in the current range.
 * @return The count of inversions in the merged array.
 */
int mergeAndCountInversions(vector<int>& arr, int left, int mid, int right) {
    // Create a temporary vector to store the merged result.
    vector<int> temp(right - left + 1);

    // Initialize the inversion count to 0.
    int inversionCount = 0;

    // Initialize indices for the left, right, and temporary arrays.
    int i = left, j = mid + 1, k = 0;

    // Merge the two halves while counting inversions.
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            // If the element in the left half is smaller or equal, no inversion occurs.
            temp[k++] = arr[i++];
        } else {
            // If the element in the right half is smaller, count inversions and merge.
            inversionCount += mid - i + 1;
            temp[k++] = arr[j++];
        }
    }

    // Copy remaining elements from the left half (if any).
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements from the right half (if any).
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy the merged elements back to the original array.
    for (int x = 0; x < k; x++) {
        arr[left + x] = temp[x];
    }

    // Return the total count of inversions in the merged array.
    return inversionCount;
}


/**
 * Recursively merge and count inversions in an array using the Merge Sort algorithm.
 *
 * @param arr The input vector containing the array elements.
 * @param left The index of the leftmost element in the current range.
 * @param right The index of the rightmost element in the current range.
 * @return The total count of inversions in the array.
 */
int mergeSortAndCountInversions(vector<int>& arr, int left, int right) {
    // Initialize the inversion count to 0.
    int inversionCount = 0;

    // Check if there is more than one element in the current range.
    if (left < right) {
        // Calculate the middle index of the current range.
        int mid = left + (right - left) / 2;

        // Recursively merge and count inversions in the left half.
        inversionCount += mergeSortAndCountInversions(arr, left, mid);

        // Recursively merge and count inversions in the right half.
        inversionCount += mergeSortAndCountInversions(arr, mid + 1, right);

        // Merge the two halves and count inversions in the merged array.
        inversionCount += mergeAndCountInversions(arr, left, mid, right);
    }

    // Return the total count of inversions in the array.
    return inversionCount;
}


void print(vector<pair<int, int>> A){
    for(int i = 0 ; i < A.size() ; i++){
        cout << A[i].first << " ";
    }
    cout << endl;
    for(int i = 0 ; i < A.size() ; i++){
        cout << A[i].second << " ";
    }
    cout << endl;
}

void sorting(vector<pair<int, int>> &A){
    sort(A.begin(), A.end());
}

int32_t main(){
    int t;
    cin >> t;
    for(int ii = 0 ; ii < t ; ii++){
        int N; 
        cin >> N; 
        vector<pair<int, int>> A(N);
        vector<int> array1(N), array2(N);
        int i = 0;
        while (i < N) {
            cin >> A[i].first;
            i++;
        }
        i = 0;
        vector<pair<int, int>> B(N);
        while (i < N) {
            cin >> B[i].first;
            i++;
        }
        i = 0;
        while (i < N) {
            A[i].second = B[i].first;
            B[i].second = A[i].first;
            i++;
        }

        sorting(A); 
        i = 0;
        while(i < N){
            array1[i] = A[i].second; i++;
        }

        sorting(B);
        i = 0;
        while(i < N){
            array2[i] = B[i].second; i++;
        }

        if(mergeSortAndCountInversions(array1, 0, N - 1) <= mergeSortAndCountInversions(array2, 0, N - 1)) print(A);
        else print(B);
    }
    return 0;
}
