//subarrays 
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
        int n; 
        cin>>n ;
        int arr[n] ;
        const int N=1e6+2 ;
        bool check[N] ;
        for(int i = 0;i<n ; i++)
        {
              cin>>arr[i] ;
        }
        
        for(int i = 0 ;i<n ;i++)
        
        {
                for(int j = i ; j<n ; j++)
               {
                for(int k = i ; k<=j ; k++)
                {
                        cout<<arr[k]<<" " ;
                }
                cout<<endl;
               }
               
        }


}           
        
        return 0 ;
}
