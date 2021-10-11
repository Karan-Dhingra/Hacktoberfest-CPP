#include<iostream>
#include<string.h>
using namespace std;
void removeDuplicate(char a[]){
	int l =strlen(a);
	if(l==1 || l==0){
		return;
	}
	int prev = 0;
	for(int cur=1 ; cur<l ; cur++){
		if(a[prev] != a[cur]){
			prev++;
			a[prev]=a[cur];
		}
	}
	a[prev+1]='\0';
	return;
}
int main(){

char a[100];
cin.getline(a,100);
removeDuplicate(a);

cout<<a;



return 0;
}

