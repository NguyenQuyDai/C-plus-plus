#include <iostream>
#include <iomanip>
#include <string.h>


using namespace std;

#define MATCH_IN_GROUP 6    // 6 matches
#define TEAM_IN_GROUP 4     // 4 teams in a group
#define MAX_LENGTH 50

#define WIN_SCORE  3
#define EQUAL_SCORE 1
#define DROP_SCORE 0


typedef struct
{
    char time[20];
    char team1[MAX_LENGTH];
    int goal1;
    char team2[MAX_LENGTH];
    int goal2;
    bool bcheck;
}MATCH, *PMATCH;

typedef struct
{
    char name[50];
    int score;
    int win;
    int drop;
}TEAM;

MATCH timetab_const[] =
{
    {"20:00 24/03/2016", "England", 0, "Croatia", 0, false},
    {"20:00 24/03/2016", "Russia", 0, "Jamaica", 0, false},
    {"21:00 25/03/2016", "England", 0, "Jamaica", 0, false},
    {"21:00 25/03/2016", "Russia", 0, "Croatia", 0, false},
    {"20:00 26/03/2016", "England", 0, "Russia", 0, false},
    {"20:00 26/03/2016", "Croatia", 0, "Jamaica", 0, false}
};

char *team_const[] =
{
    "England",
    "Croatia",
    "Jamaica",
    "Russia"
};

class CGroup
{
private:
    char group_name[10];
    MATCH match[MATCH_IN_GROUP];
    TEAM team[TEAM_IN_GROUP];

public:
    CGroup(const char* grp_name)
    {
        // group name
        strncpy(group_name, grp_name, sizeof(group_name));

        // match
        for (int i = 0; i < MATCH_IN_GROUP; i++)
        {
            strncpy(match[i].time, timetab_const[i].time, sizeof(match[i].time));
            strncpy(match[i].team1, timetab_const[i].team1, sizeof(match[i].team1));
            strncpy(match[i].team2, timetab_const[i].team2, sizeof(match[i].team2));
            match[i].goal1 = timetab_const[i].goal1;
            match[i].goal2 = timetab_const[i].goal2;
            match[i].bcheck = false;
        }
        // team info
        for (int i = 0; i < TEAM_IN_GROUP; i++)
        {
            strncpy(team[i].name, team_const[i], sizeof(team[i].name));
            team[i].score = team[i].win = team[i].drop = 0;
        }
    }
    void show_team_info()
    {
        cout << "Group : " << group_name << endl;
        cout << "---------------------------------------" << endl;
        cout << "Team\t\tscore\twin\tdrop" << endl;
        cout << "---------------------------------------" << endl;
        for (int i = 0; i < TEAM_IN_GROUP; i++)
        {
            cout << team[i].name << "\t\t"
                 << team[i].score << "\t"
                 << team[i].win << "\t"
                 << team[i].drop << endl;
        }
    }
    void show_match_info()
    {
        cout << "Group : " << group_name << endl;
        cout << "-----------------------------------------------" << endl;
        for (int i = 0; i < MATCH_IN_GROUP; i++)
        {
            cout << match[i].time << "\t"
                 << match[i].team1 << "\t\t"
                 << match[i].goal1 << ":" << match[i].goal2 << "\t"
                 << match[i].team2 << endl;
        }
    }
    void competition_result(int n_match)
    {
        if (n_match < 1 || n_match > MATCH_IN_GROUP)
        {
            return;
        }
        int i = n_match - 1;
        cout << "****************Match result: " << n_match << "****************" << endl;
        cout << match[i].team1 << " : "; cin >> match[i].goal1;

        cout << match[i].team2 << " : "; cin >> match[i].goal2;

    }
    void set_point(int n_match)
    {
        int pos1, pos2;
        int i = n_match - 1;

        if (match[i].bcheck)
        {
            return;
        }
        // Team 1 wins Team 2
        if (match[i].goal1 > match[i].goal2)
        {
            // Team 1
            pos1 = get_pos_team(match[i].team1);
            team[pos1].score += WIN_SCORE;
            team[pos1].win += match[i].goal1;
            team[pos1].drop += match[i].goal2;
            // Team 2
            pos2 = get_pos_team(match[i].team2);
            team[pos2].score += DROP_SCORE;
            team[pos2].win += match[i].goal2;
            team[pos2].drop += match[i].goal1;
        }
        // Team 1 is equal to Team 2
        else if (match[i].goal1 == match[i].goal2)
        {
            // Team 1
            pos1 = get_pos_team(match[i].team1);
            team[pos1].score += EQUAL_SCORE;
            team[pos1].win += match[i].goal1;
            team[pos1].drop += match[i].goal2;
            // Team 2
            pos2 = get_pos_team(match[i].team2);
            team[pos2].score += EQUAL_SCORE;
            team[pos2].win += match[i].goal2;
            team[pos2].drop += match[i].goal1;
        }
        else
        {
            // Team 1
            pos1 = get_pos_team(match[i].team1);
            team[pos1].score += DROP_SCORE;
            team[pos1].win += match[i].goal1;
            team[pos1].drop += match[i].goal2;
            // Team 2
            pos2 = get_pos_team(match[i].team2);
            team[pos2].score += WIN_SCORE;
            team[pos2].win += match[i].goal2;
            team[pos2].drop += match[i].goal1;
        }
        match[i].bcheck = true;
    }

    int get_pos_team(const char* name)
    {
        for (int i = 0; i < TEAM_IN_GROUP; i++)
        {
            if (!strcmp(name, team[i].name))
            {
                return i;
            }
        }
        return -1;
    }

};

int main()
{
    // Constructor
    CGroup group("A");

    group.show_team_info();
    group.show_match_info();

    // Input competition result
    group.competition_result(1);
    group.set_point(1);

    group.competition_result(2);
    group.set_point(2);

    group.competition_result(3);
    group.set_point(3);

    group.competition_result(4);
    group.set_point(4);

    group.competition_result(5);
    group.set_point(5);

    group.competition_result(6);
    group.set_point(6);


    group.show_match_info();
    group.show_team_info();

    system("pause");
}
