#include<bits/stdc++.h>
using namespace std;
int main()
{

//empty container
map<int,int> quiz1;

quiz1.insert(pair<int,int>(1,20));
quiz1.insert(pair<int,int>(3,78));
quiz1.insert(pair<int,int>(5,78));
quiz1.insert(pair<int,int>(6,78));
quiz1.insert(pair<int,int>(9,78));
quiz1.insert(pair<int,int>(2,78));
quiz1.insert(pair<int,int>(67,78));

map<int,int>:: iterator itr;

for(itr=quiz1.begin();itr!=quiz1.end();itr++)
{
cout<<itr->first<<" ";
cout<<itr->second<<endl;
}
cout<<"******************************";
cout<<endl;
map<int,int> quiz2(quiz1.begin(),quiz1.end());
map<int,int> :: iterator itr2;
for(itr2=quiz2.begin();itr2!=quiz2.end();itr2++)
{
cout<<itr2->first<<" "<<itr2->second<<endl;
}
cout<<"******************************";
cout<<endl;
quiz2.erase(quiz2.begin(),quiz2.find(3));


for(itr2=quiz2.begin();itr2!=quiz2.end();itr2++)
{
cout<<itr2->first<<" "<<itr2->second<<endl;
}
cout<<"******************************";
cout<<endl;
int num;
num=quiz2.erase(4);

map<int,int> ::iterator itr0;
for(itr0=quiz2.begin();itr0!=quiz2.end();itr0++)
{
cout<<itr0->first<<" "<<itr0->second<<endl;
}









}









