
//4.C++ program to find Maximum Average Subarray

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N,K;
  cin>>N>>K;
  int arr[N];
  for(int i=0;i<N;i++)
  {
      cin>>arr[i];
  }
  if(K>N)
  {
    cout <<"No such subarray with that size possible\n";
    return -1;  
  }  
  int max_sum=INT_MIN; //to store the maximum sum of such subarray with size K
  int sum_here=0,pos_max; //maximum sum and starting position of such subarray respectively
  for(int i=0; i<=N-K;i++)
  {
      sum_here=0;
    for(int j =0; j<K; j++)
      sum_here += arr[i+j];
      
    if(sum_here > max_sum)
    {
      max_sum = sum_here;
      pos_max = i;
    }
  }
  cout<<"Maximum average subarray starts from index "<<pos_max;
}
