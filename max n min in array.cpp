#include<iostream>
using namespace std;
int main()
{
  int n=5, arr[n];
  cout<<"Enter the elements";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int min=INT_MAX;
  int max=INT_MIN;
  
  for(int i=0;i<n;i++)
  {
    if(arr[i]<min)
    {
      min=arr[i];
    }
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  cout<<"Max element is "<<max<<endl;
  cout<<"Min element is "<<min<<endl;
  return 0;

}
