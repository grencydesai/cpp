#include<iostream>
using namespace std;

int main(){
	char c[10];
	int g;
	
	cout<<"enter string : ";
	cin>>c;
	
	for (g=0;c[g]!='\0';g++)
	{
		if(c[g]>='a'&&c[g]<='z')
		{
			c[g] -= 32;
		}
		else if(c[g]>='A'&&c[g]<='Z')
		{
			c[g] += 32;
		}
	}
	
	cout<<"toggle case:"<<c;
}
