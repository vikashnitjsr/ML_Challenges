#include<bits/stdc++.h>
using namespace std;
int main()
{
pair<string,double> PAIR("vikash kumar chaurasia",123.89);
cout<<PAIR.first<<" ";
cout<<PAIR.second<<endl;
pair<string,int>pair1;
pair1=make_pair("vikas",90);
cout<<pair1.first<<endl;

pair<int,int>pair12=make_pair(12,90);
cout<<pair12.first<<" ";
cout<<pair12.second<<endl;

pair<int,double>pair4=make_pair(234,890.78);
pair<int,double>pair5=make_pair(896,675.45);
cout<<(pair4>pair5)<<endl;

