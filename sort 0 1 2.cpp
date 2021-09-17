#include<iostream>
using namespace std;
int main()
{
  int n=5;
  int *arr1,*arr2;
  arr1=new int [n];
  arr2=new int [n];
  cout<<"Enter the element 0 1 2==== "<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
  }
  //int n0=0,n1=0,n2=0;
  // for(int i=0;i<n;i++)
  // {
  //   if(arr1[i]==0)
  //   n0++;
  //   else if(arr1[i]==1)
  //   n1++;
  //   else
  //   n2++;
  // }
  
  int i2=0;
  for(int i=0;i<n;i++)
  {
    if(arr1[i]==0)
    {
      arr2[i2]=arr1[i];
      i2++;
    }
    
    
    
  }
  for(int i=0;i<n;i++)
  {
    if(arr1[i]==1)
    {
      arr2[i2]=arr1[i];
      i2++;
    }
    }
    
    for(int i=0;i<n;i++)
    {
      if(arr1[i]==2)
    {
      arr2[i2]=arr1[i];
      i2++;
    }
    }
 delete []arr1;
  arr1=arr2;
  arr2=NULL;
  
  
  cout<<"sorted array is ";
  for(int i=0;i<n;i++)
  {
    cout<<arr1[i]<<"->";
  }
  return 0;
}
