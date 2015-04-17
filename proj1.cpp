#include<iostream>
#include<iostream>
#include<fstream>
#include<ctime>
#include<vector>
#include<cstdlib>
using  namespace std;

class Sudoku{
public:
	Sudoku(){};
	void GiveQuestion();
	void ReadIn();
	void Solve();

private:


};
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
//int mk[]={d,b,f,h,g,c,i,e,a,-1,-1,-1};
/*int m2[]={0,0,c,i,e,0,f,0,d,-1,-1,-1};
int m3[]={i,0,a,f,b,d,h,0,0,-1,-1,-1};
int m4[]={-1,-1,-1,a,c,b,0,h,g,i,e,f};
int m5[]={-1,-1,-1,0,h,0,a,i,0,d,b,0};
int m6[]={-1,-1,-1,d,i,f,b,c,0,h,g,a};
int m7[]={a,0,0,0,d,0,-1,-1,-1,f,i,e};
int m8[]={0,0,d,0,f,0,-1,-1,-1,a,c,g};
int m9[]={f,i,e,0,a,g,-1,-1,-1,b,h,d};
int m10[]={c,a,b,-1,-1,-1,g,d,0,e,0,i};
int m11[]={g,d,h,-1,-1,-1,0,f,i,c,0,b};
int m12[]={0,f,0,-1,-1,-1,c,a,0,g,0,h};*/

int s=rand()%3;
if(s==0){
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
	}
if(s==0){
int m1[12][12]={d,b,f,h,g,c,i,e,a,-1,-1,-1,
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
	}
if(s==2){
int m1(12)(12)={d,b,f,h,g,c,i,e,a,-1,-1,-1,
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
	}
switch(rand()%3)
	case 0:
		for(int j=0;j<12;j++){
  		      for(int i=0;i<12;i++){
               		 cout<<m1[j][i]<<" ";
			 }
	        	cout<<endl;
        		}
		break;
	case 1:
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
		break;}
	case 2:
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
		break;
		


	}
}
void Sudoku::ReadIn()
{


}
void Sudoku::Solve()
{


}
int main()
{
Sudoku su;
su.GiveQuestion();
return 0;

}
