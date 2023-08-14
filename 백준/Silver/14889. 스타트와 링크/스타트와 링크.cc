#include <iostream>
using namespace std;

int n;
int rel[21][21] = { 0, };
bool team_check[21] = { 0, };
int mini = 1000000;

void team(int indx, int p)
{
    if (indx == n / 2)
    {
        int start_team = 0;
        int link_team = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (team_check[i] == 1 && team_check[j] == 1)
                    start_team += rel[i][j];
                else if (team_check[i] == 0 && team_check[j] == 0)
                    link_team += rel[i][j];
            }
        }

        int tmp = abs(start_team - link_team);
        if (tmp < mini)
            mini = tmp;

        return;
    }
    for (int i = p; i <= n; i++)
    {
        team_check[i] = 1;
        team(indx + 1, i + 1);
        team_check[i] = 0;
    }
}

int main() 
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> rel[i][j];
        }
    }

    team(0,1);

    cout << mini;
}