#include<iostream>
using namespace std;

int magicalPark(char a[][100], int n, int m, int k , int s){
	
	bool success = true;
	
	for(int i=0; i<n ;i++){
		for(int j=0 ; j<m;j++){
			if(s<=k){
		success = false;
		break;
	}
			if(a[i][j]=='.'){
				s=s-2;
			}else if(a[i][j]=='*'){
				s=s+5;
			}else{
				break;
			}
			if(j!=n-1){
				s=s-1;
			}
			
		}
	}
	if(success){
		cout<<"YES"<<endl<<s;
	}
	else 
	{	cout<<"NO";
	}
}
int main(){
	
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	
	char a[100][100];
	for(int i=0 ; i<  n;i++){
		for(int j=0 ; j<m ; j++){
			cin>>a[i][j];
		}
	}
	
	magicalPark(a,n,m,k,s);
	
	


return 0;
}

