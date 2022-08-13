#include<bits/stdc++.h>
using namespace std;


string Validation(string Number,int size){
    int sum=0;
    for(int i=size-1;i>=0;i=i-2){
        char a=Number[i];
        int b=a-48;
        b*=2;
        if(b>9){
            b-=9;
            sum+=b;
        }
        else    
            sum+=b;
    } 
    cout<<sum<<endl;
    int sum1=sum*9;
    int rem=sum1%10;
    cout<<rem<<endl;
    if((rem+sum)%10==0)
        return "Valid";
    else    
        return "Not Valid";   
}


string Card_Name(string Name){

    if(Name[0]=='4')
        return "Visa";
    if(Name[0]=='5')
        return "Master Card";
    if(Name[0]=='3' && Name[1]=='7')
        return "American Express";
    if(Name[0]=='6')
        {
        if((Name[0]=='6' && Name[1]=='0') || (Name[0]=='6' && Name[1]=='5' && Name[2]=='2'&& Name[3]=='1'))
        return "Rupay";
        else  
            return "Discover";
        }
    else    
        return "Other";    

}

int main(){
    string Card_No;
    cin>>Card_No;
    int length=Card_No.length();
    cout<<Validation(Card_No,length)<<" ";
    cout<<Card_Name(Card_No);
}
