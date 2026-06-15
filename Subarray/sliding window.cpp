
// Maximum Sum Subarray of Size K


#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {0, 5, 6, 7, 0, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    int maxSum = currentSum;

    for (int i =1; i < n-k; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];  // slide window
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum;
}

// First Negative Number in Every Window of Size K
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,0,-3,7,-2,-5,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=0;
    for(int i=0; i<k; i++){
        if(arr[i]<0){
            cout<<arr[i];
            break;
        }
   }
    for(int i=1; i<n-k; i++){
      arr[i]=arr[i]-arr[i-1]+arr[i-1+k];
         if(arr[i]<0){
            cout<<arr[i];
            break;
        }
   }
}


// Count Occurrences of Anagrams (easy intro to hashmap)
// Sliding Window Maximum (deque intro – important)
// Average of Subarrays of Size K