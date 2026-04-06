// //move all zeros to end
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[7]={0,5,6,7,0,4,0};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int j=0;
//    for(int i=0; i<n; i++){
//       if(arr[i]!=0){ 
//          arr[j]=arr[i];
//          j++;
//       }
//    }
//    while(j<n){
//       arr[j]=0;
//       j++;
//    }
//   for(int i = 0; i <n; i++) {
//         cout<< arr[i];
// }
// }
// //Remove all 0 occurrences of a given 
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[7]={0,5,6,7,0,4,0};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int j=0;
//    for(int i=0; i<n; i++){
//       if(arr[i]!=0){ 
//          arr[j]=arr[i];
//          j++;
//       }
//    }
 
//   for(int i = 0; i <j; i++) {
//         cout<< arr[i]<<" ";
// }
// }


// // Move all negative numbers to beginning (order maintain)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[7]={3,-5,6,-7,0,-4,0};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int temp[100];
//    int k=0;
//    int j=0;                // attempt this one after sorting
//    for(int i=0; i<n; i++){
//       if(arr[i]<0){
//           arr[j]=arr[i];
//          j++;
//       } 
//    else {
//       temp[k++]=arr[i];
//    }}
//    for (int i = 0; i < n; i++)
//    {
//       arr[j]=temp[i];
//       j++;
//    }
   
//    for(int i=0; i<n; i++){
//      cout<<arr[i];
//    }
// }

// //Segregate even and odd numbers (order maintain)

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[7]={0,5,6,7,3,4,8};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int j=0;
//    int temp[100];
//    int k=0;                          // attempt this one after sorting
//    for(int i=0; i<n; i++){
//       if(arr[i]%2!=0){
//        arr[j]=arr[i];
//          j++;
//       }
//     else {
//       temp[k++]=arr[i];
//    }}
//      for (int i = 0; i < n; i++)
//    {
//       arr[j]=temp[i];
//       j++;
//    }
//  for(int i=0; i<n; i++){
//      cout<<arr[i];
//    }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {-1, 5, -3, 6, 7, -2};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int j = 0; // next position for non-negative

//     for(int i = 0; i < n; i++) {

//         if(arr[i] >= 0) {

//             int temp = arr[i];  // STEP 1: save
//             int k = i;

//             // STEP 2: shift right
//             while(k > j) {
//                 arr[k] = arr[k-1];
//                 k--;
//             }

//             // STEP 3: insert
//             arr[j] = temp;
//             j++;
//         }
// //     }

// //     for(int x : arr) cout << x << " ";
// // }

// // Remove duplicates from sorted array

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[7]={0,5,6,7,0,4,0};
//    int j=0;
//    int n = sizeof(arr)/sizeof(arr[0]);
//     sort(arr , arr+n);
//    for(int i=1; i<n; i++){
//       if(arr[j]!=arr[i]){
//          j++;
//          arr[j]=arr[i];
//       }
//    }
//      for(int i=0; i<=j; i++){
//         cout<<arr[i];
// }}
// Remove duplicates from sorted array keep max two duplicate

#include <bits/stdc++.h>
using namespace std;
int main(){
   int arr[12]={0,0,0,6,6,7,7,7,8,8,8,8};
   int j=0;
   int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr , arr+n);
   for(int i=0; i<n; i++){
      if(j<2||arr[i]!=arr[j-2]){
         arr[j]=arr[i];
         j++;
      }
   }
     for(int i=0; i<=j; i++){
        cout<<arr[i];
}}

// Replace all zeros with -1;

#include <bits/stdc++.h>
using namespace std;
int main(){
   int arr[7]={0,5,6,7,0,4,0};
   int n = sizeof(arr)/sizeof(arr[0]);
   for(int i=0; i<n; i++){
      if(arr[i]==0){
         arr[i]=-1;
      }
   }
 for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
}
}
// Remove element greater then k
#include <bits/stdc++.h>
using namespace std;
int main(){
   int arr[7]={0,5,6,7,2,4,3};
   int n = sizeof(arr)/sizeof(arr[0]);
   int j=0,k;
   for(int i=0; i<n; i++){
      if(arr[i]<=3){
         arr[j]=arr[i];
         j++;
      }
   }
 for(int i=0; i<j; i++){
        cout<<arr[i]<<" ";
}
}