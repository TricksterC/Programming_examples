#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int p,r,t,n,si,ci;
int k;
cout<<"Simple Interest(1) or Compound Interest(2)?";
cin>>k;

cout<<"Enter the values of Principal, Rate, Time, and Number of years (for compound interest)"<<endl<<"rounded off to neares integer:"<<endl;
cin>>p>>r>>t>>n;



if (k==1)
{
  si=(p*r*t)/100;
  cout<<"Simple Interest is: Rs "<<si;
}

else if (k==2)
{
  ci=p*(1+(r/n)^(n*t));
   cout<<"Compound Interest is: Rs "<<ci;
}

else
{
  cout<<"Invalid choice :(";
  return 0;
}
}