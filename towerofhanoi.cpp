#include<iostream>
using namespace std;

void towerofhanoi(int n,char source ,char destination,char helper)
{
	//base case
	if(n==0)
	return;
	
	towerofhanoi(n-1,source,helper,destination);
	cout<<"move"<<n<<"disk from "<<source<<"to "<<destination<<endl;
	towerofhanoi(n-1,helper,destination,source);
	
	
	
	
}
int main()
{
	
	int n;
	cin>>n;
	
	cout<<endl;
	towerofhanoi(n,'A','C','B');
	
}
