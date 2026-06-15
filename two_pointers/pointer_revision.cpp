// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[7]={0,5,6,7,0,4,0};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int temp[7];
//    int k=0;
//    for(int i=0; i<n; i++){
//       if(arr[i]!=0){
//         temp[k++]=arr[i];
//       }
//    }
//    for(int i=k; i<n; i++){
//     temp[i]=0;
//    }
//      for(int i=0; i<n; i++){
//        cout<<temp[i];
//    }

// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[7]={0,5,6,7,0,4,0};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int j=0;
//    for(int i=0; i<n; i++){
//       if(arr[i]!=0){
//         arr[j]=arr[i];
//         j++;
//       }  
//    }
//       for(int i=j; i<n; i++){
//       arr[i]=0;
//    }
//      for(int i=0; i<n; i++){
//        cout<<arr[i];
// }}

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[7]={0,5,6,7,0,4,0};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int temp[7];
//    int k=0;
//    for(int i=0; i<n; i++){
//       if(arr[i]!=0){
//         temp[k++]=arr[i];
//       }
//    }

// remove duplicate from sorted array ,

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[]={0,0,2,2,2,3,4,5,5};
//    int k=0;
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int temp[n];
//    temp[0]=arr[0];
//    for(int i=1; i<n; i++){
//        if(temp[k]!=arr[i]){
//             k++;
//         temp[k]=arr[i];
//        }
//    }

//      for(int i=0; i<=k; i++){
//        cout<<temp[i];
// }};

#include <bits/stdc++.h>
using namespace std;
int main(){
   int arr[]={0,0,2,2,2,3,4,5,5};
   int j=0;
   int n = sizeof(arr)/sizeof(arr[0]);
   for(int i=1; i<n; i++){
       if(arr[j]!=arr[i]){
            j++;
        arr[j]=arr[i];
       }
   }

     for(int i=0; i<=j; i++){
       cout<<arr[i];
}};