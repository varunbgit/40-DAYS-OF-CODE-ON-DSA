#include<iostream>
#include<vector>
using namespace std;

vector<int> Findmajority(vector <int> v)
{
  int count=0;
  int element=0;
  
  for(int i=0;i<v.size();i++)
  {
    if(count==0)
    {
      element=v[i];
      count=1;
    }
    else if(count==v[i])
    count++;

    else
    count--;

    //cout<<"value of count after "<<i<<" th iterration is "<<count<<endl;;
  }
  //cout<<"count before 0"<<count<<endl;

  vector<int> ans;
   if(count>0)
   {  count =0;
     for(int i=0;i<v.size();i++)
     {
       if(v[i]==element)
       count++;
     }
   // cout<<"count after"<<count<<endl;;
     if(count>v.size()/2)
     {ans.push_back(element);}

   }
   return ans;

}


int main()
{
  vector <int> v;
  cout<<"Enter size";
  int size;
  cin>>size;
  int x;
  for(int i=0;i<size;i++)
  {
    cin>>x;
    v.push_back(x);
  }

  vector<int> ans= Findmajority(v);
  if(ans.size()==0)
  cout<<"NO majority elements";
  else
  {
    for(int i=0;i<ans.size();i++)
    {
      cout<<ans[i]<<" ";
    }
  }
  return 0;
}
