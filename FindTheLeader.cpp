/*Find the Leader
A simple problem statement with no stories: Given an array of positive integer, find out all the elements that are greater than or equal to all the elements to it's right side.

Input format
The first line contains an integer T, denoting the number of test cases.
Then follows T test cases, and each test case consists of two lines.
The first line contains N.Second-line contains N space-separated integers.
Output format
For each test case on a new line, print the list of positive integers satisfying the above given condition. Print from end element to start element.
Constraints
1<=T<=5
1<=N<=10^6
1<=A[i]<=10^6
Time limit:1 secon
Example:
Input
2
5
1 2 3 4 5
4
1 4 3 2
Output
5
2 3 4*/

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      int max=a[n-1];
      cout<<a[n-1];
      for(int i=n-2;i>=0;i--)
        if(a[i]>=max){
          cout<<" "<<a[i];
          max=a[i];
        }
      cout<<"\n";
    }
    return 0;
  }
