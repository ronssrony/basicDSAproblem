
#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[] , int n )
{

    for (int i = 0  ;i<n ; i++)
    {

        cout<<arr[i]<<" ";
    }
}
int main()
{
int t ;
cin>>t;
while(t--)
{
    int n ,temp , j = 0  ;
    cin>> n ;
    int arr[n];
    for (int i = 0  ; i< n ; i++)
    {
        cin>>arr[i];
    }


 for (int i = 0  ; i<n ; i++)
   {
         if (arr[i]<0  )
         {
            swap (arr[i],arr[j]);
            j++;
         }
   }
   printarray(arr, n) ;


}

    return 0 ;
}
