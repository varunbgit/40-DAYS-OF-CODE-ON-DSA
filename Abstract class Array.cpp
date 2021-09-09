#include<iostream>
using namespace std;

class Array
{
  private:
  int *array;
  int size;
  int filled ;

  public:
  Array()
  {
    size=13;
    filled =5;
    array=new int[13];
    for(int i=0;i<5;i++)
    {
      array[i]=i+1;
    }
    
  }
  Array(int size)
  {
    this->size=size;
    array= new int[size];
    filled=0;
  }
  void print_element()
  {
    for(int i=0;i<filled;i++)
    {
      cout<<array[i]<<"->";
    }
    cout<<endl;
  }

  void linearsearch_transposition(int key)
  {
    for(int i=0;i<filled;i++)
    {
      if(array[i]==key)
      {
        cout<<"element found at index "<<i<<endl;
        if(i!=0)
        {
          int temp;
          temp=array[i-1];
          array[i-1]=array[i];
          array[i]=temp;
        }

      }
      if(i==filled)
      {
        cout<<"element not found";
         break;
      }

    }
  }
 
  void Diff()
  {
    int sum_even=0,sum_odd=0,diff;
  
  for(int i=0;i<filled;i=i+2)
  {
    sum_odd=array[i];
  }
  for(int i=1;i<filled;i=i+2)
  {
    sum_even=array[i];
  }
  cout<<"sum of even are "<<sum_even<<endl;
  cout<<"sum of odd are "<<sum_odd<<endl;
  diff=sum_even-sum_odd;
  diff=(diff<0)?(-diff):diff;
  cout<<"the differnce is "<<diff<<endl;
  }

void append()
{
    if(filled<=size)
    {int n;
    cout<<"enter no of elements";
    cin>>n;
    for(int i=0;i<n;i++)
      cin>>array[filled+i];
      filled++;
    }

}

};


int main()
{
  Array *array1;
  //main line
  
  array1=new Array;
  
  array1->print_element();

  Array array2;
  
  array2.print_element();
  array2.Diff();
  //array2.append();
 // array2.linearsearch_transposition(4);


  return 0;

}
