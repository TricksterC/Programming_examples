#include <iostream>
using namespace std;
 
int main()
  {

  int a[10],i;
  
  cout<<"Enter the 10 elements:"<<endl;
  for(i=0;i<10;i++)
  {
    cin>>a[i];
  }
  
  for(i=0;i<10;i++)
    {
      cout<<a[i]<<",";
      if(i%3==0)
  {
  cout<<endl;
  }
    }
  
  
    return 0;
  }
