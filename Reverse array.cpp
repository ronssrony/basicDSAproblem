
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()


{

     int t  ;
     cin>>t;
     int arr[t];
     for (int i = 1 ; i <=t ;i++)
     {
         cin>>arr[i];
     }
     int start = 1 , end =t , temp;
     while (start<end)
     {
           temp = arr[start];
           arr[start] = arr[end];
           arr[end] = temp;
           start++;
           end--;
     }
     for (int j = 1 ; j<=t ; j++)
     {
         cout<<arr[j]<<" ";
     }

    }

