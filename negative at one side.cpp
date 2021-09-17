#include<iostream>
using namespace std;
int main()
{
  int n=9,*arr1,*arr2;
  arr1=new int [n];
  arr2=new int [n];
  cout<<"Enter the element ";
  int i2=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
  }
  cout<<"array before operation"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr1[i]<<"->";
  }
  cout<<endl;
  
  for(int i=0;i<n;i++)
  {
    if(arr1[i]<0)
    {
      arr2[i2]=arr1[i];
      i2++;
      
      
    }
  }
  for(int i=0;i<n;i++)
  {
    if(arr1[i]>0)
    {
      arr2[i2]=arr1[i];
      i2++;
      
    }
  }

  delete [] arr1;
  arr1=arr2;
  arr2=NULL;
  cout<<"array after operation"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr1[i]<<"->";
  }

  return 0;
}
