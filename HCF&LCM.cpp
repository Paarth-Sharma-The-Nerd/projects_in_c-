#include <iostream>
using namespace std;

int a,b,HCF,large,least,LCM;
void lcm();
int main()
{
  cout<<"1st number---> ";
  cin>>a;
  cout<<"2nd number---> ";
  cin>>b;
  if (a>b) 
  {
    large=a;
  }
  else 
    large=b;
  for(int i=1;i<large;i++)
  {
    if(a%i==0 && b%i==0)
    {
      HCF=i;
    }
  }
  cout<<"Your HCF is "<<HCF<<endl;
  //LCM
  LCM=(a*b)/HCF;
  cout<<"Your LCM is "<<LCM;

  return 0;
}