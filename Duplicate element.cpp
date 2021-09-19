#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter N "<<endl;
  cin>>n;
  int arr[n];
  cout<<"enter values of array "<<endl;;
  
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    int temp[n];
    
    for(int i=0;i<n;i++)
    {
      temp[i]=0;
    }
    
    for(int i=1;i<n;i++)
    {
      temp[arr[i]-1]++;
    }
    for(int i=0;i<n;i++)
    {
      if(temp[i]>1)
      {
        cout<<"Duplicate element found and element is "<<i+1;
        break;
      }
     
    }
    

  return 0;

}
