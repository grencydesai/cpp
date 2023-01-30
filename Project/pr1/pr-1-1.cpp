#include<iostream>
using namespace std;

int main(){
	char a[10],g;
	
	cout<<"enter string:";
	cin>>a;
	
	for(g=0;a[g]!='\0';g++)
	{
		if(a[g]>='0'&&a[g]<='9')
		{
			cout<<"char is numeric";
		}
		else
		{
			cout<<"not numeric";
		}
	}
}
