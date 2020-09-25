#include<bits/stdc++.h>
using namespace std;

class newstack
{
    private:
    queue<int>q;
    public:
    void spush(int x)
    {
      int s=q.size();
      q.push(x);

      cout<<x <<" is pushed "<<endl;

       while(s--)
       {
           q.push(q.front());
           q.pop();
       }
    }
    void spop()
    {
        if(q.size()==0)
        {
            cout<<"nothing in queue "<<endl;
            return;
        }
        int x=q.front();
        q.pop();
        cout<<x<<" is poped out "<<endl;
    }
};

int main()
{
    newstack s;
    s.spush(1);
    s.spush(2);
    s.spush(3);
    s.spush(4);
    s.spush(5);

    s.spop();
    s.spop();
    s.spop();
    s.spop();
}

