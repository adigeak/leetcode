#include <bits/stdc++.h>
using namespace std;
class MinStack{
public:
#define INF 1000000009
int min;
int size;
vector<pair<int,int> > stack;
	MinStack(){
		min = INF;
		size = -1;
	}
	void add(int x)
	{
		if(x<min)
			min = x;
		stack.push_back(make_pair(x, min));
		size++; 
	}
	void del()
	{
		if(size == -1)
		std::cout<<"can't delete"<<std::endl;
		else
		{
			if(size>0 && stack[size-1].second > stack[size].second)
				min = stack[size-1].second;
			else if(size == 0)
				min = -1;
			stack.pop_back();
			size--;
		}
	}
	int minn()
	{
		return stack[size].second;
	}
	void print()
	{
		for(auto i = stack.begin(); i<stack.end(); ++i)
		cout<<i->first<<"->";
		cout<<endl;
	}
};
int main()
{
	int t;std::cin>>t;
	MinStack* obj = new MinStack();
	while(t--)
	{
		int x;std::cin>>x;
		obj->add(x);
	}
	obj->print();
	obj->del();
	obj->print();
	int x = obj->minn();
	cout<<x<<endl;
	obj->del();
	obj->del();
	obj->print();
	getchar();
}
