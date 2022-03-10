#include <iostream>
#define nmax 50
#define mmax 50
int bat[nmax + 2][mmax + 2];
int dx[4] = { -1,0,1,0 }; // 좌상우하
int dy[4] = { 0,-1, 0,1 }; // 좌상우하
using namespace std;
void go_worms(int x, int y)
{
	bat[y][x] = -1;
	for (int i = 0; i < 4; i++)
	{
		if (bat[y + dy[i]][x + dx[i]] == 1)
			go_worms(x+dx[i], y+dy[i]);
	}
}
int main()
{

	
	int c; cin >> c;
	while (c--) {
		int  n, m, bae; int worms = 0;
		cin >> m >> n >> bae;
		fill(&bat[0][0], &bat[nmax + 2][mmax + 2], 0);
		for (int i = 0; i < bae; i++)
		{
			int x, y;  cin >> x >> y;
			bat[y + 1][x + 1] = 1;
		
		}
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				if (bat[i][j] == 1)
				{
					worms++;
					go_worms(j, i);
				}

		cout << worms << "\n";
	}
}