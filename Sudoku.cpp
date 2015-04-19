#include<iostream>
#include<iostream>
#include<fstream>
#include<ctime>
#include<vector>
#include<cstdlib>
#include"Sudoku.h"
using  namespace std;


void Sudoku::GiveQuestion(){
srand(time(NULL));
int a,b,c,d,e,f,g,h,i;
int m[9];
for(int k=0;k<9;k++){
        m[k]=rand()%9+1;
        if(m[k]==m[k-1]||m[k]==m[k-2]||m[k]==m[k-3]||m[k]==m[k-4]||m[k]==m[k-5]||m[k]==m[k-6]||m[k]==m[k-7]||m[k]==m[k-8]||m[k]==m[k-9])
                k--;
        }
a=m[0];
b=m[1];
c=m[2];
d=m[3];
e=m[4];
f=m[5];
g=m[6];
h=m[7];
i=m[8];

int m1[12][12]={d,b,f,h,g,c,i,e,a,-1,-1,-1,
                0,0,c,i,e,0,f,0,d,-1,-1,-1,
                i,0,a,f,b,d,h,0,0,-1,-1,-1,
                -1,-1,-1,a,c,b,0,h,g,i,e,f,
                -1,-1,-1,0,h,0,a,i,0,d,b,0,
                -1,-1,-1,d,i,f,b,c,0,h,g,a,
                a,0,0,0,d,0,-1,-1,-1,f,i,e,
                0,0,d,0,f,0,-1,-1,-1,a,c,g,
                f,i,e,0,a,g,-1,-1,-1,b,h,d,
                c,a,b,-1,-1,-1,g,d,0,e,0,i,
                g,d,h,-1,-1,-1,0,f,i,c,0,b,
                0,f,0,-1,-1,-1,c,a,0,g,0,h};
int m2[12][12]={d,b,f,h,g,c,i,e,a,-1,-1,-1,
                0,0,c,i,e,0,f,0,d,-1,-1,-1,
                i,0,a,f,b,d,h,0,0,-1,-1,-1,
                -1,-1,-1,a,c,b,0,h,g,i,e,f,
                -1,-1,-1,0,h,0,a,i,0,d,b,0,
                -1,-1,-1,d,i,f,b,c,0,h,g,a,
                a,c,g,0,d,0,-1,-1,-1,f,i,e,
                0,0,0,0,f,0,-1,-1,-1,a,c,g,
                f,i,e,0,a,g,-1,-1,-1,b,h,d,
                c,a,b,-1,-1,-1,g,d,0,e,0,i,
                g,0,0,-1,-1,-1,0,f,i,c,0,b,
                0,f,0,-1,-1,-1,c,a,0,g,0,h};
int m3[12][12]={d,b,f,h,g,c,i,e,a,-1,-1,-1,
                0,0,c,i,e,0,f,0,d,-1,-1,-1,
                i,0,a,f,b,d,h,0,0,-1,-1,-1,
                -1,-1,-1,b,c,a,0,h,g,i,e,f,
                -1,-1,-1,0,h,0,a,i,0,d,b,0,
                -1,-1,-1,d,i,f,b,c,0,h,g,a,
                a,0,0,0,d,0,-1,-1,-1,f,i,e,
                0,0,d,0,f,0,-1,-1,-1,a,c,g,
                f,i,e,0,a,g,-1,-1,-1,b,h,d,
                c,a,b,-1,-1,-1,g,d,0,e,0,i,
                g,d,h,-1,-1,-1,0,f,i,c,0,b,
                0,f,0,-1,-1,-1,c,a,0,g,0,h};

int C=rand()%3;

switch(rand()%3){

        case 0:
                if(C==0){
                for(int j=0;j<12;j++){
                      for(int i=0;i<12;i++){
                         cout<<m1[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                }
                if(C==1){
                for(int j=0;j<12;j++){
                      for(int i=0;i<12;i++){
                         cout<<m2[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                }
                if(C==2){
                for(int j=0;j<12;j++){
                      for(int i=0;i<12;i++){
                         cout<<m3[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                }
                break;
        case 1:

                if(C==0){
                for(int j=3;j<12;j++){
                      for(int i=0;i<12;i++){
                         cout<<m1[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                for(int j=0;j<3;j++){
                      for(int i=0;i<12;i++){
                         cout<<m1[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                }
                if(C==1){
                for(int j=3;j<12;j++){
                      for(int i=0;i<12;i++){
                         cout<<m2[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                for(int j=0;j<3;j++){
                      for(int i=0;i<12;i++){
                         cout<<m2[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                }
                if(C==2){
                for(int j=3;j<12;j++){
                      for(int i=0;i<12;i++){
                         cout<<m3[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                for(int j=0;j<3;j++){
                      for(int i=0;i<12;i++){
                         cout<<m3[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                }
                break;
case 2:
                if(C==0){
                for(int j=6;j<12;j++){
                      for(int i=0;i<12;i++){
                         cout<<m1[j][i]<<" ";
                         }
                        cout<<endl;
                        }

                for(int j=0;j<6;j++){
                      for(int i=0;i<12;i++){
                         cout<<m1[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                }
                if(C==1){
                for(int j=6;j<12;j++){
                      for(int i=0;i<12;i++){
                         cout<<m2[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                for(int j=0;j<6;j++){
                      for(int i=0;i<12;i++){
                         cout<<m2[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                }
                if(C==2){
                for(int j=6;j<12;j++){
                      for(int i=0;i<12;i++){
                         cout<<m3[j][i]<<" ";
                         }
                        cout<<endl;
                        }
                for(int j=0;j<6;j++){
                      for(int i=0;i<12;i++){
                         cout<<m3[j][i]<<" ";
                         }
			cout<<endl;
                        }
                }
                break;
        }
}
int Sudoku::comp(int x,int y,int z)
{
int w=(x/3)*3+3;
int s=(y/3)*3+3;
for(int i=0;i<12;i++)
        {
        if(q[x][i]==z)
                return 1;
        if(q[i][y]==z)
                return 1;
        }
for(int i=(x/3)*3;i<w;i++){
        for(int j=(y/3)*3;j<s;j++){
                if(q[i][j]==z)
                        return 1;
                }
        }
return 0;
}
void Sudoku::ReadIn()
{
for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
                cin>>q[i][j];

                }
        }
}

void Sudoku::SolvePre()
{
int w=0;
for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
                if(q[i][j]==0)
                        w++;
}
}
if(w==0)
{
t++;
for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
                A[i][j]=q[i][j];
                }
        }
if(t>=2)
        return;
}
for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
                if(q[i][j]==0){
                        for(int k=1;k<10;k++)
                                {
                                if(comp(i,j,k)==0)
                                        {q[i][j]=k;
                                        SolvePre();
                                        q[i][j]=0;
                                        if(t>=2){
                                                return;}
                                        }
                                }
                        return;
                        }
                     }
                }
}
void Sudoku::Solve()
{
t=0;
SolvePre();

if(t==0)
        cout<<"0"<<endl;
if(t==1)
        {
        cout<<"1"<<endl;
        for(int j=0;j<12;j++){
                for(int i=0;i<12;i++){
                         cout<<A[j][i]<<" ";
                         }
                        cout<<endl;
                        }

        }
if(t==2)
        cout<<"2"<<endl;
}

