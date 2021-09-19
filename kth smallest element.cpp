#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n ;
  cout<<"enter the value of n";
  cin>>n;
  int arr[n];
  cout<<"enter the values of array "<<endl;;
  for(int i =0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  int k;
  cout<<"enter value of k ";
  cin>>k;
  if(k<n)
  {
    cout<<arr[k];
  }
  
  
  return 0;
}
