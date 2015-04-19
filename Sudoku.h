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
        void SolvePre();
        void Solve();
        int comp(int x,int y,int z);
        int A[12][12];
        //int t=0;
private:
int q[12][12];
int t;
};

