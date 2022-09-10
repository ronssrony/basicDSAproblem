#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
   
  int t ; 
  cin>>t;
  while (t--)
  {
     priority_queue <int> pq;
 
   int n ;
   cin>>n ; 
   int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        int c;
        cin>>c;
        arr[i]=c ; 

        pq.push(-arr[i]);
        
    }
    int k ; 
    cin>>k;
    for ( int j = 0 ; j<k-1  ; j++)
    {
       pq.pop();
    }
      cout<<-pq.top()<<endl;
  }
    
 return 0;
}
