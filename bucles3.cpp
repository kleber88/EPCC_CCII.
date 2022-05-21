#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int final=0;
for(int i=2;i<=n;i++){
int cont=0;
for(int j=2;j<=1/2;j++){
if(i&j==0){
cont=cont + 1;

}
}
if(cont<1){
final++;
}

}
cout<<final;

return 0;
}
