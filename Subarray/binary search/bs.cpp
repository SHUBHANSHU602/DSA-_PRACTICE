// LEVEL 1 — PURE BASICS

// 1. Binary Search
// LeetCode 704

// 2. Search Insert Position
// LeetCode 35

// 3. First Occurrence of Element

// 4. Last Occurrence of Element

// 5. Count Occurrences

// 6. Lower Bound

// 7. Upper Bound

// 8. Floor and Ceil


// LEVEL 2 — LOGIC BUILDING

// 9. Square Root of Number
// LeetCode 69

// 10. Valid Perfect Square
// LeetCode 367

// 11. Guess Number Higher or Lower
// LeetCode 374

// 12. First Bad Version
// LeetCode 278


// 1;-Search Insertion POsition

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//           int n=nums.size();
//         int i=0,j=n-1;
       
//         while(i<=j){
//             int mid=i+(j-i)/2;
         
//             if(target==nums[mid]){
              
//                return mid;
//             }
//             else if(target<nums[mid]){
//                  j=mid-1;
//             }
//             else{
//                 i=mid+1;
//             }
            
//         }
//         return i;
        
//     }
// };


// 2:- First Occurnce of the elemnt

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>arr={1,2,3,3,4,5};
//     int i=0,j=arr.size()-1;
//     int target=3;
//     int ans=-1;
//     while(i<=j){
//         int mid=i+(j-i)/2;
//        if(arr[mid]==target){
//         j=mid-1;
//         ans=mid;
//        }
//        else if(target<mid){
//         j=mid-1;
//        }
//        else{
//         i=mid+1;
//        }
//     }
    
//     if (ans != -1)
//         cout << "First occurrence at index: " << ans << endl;
//     else
//         cout << "Element not found" << endl;
// }



// 3:- Last Occurnce of the elemnt

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>arr={1,2,5,5,5,5};
//     int i=0,j=arr.size()-1;
//     int target=5;
//     int ans=-1;
//     while(i<=j){
//         int mid=i+(j-i)/2;
//        if(arr[mid]==target){
//         i=mid+1;
//         ans=mid;
//        }
//        else if(target<mid){
//         j=mid-1;
//        }
//        else{
//         i=mid+1;
//        }
//     }
    
//     if (ans != -1)
//         cout << "last occurrence at index: " << ans << endl;
//     else
//         cout << "Element not found" << endl;
// }

// 6. upper Bound

// Upper bound ka meaning:
// Find the first element strictly greater than target.
// Mathematically:
// first element > target

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>arr={3,5,6,6,7,8};
//     int i=0 , j=arr.size()-1;
//     int target=7;
//      int ans=-1;
//     while(i<=j){
//         int mid=i+(j-i)/2;
       
//         if(arr[mid]>target){
//           ans=mid;
//           j=mid-i;
//         }
//         else {
//             i=mid+1;
//         }
//     }
//     if(ans!=-1){
//         cout<<"lower  bound is:-"<<ans<<arr[ans];
//     }
//     else{
//         cout<<" no element found";
//     }
// }



// 7:-Lower bound means:

// Find the first element greater than or equal to target.
// Mathematically:
// first element ≥ target

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>arr={3,5,6,6,7,8};
//     int i=0 , j=arr.size()-1;
//     int target=7;
//      int ans=-1;
//     while(i<=j){
//         int mid=i+(j-i)/2;
       
//         if(arr[mid]>=target){
//           ans=mid;
//           j=mid-1;
//         }
//         else {
//             i=mid+1;
//         }
//     }
//     if(ans!=-1){
//         cout<<"lower  bound is:-"<<ans;
//     }
//     else{
//         cout<<" no element found";
//     }
// }



