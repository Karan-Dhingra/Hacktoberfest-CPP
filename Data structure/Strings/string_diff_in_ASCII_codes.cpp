#include<iostream>
using namespace std;
int main(){
	
	char str[100];
	int nstr[200];
	
	cin>>str;
	
	int i=1 ;
	cout<<str[0];
	while(str[i]!='\0'){
		nstr[i] = int(str[i])- int(str[i-1]);
		cout<<nstr[i]<<str[i];
		i++;
	}




return 0;
}

