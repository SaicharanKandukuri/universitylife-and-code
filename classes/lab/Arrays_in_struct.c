#include <stdio.h>

struct Cricket{
    char player_name[100];
    char team_name[100];
    int batting_avg;
};

int main(void)
{
    int i;
    struct Cricket c;
    struct Cricket n_h[11];
    
    printf ("Enter team name \n : ");
    scanf("%[^\n]%*c", c.team_name);

    printf ("Enter Player names \n : ");

    for(i=1; i<=11; i++)
    {
        printf ("Name (%d) : ", i);
        scanf ("%[^\n]%*c", &n_h[i].player_name);
    }

    printf ("Enter Batting average \n : ");
    scanf ("%d", &c.batting_avg);

    printf ("The entered are : \n");

    printf ("Team name : %s", c.team_name);

    printf ("Players are : \n");

    for (i=1; i<=11; i++ )
    {
        printf("[%d] %s\n", i, n_h[i].player_name);
    }

    printf ("Batting average is %d \n", c.batting_avg);

}
