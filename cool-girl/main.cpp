#include<iostream>
using namespace std;
class Tiaoma
{
public:
int N;
int x;
int y;
int A;
int Count;
int Map[6][6];
Tiaoma(int n,int x,int y):N(n),x(x),y(y){A=1;Count=1;}
void Horse(int x,int y);
void Print();
void Roud();
};

void Tiaoma::Horse(int x,int y)
{

if(1<=x-2&&y+1<=N&&Map[x-2][y+1]==0)

{
 Map[x-2][y+1]=++A;
Count++;
Horse(x-2,y+1);
}
if(1<=x-1&&y+2<=N&&Map[x-1][y+2]==0)
{
Map[x-1][y+2]=++A;
Count++;
Horse(x-1,y+2);
}
if(x+1<=N&&y+2<=N&&Map[x+1][y+2]==0)
{
Map[x+1][y+2]=++A;
 Count++;
 Horse(x+1,y+2);
 }
 if(x+2<=N&&y+1<=N&&Map[x+2][y+1]==0)
 {
 Map[x+2][y+1]=++A;
 Count++;
 Horse(x+2,y+1);
 }
 if(x+2<=N&&1<=y-1&&Map[x+2][y-1]==0)
 {
 Map[x+2][y-1]=++A;
 Count++;
 Horse(x+2,y-1);
 }
 if(x+1<=N&&1<=y-2&&Map[x+1][y-2]==0)
 {
 Map[x+1][y-2]=++A;
 Count++;
 Horse(x+1,y-2);
 }
 if(1<=x-1&&1<=y-2&&Map[x-1][y-2]==0)
 {
 Map[x-1][y-2]=++A;
 Count++;
 Horse(x-1,y-2);
 }
 if(1<=x-2&&1<=y-1&&Map[x-2][y-1]==0)
 {
 Map[x-2][y-1]=++A;
 Count++;
 Horse(x-2,y-1);
 }
}

void Tiaoma::Print()
{
 cout << '/t';
 for(int i1=1;i1<=N;i1++)
 cout<<i1<<"列"<<'/t';
 for(int i=1;i<=N;i++)
 {
 cout<<endl;
 cout<<i<<"行"<<'/t';
 for(int j=1;j<=N;j++)
 {
 cout<<Map[i][j]<<'/t';
 }
 cout<<endl;
 }
}

void Tiaoma::Roud()
{
 cout<<"跳马路线："<<endl;
 int s=1;
 for(;s<=Count;)
 for(int l=1;l<=N;l++)
 for(int k=1;k<=N;k++)
 {
 if(Map[l][k]==s&&s<Count)
 {
 cout<<"Map["<<l<<"]["<<k<<"]"<<"->";
 if(s%7==0)
 cout<<endl;
 s++;
 }
 else if(Map[l][k]==s&&s==Count)
 {
 cout<<"Map["<<l<<"]["<<k<<"]"<<endl;
 s++;
 }
 }

}
int main()
{
 Tiaoma horse(5,1,1);
 for(int i=1;i<=horse.N;i++)
for(int j=1;j<=horse.N;j++)
 horse.Map[i][j]=0;
 horse.Map[horse.x][horse.y]=1;
 horse.Horse(1,1);
 horse.Print();
 horse.Roud();
 return 0;
}

