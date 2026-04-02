// // count each elemts of array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,2,5,6,5,5,6,6,1,2};
    bool visited[10]={false};  // for duplicate 
    for (int i = 0; i < 10; i++){
       if(visited[i]){
            continue;
        }
       int count=0;
       for (int j = 0; j < 10; j++)
       {
       
       if(arr[i]==arr[j]){
            count++;
            visited[j]=true;
        }
       }
       cout<<arr[i]<<"-->"<<count<<"  ";
       cout<<endl;
    }
    
} 
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 1, 2, 1, 2, 4, 7}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int unique = 0;
    for (int i = 0; i < n; i++) {
        unique ^= arr[i];  
    }

    cout << "Unique element: " << unique << endl;
    return 0;
}
// unique elements
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 1, 2, 1, 2, 4, 7, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {   
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

// push all the zeros of array at last


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[7]={5,5,0,0,6,7,8};
//     int temp;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n; i++){
//        if(arr[i]==0){
//         int temp=arr[i];
//         arr[i]=arr[n-i];
//         arr[n-i]=arr[i];
//        }
//     }
// }
