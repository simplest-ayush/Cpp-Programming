#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid) {
    int student_count = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            return false;
        }
        if (pagesum + arr[i] > mid) {
            student_count += 1;
            pagesum = arr[i];
            if (student_count > m) {
                return false;
            }
        } else {
            pagesum += arr[i];
        }
    }
    return true;
}
int allocateBooks(int arr[], int n, int m) {
    if (n < m) {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int start = 0, end = sum;
    int result = INT_MAX;
    cout<<result<<endl;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, n, m, mid)) {
            result = min(result, mid); 
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return result;
}
int main() {
    int n = 6;
    int m = 4;
    int arr[] = {4 ,7 ,8 ,17 ,5 ,10 };
    cout << "The minimum value of the maximum number of arr in book allocation is: " << allocateBooks(arr, n, m) << endl;
}