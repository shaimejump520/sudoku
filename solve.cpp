#include<iostream>
#include<iostream>
#include<fstream>
#include<ctime>
#include<vector>
#include<cstdlib>
#include"Sudoku.h"
using  namespace std;
int main()
{
Sudoku su;
su.ReadIn();
su.Solve();

return 0;
}

