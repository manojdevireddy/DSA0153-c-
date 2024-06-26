#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter num:";
	cin>>num;
	if(num<=1){
		cout<<num<<"is not prime"<<endl;
		return 0;
	}
	bool isprime=true;
	for(int i=2;i<num;++i)
	{
		if(num%i==0){
			isprime =false;
			break;
		}
	}
	if(isprime){
		cout<<num<<"is prime number:"<<endl;
		
	}else {
		cout<<num<<"is not prime"<<endl;
	}
	return 0;
}
