// // 1.

// // Move all zeros to end
#include <bits/stdc++.h>
using namespace std;
int main(){
   int arr[7]={0,5,6,7,0,4,0};
   int n = sizeof(arr)/sizeof(arr[0]);
   int j=0;
   for(int i=0; i<n; i++){
      if(arr[i]!=0){
         arr[j]=arr[i];
      }
   }
  for(int i = 0; i < n; i++) {
        cout<< arr[i];
}
}

// // 2.

// // Remove all 0 occurrences of a given array
#include <bits/stdc++.h>
using namespace std;
int main(){
   int arr[7]={0,5,6,7,0,4,0};
   int n = sizeof(arr)/sizeof(arr[0]);
   int temp[n];
   int k=0;
   for (int i=0; i<n; i++){
      if(arr[i]!=0){
         temp[k]=arr[i];
        k++;
      }
   }
    for(int i = 0; i < n-3; i++) {
    arr[i] = temp[i];
}    for(int i = 0; i < n-3; i++) {
        cout<< arr[i];
}
}
// // // two pointers 
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //    int arr[7]={0,5,6,7,0,4,0};
// //    int n = sizeof(arr)/sizeof(arr[0]);
// //    int j=0;
// //    for(int i=0; i<n; i++){
// //       if(arr[i]!=0){
// //          arr[j]=arr[i];
// //          j++;
// //       }
// //    }
// //     for(int i = 0; i < n-3; i++) {
// //         cout<< arr[i];
// // }}

// // 3.

// // Remove duplicates from sorted array


// //two pointers
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[7]={0,5,6,7,0,4,0};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int j=0;
//     sort(arr, arr+n);
//    for(int i=1; i<n; i++){
//       if(arr[j]!=arr[i]){
//          j++;
//          arr[j]=arr[i]; 
//       }
//    }
//    for(int i=0; i<j; i++){
//      cout<<arr[i];
//    }
// }

// // 4.

// // Move all negative numbers to beginning (order maintain)
// // two pointers
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[7]={0,5,6,7,0,4,0};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int j=0;
//    for(int i=n; i<0; i++){
//       if(arr[i]>=0){
//           swap(arr[j] ,arr[i]);
//          j++;
//       }
//    }
//  for(int i=0; i<n; i++){
//      cout<<arr[i];
//    }
// }


// // 5.

// // Move all positive numbers to end (order maintain)
// //two pointers
#include <bits/stdc++.h>
using namespace std;
int main(){
   int arr[7]={0,-5,6,7,0,-4,0};
   int n = sizeof(arr)/sizeof(arr[0]);
   int j=0;
   for(int i=0; i<n; i++){
      if(arr[i]<=0){
          swap(arr[i] ,arr[j]);
         j++;
      }
   }
 for(int i=0; i<n; i++){
     cout<<arr[i];
   }
}
// 6.

// Segregate even and odd numbers (order maintain)
//two pointers
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[7]={0,5,6,7,3,4,8};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int j=0;
//    for(int i=0; i<n; i++){
//       if(arr[i]%2!=0){
//        swap(arr[j] ,arr[i]);
//          j++;
//       }
//    }
//  for(int i=0; i<n; i++){
//      cout<<arr[i];
//    }
// }