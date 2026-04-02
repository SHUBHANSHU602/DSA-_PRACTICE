// ARRAY DSA PRACTICE — SUBARRAY → PREFIX

// ---

// ## EASY

// Q1. Print all subarrays
// Given an array, print all possible subarrays.

// Q2. Count total number of subarrays
// Given an array of size n, count total subarrays.

// Q3. Find sum of each subarray
// Print every subarray along with its sum.

// Q4. Find total sum of all subarrays
// Return the sum of all subarrays combined.

// ---




// 

// Q8. Count subarrays with given sum K
// Given an array and integer K, count number of subarrays whose sum equals K.

// Q9. Maximum subarray sum (using prefix)
// Find the maximum subarray sum using prefix sum approach.

// Q10. Count subarrays with sum equal to 0
// Given an array, count number of subarrays whose sum is 0.

// ---

// ## END


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int arr[4]={5,6,7,8};
//     int n=sizeof(arr)/sizeof(arr[0]);         //
//     for (int i = 0; i < n; i++)
//     {
//         for (int j= i; j < n; j++)
//         {
//             for (int k = i; k <=j; k++)
//             {
//                 cout<<arr[k]<<" ";
//             }
            
//             cout<<endl;
//         }
        
//     }
    
// }

// Q2. Count total number of subarrays
// Given an array of size n, count total subarrays.

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int arr[4]={5,6,7,8};
//     int count=0;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j= i; j < n; j++)
//         {     count++;
//         }
        
//     }
//     cout<<count;
// }

// Q3. Find sum of each subarray
// Print every subarray along with its sum.

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int arr[4]={5,6,7,8};
//     int count=0;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {    
//         for (int j= i; j < n; j++)
//         {      int sum=0;  // yhaa declare isiliye kiye the Kyuki har (i, j) pair = ek naya subarray hai → aur har subarray ka fresh sum chahiye
//             for (int k = i; k <=j; k++)
//            {  sum = sum+arr[k];
//                cout<<arr[k]<<" "; // sum yhaa isiliye nahi print karaa sakte kyu ki har idividual value , ke baad sum dene lagegi

//            }
          
//            cout<<"sum"<<sum;
//            cout<<endl;
//         }
         
        
//     }

// }

// Q4. Find total sum of all subarrays
// Return the sum of all subarrays combined.


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int arr[4]={5,6,7,8};
    
//     int sum=0;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {    
//         for (int j= i; j < n; j++)
//         {     
//             for (int k = i; k <=j; k++)
//            {  sum = sum+arr[k];
               
//            }
           
//         }
//     }
//     cout<<"sum="<<sum;
// }


// Q5. Optimize subarray sum (O(n³) → O(n²))
// Print sum of all subarrays without using the third loop.

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int arr[4]={5,6,7,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {   long long int sum =0;
//         for (int j= 0; j < n; j++) //we can optimize by observing that when we increase the end index j, the new subarray sum can be obtained by adding arr[j] to the previous sum.
//         {
//           sum+=arr[j];
//         }
         
//     }  
// }


// Q6. Create prefix sum array
// Given an array, create its prefix sum array.
//👉 Input: [1,2,3,4]
//👉 Output: [1,3,6,10]

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int arr[4]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 1; i < n; i++)
//     {   
//         arr[i]=arr[i]+arr[i-1];
//     }  
//     for (int i = 0; i < n; i++)
//     {   
//        cout<< arr[i];
//     }  
// }
// // Q7. Range sum query
// // Given an array and multiple queries (i, j), find sum of subarray from index i to j

#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[4]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m,j, sum=0;
    cout<<"enter starting and endind index respectively";
    cin>>m;
    cin>>j;
    for (int i = m; i <= j; i++)
    {   
        sum=sum+arr[i];
    }  
   cout<<sum;
}