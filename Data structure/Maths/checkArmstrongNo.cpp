    //Program to check whether a number is Armstrong or not 
    #include <iostream>  
    using namespace std;  
    int main()  
    {  
    int num,rem,sum=0,temp;    
    cout<<"Enter the Number=";    
    cin>>num;    
    temp=num;    
    while(num>0)    
    {    
    rem=num%10;    
    sum=sum+(rem*rem*rem);    
    num=num/10;    
    }    
    if(temp==sum)    
    cout<<"Armstrong Number."<<endl;    
    else    
    cout<<"Not Armstrong Number."<<endl;   
    return 0;  
    }
