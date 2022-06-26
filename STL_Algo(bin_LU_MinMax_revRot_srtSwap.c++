#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){

   vector <int> v;

   v.push_back (1);
   v.push_back (3);
   v.push_back (5);
   v.push_back (7);

   cout<<"Finding 5--> "<<binary_search(v.begin(),v.end(),5)<<endl;

   cout<<"Finding lower bound--> "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
   cout<<"Finding upper bound--> "<<upper_bound(v.begin(),v.end(),7)-v.begin()<<endl;

   int a = 3;
   int b = 5;

   cout<<"max--> "<<max(a,b)<<endl;
   cout<<"min--> "<<min(a,b)<<endl;

   swap (a,b);
   cout<<"Swap a--> "<<a<<endl;
   cout<<"Swap b--> "<<b<<endl;

   string abcd = "abcd";

   reverse(abcd.begin(),abcd.end());
   cout<<"Reverse abcd--> "<<abcd;
   cout<<endl;
   
   rotate(v.begin(),v.begin() + 1,v.end());
   cout<<"After rotate--> "<<endl;
   for (int i : v)
   cout<<i<<" ";

}