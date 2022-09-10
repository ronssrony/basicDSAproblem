#include<iostream>

using namespace std;

int main()
{
    int t ;
    cin>>t;
    while (t--)
    {
      int n  ;
      cin>>n ; 
      int arr[n];
      for (int i = 1 ; i<=n ;i++)
      {
        cin>>arr[i];
      }
      int min = arr[1];
      int max = arr[1];
      for (int j = 1 ; j<=n  ; j++)
      {
        if (min>arr[j])
        {
            min = arr[j] ;
        }
        else if (max<arr[j])
        {
            max = arr[j];
        }
      }
      cout<<min<<" "<<max<<endl;
    }
  return 0;
}
