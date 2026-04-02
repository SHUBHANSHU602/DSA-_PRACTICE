
//max subarray sum 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int max_sum=INT_MIN;
	int arr[4]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {   int sum=0;
       for (int j = 0; j < n; j++)
       {
           sum+=arr[j];
       }
       if(sum>max_sum){
        max_sum=sum;
       }
    }
    cout<<max_sum;
}

// kadane's algo to find max subarray 





//max sum of size k

#include <bits/stdc++.h>
using namespace std;

int main() {
    int max_sum=INT_MIN;
	int arr[4]={1,2,3,4};
    int k; //size of subarray
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {   int sum=0;
       for (int j = 0; j < k; j++)
       {
           sum+=arr[j];
       }
       if(sum>max_sum){
        max_sum=sum;
       }
    }
    cout<<max_sum;
}