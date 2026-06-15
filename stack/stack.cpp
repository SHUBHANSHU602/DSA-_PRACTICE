// // reverse a string
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="hello";
//  stack<int>st;
//  for(char ch:s){
//     st.push(ch);
//  }
// string ans="";
// while(!st.empty()){
//     ans+=st.top();
//     st.pop();
// }
// cout<<ans;
// };

// check balance paranthesis

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   string s="([{}])";
//   bool valid=true;
//   stack<char>st;
//   for(char ch : s){
//     if(ch=='(' || ch=='[' || ch=='{')
//         {
//             st.push(ch);
//         }
  
//   else
//   {
//     if(st.empty()){
//         valid=false;
//         break;
//     }
//     if(ch==')' && st.top()=='('){
//          st.pop();
//     }
//     else if(ch=='}' && st.top()=='{'){
//           st.pop();
//     }
//     else if(ch==']' && st.top()=='['){
//           st.pop();
//     }
//     else{
//          valid=false;
//          break;
//     }
//   }
//   }

//     if(!st.empty())
//         valid=false;

//     cout<<valid;
// }


