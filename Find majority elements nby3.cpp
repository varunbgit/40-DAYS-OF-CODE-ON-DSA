//elements greater than n/3
#include<iostream>
#include<vector>
using namespace std;

vector <int> MajorityElements(vector <int> v1)
{
  int element1=v1[0];
  int count1=1;
  int element2=0;
  int count2=0;
  
  for(int i=0;i<v1.size();i++)
  {
    
    if(element1==v1[i])
    count1++;
    
    else if(element2==v1[i])
    count2++;
    
    else if(count1==0)
    element1=v1[i];
    
    else if(count2==0)
    element2=v1[i];
    
    else
    {  count1--;
       count2--;
    }
  }
  // cout<<element1<<endl;
  // cout<<element2<<endl;
  vector<int> ans;
  count1=0;count2=0;
  for(int i=0;i<v1.size();i++)
    {
      if(v1[i]==element1)
        count1++;

      if(v1[i]==element2)
      count2++;
    }
    if(count1>v1.size()/3)
    {
      ans.push_back(element1);
      }
      if(count2>v1.size()/3)
      {ans.push_back(element2);}
  
  return ans;
}
int main()
{
  vector <int> v;
  int size;
  cout<<"Enter size";
  cin>>size;
  int x;
  cout<<"ENter elements";
  for(int i=0;i<size;i++)
  {
    cin>>x;
    v.push_back(x);
  }
  vector<int>ans=MajorityElements( v);
  
  if(ans.size()==0)
  cout<<"No Majority Elements";
  else
  {
    for(int i=0;i<ans.size();i++)
    {
      cout<<ans[i]<<" ";
    }
    return 0;
  }
  
 
}
