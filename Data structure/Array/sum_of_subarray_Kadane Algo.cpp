#include<iostream>
using namespace std;
int main(){

int a[100];
int n;
int cs = 0;
int ms = 0;

cin>>n;

for(int i=0; i<n ; i++){
	cin>>a[i];
}

for(int i=0 ; i<n ; i++){
	cs+=a[i];	
	if(cs<0){
		cs=0;
	}
	ms = max(cs,ms);
}

cout<<"Maximum Sum is = "<<ms;



return 0;
}

