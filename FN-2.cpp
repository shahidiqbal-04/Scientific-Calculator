#include<iostream>
#include<cmath>
using namespace std;
void sum();
void sub();
void div();
void mul();
void fact();
void undr();
void negPow();
void mod();
void sin();
void cos();
void tan();
void cosec();
void sec();
void cot();
void ln();
int main()
{
char o;
cout<<"Mini-Calculator\n";
cout<<"It consists of  arithematic,trignometric,factorial and some common functions of mathematics.";
cout<<"\nU can perform any of the above mentioned functions.";
cout<<"\nOperator:";
cout<<"\n!=factorial\nM or m=modulus\nN or n=negative power\nU or u=underroot\nS=sin(),C=cos(),T=tan()\ns=cosec(),c=sec(),t=cot()\n+=add,-=subtract,*=multiply,/=divide\nl or L=ln()";
do
{
char c;
cout<<"\nenter the operator:-\n";
cin>>c;
if(c=='+')
{
sum();
}
else
if(c=='-')
{
sub();
}
else
if(c=='/')
{
div();
}
else
if(c=='*')
{
mul();
}
else
if(c=='!')
{
fact();
}
else
if(c=='U'||c=='u')
{
undr();
}
else
if(c=='n'||c=='N')
{
negPow();
}
else
if(c=='m'||c=='M')
{
mod();
}
else
if(c=='S')
{
sin();
}
else
if(c=='s')
{
cosec();
}
else
if(c=='C')
{
cos();
}
else
if(c=='c')
{
sec();
}
else
if(c=='T')
{
tan();
}
else
if(c=='t')
{
cot();
}
else
if(c=='l'||c=='L')
{
ln();
}
else
{
cout<<"\ninvalid operator. Plz enter a valid operator.";
}
cout<<"\n Do you want to do further calculations?\n";
cout<<"If yes, enter Y otherwise press any key to exit\n";
cin>>o;
}
while(o=='y'||o=='Y');
}
void sum()
{
int sum,i,j;
cout<<"enter first number\n";
cin>>i;
cout<<"enter second number\n";
cin>>j;
sum=i+j;
cout<<"sum="<<sum;
}
void sub()
{
int sub,i,j;
cout<<"enter first number\n";
cin>>i;
cout<<"enter second number\n";
cin>>j;
sub=i-j;
cout<<"sub="<<sub;
}
void div()
{
float div,i,j;
cout<<"enter first number\n";
cin>>i;
cout<<"enter second number\n";
cin>>j;
div=i/j;
cout<<"div="<<div;
}
void mul()
{
float mul,i,j;
cout<<"enter first number\n";
cin>>i;
cout<<"enter second number\n";
cin>>j;
mul=i*j;
cout<<"mul="<<mul;
}
void fact()
{
int n=1,i;
long int fact=1;
cout<<"enter the number=";
cin>>i;
while(n<=i)
{
fact=fact*n;
n=n+1;
}
cout<<"factorial"<<" of"<<i<<" ="<<fact;
}
void undr()
{
float i,j;
float U;  
cout<<"enter the number\n";
cin>>i;
cout<<"enter the power of the root\n";
cin>>j;
U=pow(i,0.5);
cout<<j<<"root="<<U;
}
void negPow()
{
float i;
float U;  
cout<<"enter the number\n";
cin>>i;
U=pow(i,-1);
cout<<U;
}
void mod()
{
int mod,i;
cout<<"\nEnter a number=";
cin>>i;
if(i<0)
{
mod=-1*(i);
cout<<"|"<<"-"<<i<<"|"<<"="<<mod;
}
else
{
mod=+1*(i);
cout<<"|"<<i<<"|"<<"="<<mod;
}
}
void sin()
{
float a;
cout<<"enter any number\n";
cin>>a;
cout<<"In radian="<<sin(a);
cout<<"\nIn degrees="<<sin(a*(3.14159/180));
}
void cos()
{
float a;
cout<<"enter any number\n";
cin>>a;
cout<<"In radian="<<cos(a);
cout<<"\nIn degrees="<<cos(a*(3.14159/180));
}
void tan()
{
float a;
cout<<"enter any number\n";
cin>>a;
cout<<"In radian="<<tan(a);
cout<<"\nIn degrees="<<tan(a*(3.14159/180));
}
void cosec()
{
float a;
cout<<"enter any number\n";
cin>>a;
cout<<"In radian="<<1/sin(a);
cout<<"\nIn degrees="<<1/sin(a*(3.14159/180));
}
void sec()
{
float a;
cout<<"enter any number\n";
cin>>a;
cout<<"In radian="<<1/cos(a);
cout<<"\nIn degrees="<<1/cos(a*(3.14159/180));
}
void cot()
{
float a;
cout<<"enter any number\n";
cin>>a;
cout<<"In radian="<<1/tan(a);
cout<<"\nIn degrees="<<1/tan(a*(3.14159/180));
}
void ln()
{
float a;
cout<<"enter any number\n";
cin>>a;
cout<<" \nnatural logarithm="<<log(a);
cout<<"\ncommon logarithm="<<log10(a);
}
