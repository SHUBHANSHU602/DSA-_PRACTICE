/*1. Frequency Count

Given an array:
[1,2,1,3,2,1,4]

Print frequency of every element.


2. Check Duplicate

Given an array:
[5,1,4,2,3,5]

Return true if any duplicate exists,
otherwise return false.


3. Count Distinct Elements

Given:
[1,2,1,3,4,2,5]

Find number of distinct elements.


4. First Repeating Element

Given:
[10,5,3,4,3,5,6]

Find first element that repeats while traversing left to right.


5. Two Sum

Given:
nums = [2,7,11,15]
target = 9

Return indices of two numbers whose sum equals target.


6. Common Elements in Two Arrays

Given:
arr1 = [1,2,3,4]
arr2 = [3,4,5,6]

Print common elements.


7. Missing Number

Given numbers from 1 to n.
One number is missing.

Example:
[1,2,4,5]

Find missing number.


8. Find Pair with Given Sum

Given:
[8,7,2,5,3,1]
target = 10

Check whether pair exists.


9. Remove Duplicates

Given:
[1,2,2,3,1,4]

Return array with unique elements only.


10. Highest Frequency Element

Given:
[1,3,2,1,4,1,3,3,3]

Find element with maximum frequency.*/

//1. Frequency Count

// #include <bits/stdc++.h>
// using namespace std;

//  int main(){
//  int arr[]={1,2,1,3,2,1,4};
//  unordered_map<int,int>mp; // unordered map is efficient as compared to  
//  for(int ch: arr){
//     mp[ch]++;
//  }
//  for(auto ch: mp){
//     cout<<ch.first <<"-->";
//      cout<<ch.second<<endl;
//  }
//  }

 //2 Check Duplicate
/*
Return true if any duplicate exists,
otherwise return false.*/

// #include <bits/stdc++.h>
// using namespace std;

//  int main(){
//  int arr[]={1,2,1,3,2,1,4};
//  unordered_map<int,int>mp; // unordered map is efficient as compared to  map 
//  for(int ch: arr){
//     mp[ch]++;
//  }
//  bool hello=false;
//  for(auto ch: mp){
//     if(ch.second>1){
//        hello=true;
//         break;
//     }   
//  }
//  if(hello){
//     cout<<"yes duplicate do exist";
//  }
//  else{
//     cout<<"no duplicate";
//  }
//  }


// #include <bits/stdc++.h>
// using namespace std;

//  bool hasDuplicate(vector<int>& arr)
// {
//     unordered_set<int> st;
//     for(int x : arr)
//     {
//         if(st.count(x))
//         {
//             return true;
//         }
//         st.insert(x);
//     }
//     return false;
// }

//3:- write first repeating number


// method 2

// int firstRepeating(vector<int>& arr)
// {
//     unordered_set<int> st;
//     for(int x : arr)
//     {
//         if(st.count(x))
//         {
//             return x;
//         }
//         st.insert(x);
//     }
//     return -1;
// }

//  4 — Count Distinct Elements

// #include <bits/stdc++.h>
// using namespace std;

//  int main(){
//  int arr[]={1,2,1,3,2,1,4};
// unordered_set<int>st;
// for(int ch: arr){
//     st.insert(ch);
// }
// cout<<"number od distict -->"<<st.size()<<endl;
// for(auto ch: st){
//     cout<< ch<<" ";
// }

//  }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int maxx=INT_MIN;
      int arr[]={1,2,1,3,2,1,4};
       unordered_map<int,int>mp;
       for(int x:arr){
          mp[x]++;
       }
       for(auto &it:mp){
        maxx=max(maxx,it.second);
       }
       for(auto &it : mp)
{
    if(it.second == maxx)
    {
        cout << it.first;
        break;
    }
}
}