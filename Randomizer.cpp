#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int n,generator;
	cout<<"Please, enter the number of teams"<<endl;
	cin>>n;
	bool *test=new bool[n+1];
	for(int i=0;i<n+1;i++)
		test[i]=false;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<"Team number: "<<i<<" ";
	srand((int)time(NULL)); 
	do{
	generator = 1 + rand() % n;
	}while(test[generator]);
	test[generator]=true;
	cout<<"Appearance order is: "<<generator<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	}
	delete []test;
	return 0;
}
