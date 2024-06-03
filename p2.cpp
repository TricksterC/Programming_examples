#include <iostream>

using namespace std;

int main()
{
  
  int i, num, sum, count;
  
  for(i=1;i<201;i++)
  {
    if(i%2==0)
    {
      count++;
      sum=sum+i;
    }
  }
  
  cout<<"Number of even numbers between 1 and 200: "<<count<<endl;
  cout<<"The sum of even numbers between 1 and 200: "<<sum<<endl;
  return 0;
}