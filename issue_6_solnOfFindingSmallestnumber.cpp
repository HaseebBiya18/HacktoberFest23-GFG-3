nclude <iostream>
using namespace std;
#include <climits>
int smallestElement(int arr[],int size)
{
  int small=INT_MAX;

  for(int ri=0;ri<size;ri++)
  {
    if(small>arr[ri])
    {
      small=arr[ri];
    }
  }
  return small;
}
int main() 
{
  int size=5;
  int arr[size]={23,4,-1,90,-9};
  int small=smallestElement(arr,size);

  cout<<"\nThe smallest element of an array : "<<small;
}
