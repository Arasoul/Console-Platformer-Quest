#include <iostream>
#include <conio.h>
using namespace std;


void ersemBullet(char x[][200], int r, int c)
{
	x[r][c] = 232;
}
void harrakBullet(char x[][200], int& r, int& c)
{
	if (x[r][c - 5] == ' ')
	{
		c--;
	}
	else
	{
		x[r][c] = ' ';
	}
	ersemBullet(x, r, c);
	x[r][c] = 232;
}
void multi(int cbullet[100], int ctq)
{
	for (int i = 0; i < ctq; i++)
	{
		cbullet[i]++;
	}
}
void ersmmulti(char x[][200], int rbullet[100], int cbullet[100], int ctq)
{
	for (int i = 0; i < ctq; i++)
	{
		x[rbullet[i]][cbullet[i]] = 233;
	}
}
void disp(char x[][200], int r, int c, int dir, int end,int win)
{
	system("cls");
	if (end == 0)
	{
		if (win == 1)
		{
			for (int i = 0; i < 44; i++)
			{
				for (int k = 0; k < 156; k++)
				{
					cout << x[i][k];
				}
				cout << endl;
			}
		}
		else
		{
		for (int i = 0; i < 5; i++)
		{
			for (int k = 0; k < 156; k++)
			{
				cout << x[i][k];
			}
			cout << endl;
		}
		if (dir == 1)
		{
			if (c > 44)
			{
				for (int i = 5; i < 44; i++)
				{
					for (int k = 44; k < 200; k++)
					{
						cout << x[i][k];
					}
					cout << endl;
				}
			}
			else {
				for (int i = 5; i < 44; i++)
				{
					for (int k = c - 3; k < c + 153; k++)
					{
						cout << x[i][k];
					}
					cout << endl;
				}
			}
		}
		if (dir == -1)
		{
			if (c > 155)
			{
				for (int i = 5; i < 44; i++)
				{
					for (int k = c - 151; k < c + 5; k++)
					{
						cout << x[i][k];
					}
					cout << endl;
				}
			}
			else {
				for (int i = 5; i < 44; i++)
				{
					for (int k = 0; k < 156; k++)
					{
						cout << x[i][k];
					}
					cout << endl;
				}
			}
		}
	}
	}
	else {
		for (int i = 0; i < 44; i++)
		{
			for (int k = 0; k < 156; k++)
			{
				cout << x[i][k];
			}
			cout << endl;
		}
	}
}
void checkwin(char x[][200], int r, int c,int &win)
{
	if (x[r][c] == '#')
	{
		win = 1;
	}
}
void ersmend(char x[][200], int end, int c, int r, int dir,int win)
{
	for (int i = 0; i < 44; i++)
	{
		for (int k = 0; k < 156; k++)
		{
			x[i][k] = ' ';
		}
	}
	for (int c = 0; c < 156; c++)
	{
		x[0][c] = '*';
		x[39][c] = '*';
	}
	x[19][70] = 'G'; x[19][71] = 'A'; x[19][72] = 'M'; x[19][73] = 'E'; x[19][74] = '  '; x[19][75] = 'O'; x[19][76] = 'V'; x[19][77] = 'E'; x[19][78] = 'R';
	x[20][69] = 'P'; x[20][70] = 'l'; x[20][71] = 'a'; x[20][72] = 'y'; x[20][73] = ' '; x[20][74] = 'a'; x[20][75] = 'g'; x[20][76] = 'a'; x[20][77] = 'i'; x[20][78] = 'n'; x[20][79] = '?';
	x[22][70] = 'Y'; x[22][71] = 'E'; x[22][72] = 'S'; x[22][73] = ' '; x[22][74] = '  '; x[22][75] = ' '; x[22][76] = ' '; x[22][77] = 'N'; x[22][78] = 'O';
	x[23][71] = 'P'; x[23][77] = 'N';
	disp(x, r, c, dir, end,win);
	end = 1;
}
void ersmwin(char x[][200], int win, int c, int r, int dir, int end)
{
	for (int i = 0; i < 44; i++)
	{
		for (int k = 0; k < 156; k++)
		{
			x[i][k] = ' ';
		}
	}
	for (int c = 0; c < 156; c++)
	{
		x[0][c] = '*';
		x[39][c] = '*';
	}
	x[15][70] = 'G'; x[15][71] = 'O'; x[15][72] = 'O'; x[15][73] = 'D'; x[15][74] = '  '; x[15][75] = 'G'; x[15][76] = 'A'; x[15][77] = 'M'; x[15][78] = 'E';
	x[20][69] = 'P'; x[20][70] = 'l'; x[20][71] = 'a'; x[20][72] = 'y'; x[20][73] = ' '; x[20][74] = 'a'; x[20][75] = 'g'; x[20][76] = 'a'; x[20][77] = 'i'; x[20][78] = 'n'; x[20][79] = '?';
	x[22][70] = 'Y'; x[22][71] = 'E'; x[22][72] = 'S'; x[22][73] = ' '; x[22][74] = '  '; x[22][75] = ' '; x[22][76] = ' '; x[22][77] = 'N'; x[22][78] = 'O';
	x[23][71] = 'P'; x[23][77] = 'N';
	disp(x, r, c, dir,end, win);
	win = 1;
}
void ersm(char x[][200], int ct2, int& dispcount)
{
	for (int i = 0; i < 44; i++)
	{
		for (int k = 0; k < 200; k++)
		{
			x[i][k] = ' ';
		}
	}
	if (dispcount < 15)
	{
		for (int k = 190; k < 200; k++)
		{
			x[11][k] = '*';
		}
	}
	dispcount++;
	for (int k = 180; k < 190; k++)
	{
		x[16][k] = '*';
	}
	for (int k = 170; k < 180; k++)
	{
		x[30][k] = '*';
		x[10][k] = '*';
	}
	for (int k = 155; k < 199; k++)
	{
		x[30][k] = '*';
	}
	for (int i = 11; i < 30; i++)
	{
		x[i][155] = '*';
	}
	for (int i = 155; i < 165; i++)
	{
		x[20][i] = '*';
	}
	x[28][160] = '#'; x[28][161] = '#'; x[29][160] = '#'; x[29][161] = '#'; x[27][160] = '#'; x[27][161] = '#'; x[26][160] = '#'; x[26][161] = '#'; x[28][158] = '#'; x[28][159] = '#'; x[29][158] = '#'; x[29][159] = '#'; x[27][158] = '#'; x[27][159] = '#'; x[26][158] = '#'; x[26][159] = '#';
	for (int c = 0; c < 200; c++)
	{
		x[0][c] = '*';
		x[4][c] = '*';
		x[43][c] = '*';
	}
	for (int i = 0; i < 4; i++)
	{
		x[i][155] = '*';
	}
	for (int r = 0; r < 60; r++)
	{
		x[r][0] = '*';
		x[r][199] = '*';
	}

	for (int z = 1; z < 135; z++)
	{
		x[18][z] = '*';
		x[32][z] = '*';

	}
	for (int z = 15; z < 155; z++)
	{
		x[11][z] = '*';
		x[25][z] = '*';
	}
	//////////////////////////////////////selm 1
	for (int g = 42; g > 24; g--)
	{
		x[g][151] = 195;
		x[g][152] = 196;
		x[g][153] = 196;
		x[g][154] = 180;
	}
	//
	x[1][11] = 201; x[1][12] = 205; x[1][13] = 205; x[1][14] = 205; x[1][15] = 205; x[1][16] = 205; x[1][17] = 205; x[1][18] = 205; x[1][19] = 205; x[1][20] = 187;
	x[2][1] = 'H'; x[2][2] = 'e'; x[2][3] = 'a'; x[2][4] = 'l'; x[2][5] = 't'; x[2][6] = 'h'; x[2][7] = ' '; x[2][8] = 'B'; x[2][9] = 'a'; x[2][10] = 'r'; x[2][11] = 186; x[2][20] = 186;
	x[3][11] = 200; x[3][12] = 205; x[3][13] = 205; x[3][14] = 205; x[3][15] = 205; x[3][16] = 205; x[3][17] = 205; x[3][18] = 205; x[3][19] = 205; x[3][20] = 188;
	x[2][30] = 'C'; x[2][31] = 'o'; x[2][32] = 'i'; x[2][33] = 'n'; x[2][34] = '='; x[2][35] = '0';

	if (ct2 == 0)
	{
		for (int s = 70; s < 80; s++)
		{
			x[42][s] = '@';

		}
		for (int s = 70; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
	}
	if (ct2 == 1)
	{
		for (int s = 71; s < 81; s++)
		{
			x[42][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][36] = '1';
	}
	if (ct2 == 2)
	{
		for (int s = 72; s < 81; s++)
		{
			x[42][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][36] = '2';
	}
	if (ct2 == 3)
	{
		for (int s = 73; s < 81; s++)
		{
			x[42][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][36] = '3';
	}
	if (ct2 == 4)
	{
		for (int s = 74; s < 81; s++)
		{
			x[42][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][36] = '4';
	}
	if (ct2 == 5)
	{
		for (int s = 75; s < 81; s++)
		{
			x[42][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][36] = '5';
	}
	if (ct2 == 6)
	{
		for (int s = 76; s < 81; s++)
		{
			x[42][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][36] = '6';
	}
	if (ct2 == 7)
	{
		for (int s = 77; s < 81; s++)
		{
			x[42][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][36] = '7';
	}
	if (ct2 == 8)
	{
		for (int s = 78; s < 81; s++)
		{
			x[42][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][36] = '8';
	}
	if (ct2 == 9)
	{
		for (int s = 79; s < 81; s++)
		{
			x[42][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][36] = '9';
	}
	if (ct2 == 10)
	{
		for (int s = 80; s < 81; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '1';
		x[2][36] = '0';
	}
	if (ct2 == 11)
	{
		for (int s = 71; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '1';
		x[2][36] = '1';
	}
	if (ct2 == 12)
	{
		for (int s = 72; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '1';
		x[2][36] = '2';
	}
	if (ct2 == 13)
	{
		for (int s = 73; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '1';
		x[2][36] = '3';
	}
	if (ct2 == 14)
	{
		for (int s = 74; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '1';
		x[2][36] = '4';
	}
	if (ct2 == 15)
	{
		for (int s = 75; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '1';
		x[2][36] = '5';
	}
	if (ct2 == 16)
	{
		for (int s = 76; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '1';
		x[2][36] = '6';
	}
	if (ct2 == 17)
	{
		for (int s = 77; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '1';
		x[2][36] = '7';
	}
	if (ct2 == 18)
	{
		for (int s = 78; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '1';
		x[2][36] = '8';
	}
	if (ct2 == 19)
	{
		for (int s = 79; s < 80; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '1';
		x[2][36] = '9';
	}
	if (ct2 == 20)
	{
		for (int s = 80; s < 81; s++)
		{
			x[24][s] = '@';
		}
		for (int s = 70; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '2';
		x[2][36] = '0';
	}
	if (ct2 == 21)
	{
		for (int s = 71; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '2';
		x[2][36] = '1';
	}
	if (ct2 == 22)
	{
		for (int s = 72; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '2';
		x[2][36] = '2';
	}
	if (ct2 == 23)
	{
		for (int s = 73; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '2';
		x[2][36] = '3';
	}
	if (ct2 == 24)
	{
		for (int s = 74; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '2';
		x[2][36] = '4';
	}
	if (ct2 == 25)
	{
		for (int s = 75; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '2';
		x[2][36] = '5';
	}
	if (ct2 == 26)
	{
		for (int s = 76; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '2';
		x[2][36] = '6';
	}if (ct2 == 27)
	{
		for (int s = 77; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '2';
		x[2][36] = '7';
	}
	if (ct2 == 28)
	{
		for (int s = 78; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '2';
		x[2][36] = '8';
	}
	if (ct2 == 29)
	{
		for (int s = 79; s < 80; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '2';
		x[2][36] = '9';
	}
	if (ct2 == 30)
	{
		for (int s = 80; s < 81; s++)
		{
			x[10][s] = '@';
		}
		x[2][35] = '3';
		x[2][36] = '0';
	}
}
void gun(char x[][200], int rhero, int chero, int& rh, int& ch, int gunD, int dir, int end,int win)
{
	if (gunD == 1)
	{
		rh = rhero - 3;
		ch = chero + 6;
		x[rh][ch] = 'O';
		disp(x, rhero, chero, dir, end,win);
	}
	else
	{
		rh = rhero - 3;
		ch = chero - 6;
		x[rh][ch] = 'O';
		disp(x, rhero, chero, dir, end,win);
	}
}
void harakgun(char x[][200], int& rg, int& cg, int& f, int gunD, int dir, int& checkgun1)
{
	if (gunD == 1 && checkgun1 == 1)
	{
		x[rg][cg] = ' ';
		cg += 5;
		if (cg > 140)
		{
			f = 0;
			checkgun1 = 0;
		}
		x[rg][cg] = 'O';
	}
	if (gunD == -1 && checkgun1 == -1)
	{
		x[rg][cg] = ' ';
		cg -= 5;
		if (cg < 10)
		{
			f = 0;
			checkgun1 = 0;
		}
		x[rg][cg] = 'O';
	}
}
void harakgun2(char x[][200], int& rg, int& cg, int& f2, int gunD2, int dir,int &checkgun2)
{
	if (gunD2 == 1 && checkgun2 == 1)
	{
		x[rg][cg] = ' ';
		cg += 5;
		if (cg > 140)
		{
			f2 = 0;
			checkgun2 = 0;
		}
		x[rg][cg] = 'O';
	}
	if(gunD2 == -1 && checkgun2 == -1)
	{
		x[rg][cg] = ' ';
		cg -= 5;
		if (cg < 10)
		{
			f2 = 0;
			checkgun2 = 0;
		}
		x[rg][cg] = 'O';

	}

}
void harakgun3(char x[][200], int& rg, int& cg, int& f3, int gunD3, int dir,int &checkgun3)
{
	if (gunD3 == 1 && checkgun3 == 1)
	{
		x[rg][cg] = ' ';
		cg += 5;
		if (cg > 140)
		{
			f3 = 0;
			checkgun3 = 0;
		}
		x[rg][cg] = 'O';
	}
	if (gunD3 == -1 && checkgun3 == -1)
	{
		x[rg][cg] = ' ';
		cg -= 5;
		if (cg < 10)
		{
			f3 = 0;
			checkgun3 = 0;
		}
		x[rg][cg] = 'O';
	}
}
void harakgun4(char x[][200], int& rg, int& cg, int& f4, int gunD4, int dir,int &checkgun4)
{
	if (gunD4 == 1 && checkgun4 == 1)
	{
		x[rg][cg] = ' ';
		cg += 5;
		if (cg > 140)
		{
			f4 = 0;
			checkgun4 = 0;
		}
		x[rg][cg] = 'O';
	}
	if (gunD4 == -1 && checkgun4 == -1)
	{
		x[rg][cg] = ' ';
		cg -= 5;
		if (cg < 10)
		{
			f4 = 0;
			checkgun4 = 0;
		}
		x[rg][cg] = 'O';
	}
}
void deletehero(char x[][200], int r, int c, int dir)
{
	if (dir == 1)
	{
		x[r][c - 1] = ' ';
		x[r - 1][c - 1] = ' ';
		x[r - 2][c] = ' ';
		x[r - 4][c] = ' ';
		x[r - 2][c - 1] = ' ';
		x[r - 3][c - 1] = ' ';
		x[r - 3][c - 2] = ' ';
		x[r - 4][c - 2] = ' ';
		x[r - 4][c - 1] = ' ';
		x[r - 4][c] = ' ';
		x[r - 4][c + 1] = ' ';
		x[r - 3][c + 1] = ' ';
		x[r - 3][c + 2] = ' ';
		x[r - 3][c + 3] = ' ';
		x[r - 2][c + 1] = ' ';
		x[r - 1][c + 1] = ' ';
		x[r][c + 1] = ' ';
		x[r - 5][c] = ' ';
	}
	if (dir == -1)
	{
		x[r][c - 1] = ' ';
		x[r - 1][c - 1] = ' ';
		x[r - 2][c] = ' ';
		x[r - 4][c] = ' ';
		x[r - 2][c - 1] = ' ';
		x[r - 3][c - 1] = ' ';
		x[r - 3][c - 2] = ' ';
		x[r - 3][c - 3] = ' ';
		x[r - 4][c - 1] = ' ';
		x[r - 4][c] = ' ';
		x[r - 4][c + 1] = ' ';
		x[r - 4][c + 2] = ' ';
		x[r - 3][c + 1] = ' ';
		x[r - 3][c + 2] = ' ';
		x[r - 2][c + 1] = ' ';
		x[r - 1][c + 1] = ' ';
		x[r][c + 1] = ' ';
		x[r - 5][c] = ' ';
	}
}
void ersmhero(char x[][200], int r, int c, int dir)
{
	if (dir == 1)
	{
		x[r][c - 1] = 188;
		x[r - 1][c - 1] = 186;
		x[r - 2][c] = 205;
		x[r - 4][c] = 153;
		x[r - 2][c - 1] = 200;
		x[r - 3][c - 1] = 186;
		x[r - 3][c - 2] = 200;
		x[r - 4][c - 2] = 187;
		x[r - 4][c - 1] = 201;
		x[r - 4][c] = 205;
		x[r - 4][c + 1] = 187;
		x[r - 3][c + 1] = 186;
		x[r - 3][c + 2] = 205;
		x[r - 3][c + 3] = 209;
		x[r - 2][c + 1] = 188;
		x[r - 1][c + 1] = 186;
		x[r][c + 1] = 200;
		x[r - 5][c] = 219;
	}
	if (dir == -1)
	{
		x[r][c - 1] = 188;
		x[r - 1][c - 1] = 186;
		x[r - 2][c] = 205;
		x[r - 4][c] = 153;
		x[r - 2][c - 1] = 200;
		x[r - 3][c - 1] = 186;
		x[r - 3][c - 2] = 205;
		x[r - 3][c - 3] = 209;
		x[r - 4][c - 1] = 201;
		x[r - 4][c] = 205;
		x[r - 4][c + 1] = 187;
		x[r - 4][c + 2] = 201;
		x[r - 3][c + 1] = 186;
		x[r - 3][c + 2] = 188;
		x[r - 2][c + 1] = 188;
		x[r - 1][c + 1] = 186;
		x[r][c + 1] = 200;
		x[r - 5][c] = 219;
	}
}
void HarakHero(int& rhero, int& chero, char m, char x[][200], int& rg, int& cg, int& f, int& ct, int end, int& ct2, int& dir, int& gunD, int& gunD2, int& gunD3, int& gunD4, int& j, int postalka, int& f2, int& f3, int& f4, int& ct4, int& jR, int& jL,int win)
{

	if (m == 'k')
	{
		ct4++;
		if (ct4 == 5)
		{
			ct4 = 0;
		}

		if (ct4 == 1)
		{
			gun(x, rhero, chero, rg, cg, gunD, dir, end,win);
			f = 1;
		}
		if (ct4 == 2)
		{
			gun(x, rhero, chero, rg, cg, gunD, dir, end,win);
			f2 = 1;
		}
		if (ct4 == 3)
		{
			gun(x, rhero, chero, rg, cg, gunD, dir, end,win);
			f3 = 1;
		}
		if (ct4 == 4)
		{
			gun(x, rhero, chero, rg, cg, gunD, dir, end,win);
			f4 = 1;
		}
	}
	if (m == 's')
	{
		if (x[rhero + 1][chero] != '*' || x[rhero + 1][chero + 1] != '*' || x[rhero + 1][chero - 2] != '*' || x[rhero + 1][chero - 1] != '*')
		{
			deletehero(x, rhero, chero, dir);
			rhero++;
		}
	}
	if (m == 'a')
	{
		if (x[rhero][chero - 4] == '*' || x[rhero - 1][chero - 4] == '*' || x[rhero - 2][chero - 4] == '*' || x[rhero - 3][chero - 4] == '*')
		{

		}
		else {
			deletehero(x, rhero, chero, dir);
			gunD = -1;
			gunD2 = -1;
			gunD3 = -1;
			gunD4 = -1;
			chero--;
			dir = -1;
			if (x[rhero][chero - 1] == '@')
			{
				ct2++;
			}
		}
	}
	if (m == 'd')
	{
		if (x[rhero][chero + 4] == '*' || x[rhero - 1][chero + 4] == '*' || x[rhero - 2][chero + 4] == '*' || x[rhero - 3][chero + 4] == '*')
		{

		}
		else {
			deletehero(x, rhero, chero, dir);
			gunD = 1;
			gunD2 = 1;
			gunD3 = 1;
			gunD4 = 1;
			chero++;
			dir = 1;
			if (x[rhero][chero + 1] == '@')
			{
				ct2++;
			}
			if (rhero == 38 && chero == 151)
			{
				for (rhero = 38; rhero != 24; rhero -= 2)
				{
					ersmhero(x, rhero, chero, dir);
					disp(x, rhero, chero, dir, end,win);
				}
				ersmhero(x, rhero, chero, dir);
				disp(x, rhero, chero, dir, end,win);
			}
		}
	}
	if (m == 'w')
	{
		j = 0;
	}
	if (m == 'y')
	{
		chero += 12;
	}
	if (m == 't')
	{
		chero -= 12;
	}
	if (m == 'q')
	{
		jL = 0;
	}
	if (m == 'e')
	{
		jR = 0;
	}
}
void ersmenemy(char x[][200], int& re, int& ce)
{
	re = 7; ce = 25;
	x[re][ce] = 157;
	x[re + 1][ce + 1] = 219;
	x[re + 1][ce] = 219;
	x[re + 1][ce + 1] = 219;
	x[re + 1][ce - 1] = 219;
	x[re + 2][ce - 1] = 219;
	x[re + 2][ce + 1] = 219;
	x[re + 1][ce + 2] = 187;
	x[re + 2][ce + 2] = 185;
	x[re + 1][ce - 2] = 201;
	x[re + 2][ce - 2] = 185;
	x[re + 3][ce - 2] = 234;
	x[re + 3][ce + 2] = 234;
}
void lazer(char x[][200], int renemy, int cenemy, int dir)
{
	if (dir == 1)
	{
		for (int i = cenemy; i < 200; i++)
		{
			x[renemy][i] = '=';
		}
	}
	if (dir == -1)
	{
		for (int i = 0; i < cenemy; i++)
		{
			x[renemy][i] = '=';
		}
	}
}
void lazer2(char x[][200], int& rlazer, int& clazer, int rEnmy, int& ct, int& lazercheck)
{
	ct++;
	if (ct < 15)
	{
		lazercheck = 1;
		for (int r = rlazer; r < 60; r++)
		{
			x[r][clazer] = 186;
		}
	}
	else
	{
		lazercheck = 0;
		if (ct == 34)
		{
			ct = 0;
		}
	}
}
void ersmelevator(char x[][200], int r, int c)
{
	x[r][c] = 213;
	x[r][c + 1] = 205;
	x[r][c + 2] = 205;
	x[r][c + 3] = 205;
	x[r][c + 4] = 184;
	x[r + 1][c] = 186;
	x[r + 2][c] = 186;
	x[r + 3][c] = 186;
	x[r + 4][c] = 186;
	x[r + 5][c] = 186;
	x[r + 6][c] = 212;
	x[r + 6][c + 1] = 205;
	x[r + 6][c + 2] = 205;
	x[r + 6][c + 3] = 205;
	x[r + 1][c + 4] = 186;
	x[r + 2][c + 4] = 186;
	x[r + 3][c + 4] = 186;
	x[r + 4][c + 4] = 186;
	x[r + 5][c + 4] = 186;
	x[r + 6][c + 4] = 190;
}
void harakelevator(char x[][200], int& r, int& c, int& Switch, int& rhero, int& chero, int& ctElevetor)
{
	if (Switch == 1)
	{
		if (ctElevetor == 0)
		{
			ctElevetor++;
			rhero = 38;
			r = 35;
		}
		rhero -= 3;
		r -= 3;
		if (r == 11)
		{
			Switch = 0;
			ctElevetor = 0;
		}
	}
	if (Switch == -1)
	{
		if (ctElevetor == 0)
		{
			ctElevetor++;
			rhero = 17;
			r = 11;
		}
		rhero += 3;
		r += 3;

		if (r == 35)
		{
			Switch = 0;
			ctElevetor = 0;
		}
	}

}
/////////////////////////////////////////////////////
void ersmenemycube(char x[][200], int r, int c)
{
	int ctr = 0, ctc = 0;
	for (r = r; ctr != 5; r++)
	{
		for (c = c - 5; ctc != 5; c++)
		{
			x[r][c] = '#';
			ctc++;
		}
		ctc = 0;
		ctr++;
	}
}
void harakcube(char x[][200], int& r, int& c, int dir, int i)
{

	if (i < 2)
	{

		r -= 4;
		c -= 2;
	}
	else
	{
		r += 4;
		c -= 2;
	}
}
void harakcube1(char x[][200], int& r, int& c, int dir, int i)
{
	if (i < 2)
	{
		r -= 4;
		c += 2;
	}
	else
	{
		r += 4;
		c += 2;
	}

}
void salalmgdida(char x[][156], int r, int c)
{
	int ctr = 0, ctc = 0;

	for (r = r; ctr != 5; r++)
	{
		for (c = c; ctc != 5; c++)
		{
			x[r][c] = '#';
			ctc++;
		}
		ctc = 0;
		ctr++;
	}


}
void ersmenemygdid2(char x[][200], int& r, int& c)
{
	x[r][c + 1] = 243;
	x[r][c] = 154;
	x[r][c - 1] = 242;
	x[r + 1][c] = 219;
	x[r + 1][c - 1] = 220;
	x[r + 1][c + 1] = 220;
	x[r + 1][c - 2] = 220;
	x[r + 1][c + 2] = 220;
	x[r + 1][c + 3] = 222;
	x[r + 1][c - 3] = 221;
	x[r + 2][c - 1] = 219;
	x[r + 2][c + 1] = 219;
	x[r + 2][c - 2] = 219;
	x[r + 2][c + 2] = 219;
	x[r + 2][c] = 219;
	x[r + 1][c + 4] = 205;
	x[r + 1][c - 4] = 205;
	x[r + 1][c + 5] = 205;
	x[r + 1][c - 5] = 205;
	x[r + 1][c + 6] = 205;
	x[r + 1][c - 6] = 205;
	x[r + 1][c + 7] = 186;
	x[r + 1][c - 7] = 186;
	x[r + 2][c + 4] = 205;
	x[r + 2][c - 4] = 205;
	x[r + 2][c + 5] = 205;
	x[r + 2][c - 5] = 205;
	x[r + 2][c - 6] = 205;
	x[r + 2][c + 6] = 205;
	x[r + 2][c + 7] = 186;
	x[r + 2][c - 7] = 186;
	x[r + 3][c + 4] = 221;
	x[r + 3][c - 4] = 221;
	x[r + 4][c - 4] = 221;
	x[r + 4][c + 4] = 219;
	x[r + 5][c + 4] = 223;
	x[r + 3][c - 1] = 219;
	x[r + 3][c + 1] = 219;
	x[r + 3][c - 2] = 219;
	x[r + 3][c + 2] = 219;
	x[r + 3][c] = 219;
	x[r + 4][c + 2] = 219;
	x[r + 4][c - 2] = 219;
	x[r + 5][c + 2] = 219;
	x[r + 5][c - 2] = 219;
	x[r + 6][c - 2] = 223;
	x[r + 6][c + 2] = 223;
}
void jump(char x[][200], int& r, int c, int& count, int& ff, int& j, int dir)
{

	if (ff == 0)
	{
		if ((x[r - 7][c] != '*' && x[r - 7][c - 1] != '*' && x[r - 7][c + 1] != '*') && (x[r - 6][c] != '*' && x[r - 6][c - 1] != '*' && x[r - 6][c + 1] != '*'))
		{
			if (count < 8)
			{
				r -= 4;
			}
			else
			{
				ff = 1;
			}
		}
	}
	if (ff == 1)
	{
		if (x[r + 1][c] != '*' && x[r + 1][c - 1] != '*' && x[r + 1][c + 1] != '*')
		{
			if (count < 15)
			{
				r++;
			}
			else
			{
				ff = 0;
				j = 1;
				count = 0;
			}
		}
		else
		{
			ff = 0;
			j = 1;
			count = 0;
		}
	}
	count++;
}
void jumpL(char x[][200], int& r, int& c, int& countL, int& ffL, int& jL, int dir)
{

	if (ffL == 0)
	{
		if ((x[r - 7][c] != '*' && x[r - 7][c - 1] != '*' && x[r - 7][c + 1] != '*') && (x[r - 6][c] != '*' && x[r - 6][c - 1] != '*' && x[r - 6][c + 1] != '*'))
		{
			if (countL < 20)
			{
				r -= 2;
				c--;
			}
			else
			{
				ffL = 1;
			}
		}
	}
	if (ffL == 1)
	{
		if (x[r + 1][c] != '*' && x[r + 1][c + 1] != '*' && x[r + 1][c - 1] != '*')
		{
			if (countL < 40)
			{
				r++;
				c--;
			}
			else
			{
				ffL = 0;
				jL = 1;
				countL = 0;
			}
		}
		else
		{
			ffL = 0;
			jL = 1;
			countL = 0;
		}
	}
	countL++;
}
void jumpR(char x[][200], int& r, int& c, int& countR, int& ffR, int& jR, int dir)
{
	if (ffR == 0)
	{
		if ((x[r - 7][c] != '*' && x[r - 7][c - 1] != '*' && x[r - 7][c + 1] != '*') && (x[r - 6][c] != '*' && x[r - 6][c - 1] != '*' && x[r - 6][c + 1] != '*'))
		{
			if (countR < 20)
			{
				r -= 2;
				c++;
			}
			else
			{
				ffR = 1;
			}
		}
	}
	if (ffR == 1)
	{
		if (x[r + 1][c] != '*' && x[r + 1][c + 1] != '*' && x[r + 1][c - 1] != '*')
		{
			if (countR < 40)
			{
				r++;
				c++;
			}
			else
			{
				ffR = 0;
				jR = 1;
				countR = 0;
			}
		}
		else
		{
			ffR = 0;
			jR = 1;
			countR = 0;
		}
	}
	countR++;
}
void HarakEnmy(int& rEnmy, int& cEnmy, int& dirEnmy2)
{
	if (dirEnmy2 == 1)
	{
		cEnmy++;
	}
	if (dirEnmy2 == -1)
	{
		cEnmy--;
	}

	if (cEnmy == 120)
	{
		dirEnmy2 = -1;
	}
	if (cEnmy == 25)
	{
		dirEnmy2 = 1;
	}
}
void ersmenemygdid(char x[][200], int& r, int& c)
{
	x[r][c + 1] = 243;
	x[r][c] = 154;
	x[r][c - 1] = 242;
	x[r + 1][c] = 219;
	x[r + 1][c - 1] = 220;
	x[r + 1][c + 1] = 220;
	x[r + 1][c - 2] = 220;
	x[r + 1][c + 2] = 220;
	x[r + 1][c + 3] = 222;
	x[r + 1][c - 3] = 221;
	x[r + 2][c - 1] = 219;
	x[r + 2][c + 1] = 219;
	x[r + 2][c - 2] = 219;
	x[r + 2][c + 2] = 219;
	x[r + 2][c] = 219;
	x[r + 1][c + 4] = 205;
	x[r + 1][c - 4] = 205;
	x[r + 1][c + 5] = 205;
	x[r + 1][c - 5] = 205;
	x[r + 1][c + 6] = 205;
	x[r + 1][c - 6] = 205;
	x[r + 1][c + 7] = 186;
	x[r + 1][c - 7] = 186;
	x[r + 2][c + 4] = 205;
	x[r + 2][c - 4] = 205;
	x[r + 2][c + 5] = 205;
	x[r + 2][c - 5] = 205;
	x[r + 2][c - 6] = 205;
	x[r + 2][c + 6] = 205;
	x[r + 2][c + 7] = 186;
	x[r + 2][c - 7] = 186;
	x[r + 3][c + 4] = 221;
	x[r + 3][c - 4] = 221;
	x[r + 4][c - 4] = 221;
	x[r + 4][c + 4] = 219;
	x[r + 4][c + 5] = 223;
	x[r + 5][c + 5] = 223;
	x[r + 5][c + 4] = 223;
	x[r + 3][c - 1] = 219;
	x[r + 3][c + 1] = 219;
	x[r + 3][c - 2] = 219;
	x[r + 3][c + 2] = 219;
	x[r + 3][c] = 219;
	x[r + 4][c + 2] = 219;
	x[r + 4][c - 2] = 219;
	x[r + 5][c + 2] = 219;
	x[r + 5][c - 2] = 219;
	x[r + 6][c - 2] = 223;
	x[r + 6][c + 2] = 223;
}
void gosa(char x[][200], int rEnmy2, int cEnmy2)
{
	rEnmy2 = 7; cEnmy2 = 25;
	x[rEnmy2][cEnmy2] = 177;
	x[rEnmy2 + 1][cEnmy2 + 1] = 177;
	x[rEnmy2 + 1][cEnmy2] = 177;
	x[rEnmy2 + 1][cEnmy2 + 1] = 177;
	x[rEnmy2 + 1][cEnmy2 - 1] = 177;
	x[rEnmy2 + 2][cEnmy2 - 1] = 177;
	x[rEnmy2 + 2][cEnmy2 + 1] = 177;
	x[rEnmy2 + 1][cEnmy2 + 2] = 177;
	x[rEnmy2 + 2][cEnmy2 + 2] = 177;
	x[rEnmy2 + 1][cEnmy2 - 2] = 177;
	x[rEnmy2 + 2][cEnmy2 - 2] = 177;
	x[rEnmy2 + 3][cEnmy2 - 2] = 177;
	x[rEnmy2 + 3][cEnmy2 + 2] = 177;
}
void second_gosa(char x[][200], int rEnemy4, int cEnemy4)
{
	x[rEnemy4][cEnemy4 + 1] = 177;
	x[rEnemy4][cEnemy4] = 177;
	x[rEnemy4][cEnemy4 - 1] = 177;
	x[rEnemy4 + 1][cEnemy4] = 177;
	x[rEnemy4 + 1][cEnemy4 - 1] = 177;
	x[rEnemy4 + 1][cEnemy4 + 1] = 177;
	x[rEnemy4 + 1][cEnemy4 - 2] = 177;
	x[rEnemy4 + 1][cEnemy4 + 2] = 177;
	x[rEnemy4 + 1][cEnemy4 + 3] = 177;
	x[rEnemy4 + 1][cEnemy4 - 3] = 177;
	x[rEnemy4 + 2][cEnemy4 - 1] = 177;
	x[rEnemy4 + 2][cEnemy4 + 1] = 177;
	x[rEnemy4 + 2][cEnemy4 - 2] = 177;
	x[rEnemy4 + 2][cEnemy4 + 2] = 177;
	x[rEnemy4 + 2][cEnemy4] = 177;
	x[rEnemy4 + 1][cEnemy4 + 4] = 177;
	x[rEnemy4 + 1][cEnemy4 - 4] = 177;
	x[rEnemy4 + 1][cEnemy4 + 5] = 177;
	x[rEnemy4 + 1][cEnemy4 - 5] = 177;
	x[rEnemy4 + 1][cEnemy4 + 6] = 177;
	x[rEnemy4 + 1][cEnemy4 - 6] = 177;
	x[rEnemy4 + 1][cEnemy4 + 7] = 177;
	x[rEnemy4 + 1][cEnemy4 - 7] = 177;
	x[rEnemy4 + 2][cEnemy4 + 4] = 177;
	x[rEnemy4 + 2][cEnemy4 - 4] = 177;
	x[rEnemy4 + 2][cEnemy4 + 5] = 177;
	x[rEnemy4 + 2][cEnemy4 - 5] = 177;
	x[rEnemy4 + 2][cEnemy4 - 6] = 177;
	x[rEnemy4 + 2][cEnemy4 + 6] = 177;
	x[rEnemy4 + 2][cEnemy4 + 7] = 177;
	x[rEnemy4 + 2][cEnemy4 - 7] = 177;
	x[rEnemy4 + 3][cEnemy4 + 4] = 177;
	x[rEnemy4 + 3][cEnemy4 - 4] = 177;
	x[rEnemy4 + 4][cEnemy4 - 4] = 177;
	x[rEnemy4 + 4][cEnemy4 + 4] = 177;
	x[rEnemy4 + 4][cEnemy4 + 5] = 177;
	x[rEnemy4 + 5][cEnemy4 + 5] = 177;
	x[rEnemy4 + 5][cEnemy4 + 4] = 177;
	x[rEnemy4 + 3][cEnemy4 - 1] = 177;
	x[rEnemy4 + 3][cEnemy4 + 1] = 177;
	x[rEnemy4 + 3][cEnemy4 - 2] = 177;
	x[rEnemy4 + 3][cEnemy4 + 2] = 177;
	x[rEnemy4 + 3][cEnemy4] = 177;
	x[rEnemy4 + 4][cEnemy4 + 2] = 177;
	x[rEnemy4 + 4][cEnemy4 - 2] = 177;
	x[rEnemy4 + 5][cEnemy4 + 2] = 177;
	x[rEnemy4 + 5][cEnemy4 - 2] = 177;
	x[rEnemy4 + 6][cEnemy4 - 2] = 177;
	x[rEnemy4 + 6][cEnemy4 + 2] = 177;
}
void checkpoint(char x[][200], int r, int c)
{

	x[r - 1][c - 2] = 'C';
	x[r - 1][c - 1] = 'H';
	x[r - 1][c] = 'E';
	x[r - 1][c + 1] = 'C';
	x[r - 1][c + 2] = 'K';
	x[r - 1][c + 3] = ' ';
	x[r - 1][c + 4] = ' ';
	x[r - 1][c + 5] = 'P';
	x[r - 1][c + 6] = 'O';
	x[r - 1][c + 7] = 'I';
	x[r - 1][c + 8] = 'N';
	x[r - 1][c + 9] = 'T';
	x[r][c] = 213;
	x[r][c + 1] = 205;
	x[r][c + 2] = 205;
	x[r][c + 3] = 205;
	x[r][c + 4] = 184;
	x[r + 1][c] = 186;
	x[r + 2][c] = 186;
	x[r + 3][c] = 186;
	x[r + 4][c] = 186;
	x[r + 5][c] = 186;
	x[r + 6][c] = 212;
	x[r + 6][c + 1] = 205;
	x[r + 6][c + 2] = 205;
	x[r + 6][c + 3] = 205;
	x[r + 1][c + 4] = 186;
	x[r + 2][c + 4] = 186;
	x[r + 3][c + 4] = 186;
	x[r + 4][c + 4] = 186;
	x[r + 5][c + 4] = 186;
	x[r + 6][c + 4] = 190;
}
void main()
{
	
	for (;;)
	{
		char x[50][200];
		int numBullets = 100,fb=0;
		int heroBullets[100], mm = 0, bulletFlag = 0, ctbullet=0,rbullet[100],cbullet[100];
		int rhero = 40, chero = 180, rh = 40, chr = 195, f = 0, rEnmy2 = 7, cEnmy2 = 25, rlazer = rEnmy2 + 3, clazer = cEnmy2 + 2, rEnmy3 = 7, cEnmy3 = 50, rlazer2 = rEnmy3 + 3, clazer2 = cEnmy3 + 2;
		int rg = rh - 3, cg = chr + 4, ct = 0, end = 0,win=0, gunD = 1, gunD2 = 1, gunD3 = 1, gunD4 = 1;;
		int rElevetor = 18, cElevetor = 50, Switch = 0, rEnemy4 = 34, cEnemy4 = 100, renemy5 = 19, cenemy5 = 9, renemy6 = 35, cenemy6 = 10, counttt = 0, renemy7 = 23, cenemy7 = 170;
		int ct2 = 0, dir = -1, dir2 = 1, dis = 0, l = 1, l2 = 1;
		int lenemy6 = 1;
		int postalka = 0, f2 = 0, f3 = 0, f4 = 0, o;
		int rg2 = 0;
		int rg3 = 0;
		int rg4 = 0;
		int cg2 = 0;
		int cg3 = 0;
		int cg4 = 0;
		int ct4 = 0;
		
		int dirj = 0, ctElevetor = 0, j = 1, jR = 1, jL = 1, ff = 0, ffR = 0, ffL = 0, counte6 = 0, count = 0, countR = 0, countL = 0, rcube = 34, ccube = 100, ctcube = 0, dircube = 1, dead = 0, dead2 = 0;
		char  m; int checkgun1 = dir; int checkgun2=dir; int checkgun3=dir; int checkgun4=dir; int dirEnmy2 = 1; int lazercheck = 1;
		///////////////////////////////////////////
		int ctlazer = 0; int herodeath = 0; int rcheckpoint = 36; int ccheckpoint = 40; int checkpointRow = rhero; int checkpointCol = chero;
		for (;;)
		{
			for (; !_kbhit();)
			{
				//////////////////////
				if (win == 1)
				{
					ersmwin(x, win, rhero, chero, dir, end);
				}
				else
				{
					if (end == 1)
					{
						ersmend(x, end, rhero, chero, dir, end);
					}
					else {

						if (bulletFlag == 1)
						{
							for (int m = 1; m < mm; m += 2)
							{
								if (heroBullets[m] - 1 > 0)
								{
									harrakBullet(x, heroBullets[m - 1], heroBullets[m]);
								}
								if ((heroBullets[m] - 2) <= 0)
								{
									bulletFlag = 0;
									break;
								}
							}
						}
						if (x[rhero + 1][chero] == ' ')
						{
							rhero++;
						}
						ersm(x, ct2, dis);
						if (j == 0)
						{
							jump(x, rhero, chero, count, ff, j, dir);
						}
						if (jL == 0)
						{
							jumpL(x, rhero, chero, countL, ffL, jL, dir);
						}
						if (jR == 0)
						{
							jumpR(x, rhero, chero, countR, ffR, jR, dir);
						}
						ersmhero(x, rhero, chero, dir);
						if (x[rhero + 1][chero] != '*' || x[rhero + 1][chero - 1] != '*' || x[rhero + 1][chero + 1] != '*' || x[rhero + 2][chero] != '*' || x[rhero + 2][chero - 1] != '*' || x[rhero + 2][chero + 1] != '*')
						{
						}
						else { rhero++; }
						checkwin(x, rhero, chero, win);
						if (ctElevetor == 1 && Switch == 1)
						{
							if (rElevetor == 14)
							{
								rhero = 17;
								rElevetor = 11;
							}
						}
						////////////////////////
						if (rElevetor == 32 && Switch == -1)
						{
							rhero = 38;
						}
						/////////////////////////////////////////////////////
						/////////////////////////////////////
						if (rg2 == rEnmy2 && f2 != 0 && dead == 0)
						{
							gosa(x, rEnmy2, cEnmy2);
							dead = 1;
						}
						if (rg3 == rEnemy4  && f3 != 0 && dead2 == 0)
						{
							second_gosa(x, rEnemy4, cEnemy4);
							dead2 = 1;
						}
						if (dead2 == 0)
						{
							ersmenemygdid(x, rEnemy4, cEnemy4);
						}
						if (dead == 0)
						{
							HarakEnmy(rEnmy2, cEnmy2, dirEnmy2);
							ersmenemy(x, rEnmy2, cEnmy2);
							lazer2(x, rlazer, clazer, rEnmy2, ctlazer, lazercheck);
						}
						///////////////////////////////////////////////
						ersmelevator(x, rElevetor, cElevetor);
						if (rElevetor != 11)
						{
							if (chero == 52 && m == 'u')
							{
								Switch = 1;
								harakelevator(x, rElevetor, cElevetor, Switch, rhero, chero, ctElevetor);
							}
						}
						if (rElevetor != 35)
						{
							if (chero == 52 && m == 'h')
							{
								Switch = -1;
								harakelevator(x, rElevetor, cElevetor, Switch, rhero, chero, ctElevetor);
							}
						}
						ersmelevator(x, rElevetor, cElevetor);
						
						if (l == 1)
						{
							ersmenemygdid(x, renemy5, cenemy5);
						}
						if (l2 == 1)
						{
							ersmenemygdid(x, renemy7, cenemy7);
						}
						if (lenemy6 == 1)
						{
							ersmenemygdid2(x, renemy6, cenemy6);
							if (counte6 == 10)
							{
								lazer(x, renemy6 + 2, cenemy6 + 8, lenemy6);
								counte6 = 0;
							}
							counte6++;
						}

						if (f == 1)
						{
							harakgun(x, rg, cg, f, gunD, dir, checkgun1);
						}
						else
						{
							rg = rhero - 3;
							cg = chero + 4;
						}
						if (f2 == 1)
						{

							harakgun2(x, rg2, cg2, f2, gunD2, dir,checkgun2);

						}
						else
						{
							rg2 = rhero - 3;
							cg2 = chero + 4;
						}
						if (f3 == 1)
						{

							harakgun3(x, rg3, cg3, f3, gunD3, dir,checkgun3);

						}
						else
						{
							rg3 = rhero - 3;
							cg3 = chero + 4;
						}
						if (f4 == 1)
						{

							harakgun4(x, rg4, cg4, f4, gunD4, dir,checkgun4);
						}
						else
						{
							rg4 = rhero - 3;
							cg4 = chero + 4;
						}
						if (clazer == chero || clazer == chero + 1 || clazer == chero + 2 || clazer == chero - 2)
						{
							if (lazercheck == 1)
							{
								herodeath++;
								if (herodeath == 1 || herodeath == 2)
								{
									rhero = checkpointRow;
									chero = checkpointCol;
								}
								if (herodeath == 3)
								{
									end = 1;
								}
							}

							////////
						}
						/////////////////////////////////////////////////////////////
						if (rhero == 42 && chero == 42)						/////////
						{													/////////
							checkpointRow = rcheckpoint + 4;					/////////
							checkpointCol = ccheckpoint+2;					/////////
						}													/////////
						checkpoint(x, rcheckpoint, ccheckpoint);			/////////
						disp(x, rhero, chero, dir, end, win);				/////////
						/////////////////////////////////////////////////////////////
					}
				}
			}
				char ch = _getch();
				////////////////////
				if (ch =='b')
				{
					for (int m = mm; m < numBullets; m++)
					{
						heroBullets[m] = rhero - 3;
						heroBullets[m + 1] = chero - 4;
						ersemBullet(x, rhero - 3, chero - 4);
						mm += 2;
						bulletFlag = 1;
						break;
					}

				}
				
				////////////
				m = ch;
				if (m == 'd' && f == 0)
				{
					checkgun1 = 1;
				}
				if (m == 'a' && f == 0)
				{
					checkgun1 = -1;
				}
				if (m == 'd' && f2 == 0)
				{
					checkgun2 = 1;
				}
				if (m == 'a' && f2 == 0)
				{
					checkgun2 = -1;
				}
				if (m == 'd' && f3 == 0)
				{
					checkgun3 = 1;
				}
				if (m == 'a' && f3 == 0)
				{
					checkgun3 = -1;
				}
				if (m == 'd' && f4 == 0)
				{
					checkgun4 = 1;
				}
				if (m == 'a' && f4== 0)
				{
					checkgun4 = -1;
				}
				if (end == 1||win==1)
				{
					if (m == 'p' || m == 'n')
					{
						break;
					}
				}
				///////////
				HarakHero(rhero, chero, ch, x, rh, chr, f, ct, end, ct2, dir, gunD, gunD2, gunD3, gunD4, j, postalka, f2, f3, f4, ct4, jR, jL,win);
				ersmhero(x, rhero, chero, dir);
		}
		if (m == 'n')
		{
			break;
		}
	}
}