#include<stdio.h>
#include <stdlib.h>
#include<windows.h>
struct batsman{
    char name[20];
    int individualRun;

};

typedef struct batsman batting;
void innings()
{
      int totalExtra = 0,extra_int = 0,n,runs ,balls ,overs ,strike, totalOvers, wicket,i=0,j=1,x,y;
    /// Initializing Total Runs
    int totalRuns = 0;

    char extra_char;

    char junk;

    char balls_result;

    headertitle();

    printf("\t\t********  Enter how many over you want to play = ");
    scanf("%d",&totalOvers);

    printf("\n\t\t********  Total players in each team = ");
    scanf("%d",&n);
    system("cls");
    batting player_one[n-1];
    batting player_two[n-1];

    /// Initializing Batsman's Runs in 0 balls

    for(y=0;y<n;y++)
    {
        player_one[y].individualRun = 0;
        strcpy(player_one[y].name,"Did not bat");
    }
    headertitle();
    printf("\t\t********  Enter one Batsman's Name :");
    scanf("%s",player_one[i].name);

    printf("\n\t\t********  Enter Another Batsman's Name :");
    scanf("%s",player_one[j].name);
    system("cls");

    strike = i, wicket = 0;
    ///First Innings :
    headertitle();

    for(overs = 0 ; overs <totalOvers ; overs++)
    {
        if(wicket == n-1)
            break;
        printf("\n\t\tEnter Runs Per Ball Below :\n");
        for( balls = 1 ; balls <= 6 ; balls++)
        {

            printf("\n\t\tOver %d.%d - ",overs,balls);
            printf("\n\t\tBall Result : ");
            getc(stdin);
            scanf("%c",&balls_result);
            runs = balls_result - 48;

            ///Wicket Falling.(press W or w)
            if(runs == 39 || runs == 71)
            {
                wicket++;
                if(wicket == n-1)
                    break;
                if(strike == i || (overs == 0 && balls == 0) )
                {
                    if( i < j)
                    {

                        i = j+1;
                        runs = 0;
                        totalRuns = totalRuns + runs;
                        if(balls>=0 && balls<=5)
                        {
                            strike = i;
                        }
                        else
                        {
                            strike = j;
                        }
                        printf("\t\tEnter new batsman's name : ");
                        scanf("%s",player_one[i].name);
                        printf("\n");


                    }

                    else if( i > j)
                    {

                        i = i + 1;
                        runs = 0;
                        totalRuns = totalRuns + runs;
                        if(balls>=0 && balls<=5)
                        {
                            strike = i;
                        }
                        else
                        {
                            strike = j;
                        }

                        printf("\t\tEnter new batsman's name : ");
                        scanf("%s",player_one[i].name);
                        printf("\n");

                    }
                }
                else if( strike == j )
                {
                    if(j < i)
                    {

                        j = i + 1;
                        runs = 0;
                        totalRuns = totalRuns + runs;
                        if(balls>=0 && balls<=5)
                        {
                            strike = j;
                        }
                        else
                        {
                            strike = i;
                        }

                        printf("\t\tEnter new batsman's name : ");
                        scanf("%s",player_one[j].name);
                        printf("\n");

                    }

                    else if(j > i)
                    {

                        j = j + 1;
                        runs = 0;
                        totalRuns = totalRuns + runs;
                        if(balls>=0 && balls<=5)
                        {
                            strike = j;
                        }
                        else
                        {
                            strike = i;
                        }
                        printf("\t\tEnter new batsman's name : ");
                        scanf("%s",player_one[j].name);

                    }
                }

            }

            ///Extra Runs Calculation.(press e or E)
            else if(runs== 53 || runs == 21)
            {
                for(y=0;y<1;)
                {

                    getc(stdin);
                    printf("\t\tEnter Extra Runs : ");

                    scanf("%c",&extra_char);
                    extra_int = extra_char - 48;

                    if(extra_int == 71|| extra_int == 39)
                    {
                        balls = balls -1;
                        wicket++;
                        if(wicket == n-1)
                            break;
                        else if(strike == i||(overs == 0 && balls == 0))
                        {
                            if( i < j)
                            {

                                i = j+1;
                                runs = 0;
                                totalRuns = totalRuns + runs;
                                if(balls>=0 && balls<=5)
                                {
                                    strike = i;
                                }
                                else
                                {
                                    strike = j;
                                }
                                printf("\t\tEnter new batsman's name : ");
                                scanf("%s",player_one[i].name);
                                printf("\n");


                            }

                            else if( i > j)
                            {

                                i = i + 1;
                                runs = 0;
                                totalRuns = totalRuns + runs;
                                if(balls>=0 && balls<=5)
                                {
                                    strike = i;
                                }
                                else
                                {
                                    strike = j;
                                }

                                printf("\t\tEnter new batsman's name : ");
                                scanf("%s",player_one[i].name);
                                printf("\n");

                            }
                        }
                        else if( strike == j )
                        {
                            if(j < i)
                            {

                                j = i + 1;
                                runs = 0;
                                totalRuns = totalRuns + runs;
                                if(balls>=0 && balls<=5)
                                {
                                    strike = j;
                                }
                                else
                                {
                                    strike = i;
                                }

                                printf("\t\tEnter new batsman's name : ");
                                scanf("%s",player_one[j].name);
                                printf("\n");

                            }

                            else if(j > i)
                            {

                                j = j + 1;
                                runs = 0;
                                totalRuns = totalRuns + runs;
                                if(balls>=0 && balls<=5)
                                {
                                    strike = j;
                                }
                                else
                                {
                                    strike = i;
                                }
                                printf("\t\tEnter new batsman's name : ");
                                scanf("%s",player_one[j].name);

                            }
                        }
                        y++;


                    }

                    else if(extra_int<8)///Adding Extra Runs

                    {

                        totalExtra = totalExtra + extra_int;

                        totalRuns = totalRuns + extra_int;

                        balls = balls - 1;

                        y++;
                    }
                    else
                    {
                        printf("Invalid key pressed!Enter again -\n");
                    }

                }
            }
            ///Bye Runs(press B or b)
            else if(runs == 18 || runs == 50)
            {
                printf("\t\tEnter Bye runs : ");
                scanf("%d",&extra_int);
                totalExtra = totalExtra + extra_int;
                totalRuns = totalRuns + extra_int;
            }

            else if(( overs == 0 && balls == 0)||(runs%2 == 0 &&(runs>=0 && runs <=6) && runs !=5 && strike == i) )
            {
                player_one[i].individualRun = player_one[i].individualRun + runs;
                totalRuns = totalRuns + runs;
                if(balls == 6)
                {
                    strike = j;
                }
            }

            else if( runs%2 == 1 &&(runs>=0 && runs <=6) && runs !=5 && (runs != 39 || runs != 71 )&& strike == i )

            {
                player_one[i].individualRun = player_one[i].individualRun + runs;
                totalRuns = totalRuns + runs;
                if(balls>=0 && balls<=5)
                {
                    strike = j;
                }

            }

            else if(runs%2 == 0 &&(runs>=0 && runs <=6)&& runs !=5 && strike == j)

            {
                player_one[j].individualRun = player_one[j].individualRun + runs;
                totalRuns = totalRuns + runs;

                if(balls == 6)
                {
                    strike = i;
                }
            }

            else if( runs%2 == 1 &&(runs>=0 && runs <=6) && runs !=5 && ( runs != 39 || runs != 71 ) && strike == j )

            {
                player_one[j].individualRun = player_one[j].individualRun + runs;
                totalRuns = totalRuns + runs;
                if(balls>=0 && balls<=5)
                {
                    strike = i;
                }
            }
            else
            {
                printf("\n\t\t!!!!!!!!  Invalid key pressed  !!!!!!!!\n");
                balls = balls-1;
            }
            if(wicket == n-1)
                break;

        }
        system("cls");
        headertitle();
        if(overs == totalOvers-1 || wicket == n-1 )
            continue;
        printf("\t\t****************************************************\n");

        printf("\t\t********  End of %d over! Total Score is %d/%d", overs+1, totalRuns,wicket);

        printf("\n\t\t********  Extras : %d\n",totalExtra);

        printf("\n\t\t********  %s = %d Runs \n\t\t********  %s = %d Runs\n", player_one[i].name, player_one[i].individualRun, player_one[j].name, player_one[j].individualRun);

        printf("\n\t\t******** Current Run Rate : %.2f",(float)totalRuns/(overs+1) );

        printf("\n\t\t****************************************************\n");


    }

    if(balls<7)

    {
        printf("\n\t\t********  Total Score : %d/%d\n\t\t********  Overs : %d.%d \n\t\t********  Target : %d",totalRuns,wicket,overs-1,balls,totalRuns+1);
    }
    else
    {
        printf("\n\t\t********  Total Score : %d/%d\n\t\t********  Overs : %d.0 \n\t\t********  Target : %d",totalRuns,wicket,overs,totalRuns+1);
    }
    printf("\n\t\t********  Extras : %d\n",totalExtra);
    printf("\n\t\t********  Required Run Rate : %.2f",(float)(totalRuns+1)/totalOvers);

    printf("\n\n\t\t          Batting Details -\n");
    for(x=0;x<n;x++)
    {
        if(strcmp(player_one[x].name,"Did not bat")==0)
        {
            printf("\n\t\t********  This batsman did not Bat\n");
        }
        else
        {
            if((wicket == n-1) && ((strike != i && x == i) || (strike != j && x == j)) )
            {
                printf("\n\t\t********  %s = %d runs (Not OUT) \n",player_one[x].name,player_one[x].individualRun);
            }
            else if( wicket < n-1 && (x == i || x == j))
            {
                 printf("\n\t\t********  %s = %d runs (Not OUT) \n",player_one[x].name,player_one[x].individualRun);
            }
            else
            {
                printf("\n\t\t********  %s Scored %d runs \n",player_one[x].name,player_one[x].individualRun);
            }
        }
    }


    char button;

    printf("Press any button to proceed to Second Innings...\n");
    getc(stdin);
    scanf("%c",&button);

    system("cls");
    ///Second Innings :
    int target = totalRuns+1;

    int totalRuns_2 = 0;
    i = 0;
    j = 1;
    extra_int = 0;
    totalExtra = 0;

for(y=0;y<n;y++)
    {
        player_two[y].individualRun = 0;
        strcpy(player_two[y].name,"Did not bat");
    }
    headertitle();

    printf("\n\t\t********  Enter one Batsman's Name :");
    scanf("%s",player_two[i].name);

    printf("\n\t\t********  Enter Another Batsman's Name :");
    scanf("%s",player_two[j].name);
    system("cls");

    strike = i, wicket = 0;
    ///Starting :
    headertitle();

    for(overs = 0 ; overs <totalOvers ; overs++)
    {
        if(wicket == n-1)
            {break;}

        printf("\n\n\n\t\tEnter Runs Per Ball Below :\n");
        for( balls = 1 ; balls <= 6 ; balls++)
        {
            if((wicket == n-1)||(totalRuns_2 >= target))
            break;


            printf("\n\n\t\tOver %d.%d - ",overs,balls);

            if(balls<7)
            {
                printf("\t\t\t\tNeed %d from %d",(target - totalRuns_2),totalOvers*6-(overs* 6 + balls-1));
            }
            printf("\n\t\tBall Result : ");
            getc(stdin);
            scanf("%c",&balls_result);
            runs = balls_result - 48;

            ///Wicket Falling.
            if(runs == 39 || runs == 71)
            {
                wicket++;
                if(wicket == n-1)
                    break;

                if(strike == i)
                {
                    if( i < j)
                    {

                        i = j+1;
                        runs = 0;
                        totalRuns_2 = totalRuns_2 + runs;
                        if(balls>=0 && balls<=5)
                        {
                            strike = i;
                        }
                        else
                        {
                            strike = j;
                        }
                        printf("\t\tEnter new batsman's name : ");
                        scanf("%s",player_two[i].name);
                        printf("\n");


                    }

                    else if( i > j)
                    {

                        i = i + 1;
                        runs = 0;
                        totalRuns_2 = totalRuns_2 + runs;
                        if(balls>=0 && balls<=5)
                        {
                            strike = i;
                        }
                        else
                        {
                            strike = j;
                        }

                        printf("\t\tEnter new batsman's name : ");
                        scanf("%s",player_two[i].name);
                        printf("\n");

                    }
                }
                else if( strike == j )
                {
                    if(j < i)
                    {

                        j = i + 1;
                        runs = 0;
                        totalRuns_2 = totalRuns_2 + runs;
                        if(balls>=0 && balls<=5)
                        {
                            strike = j;
                        }
                        else
                        {
                            strike = i;
                        }

                        printf("\t\tEnter new batsman's name : ");
                        scanf("%s",player_two[j].name);
                        printf("\n");

                    }

                    else if(j > i)
                    {
                        printf("Changing phase 4\n");
                        j = j + 1;
                        runs = 0;
                        totalRuns_2 = totalRuns_2 + runs;
                        if(balls>=0 && balls<=5)
                        {
                            strike = j;
                        }
                        else
                        {
                            strike = i;
                        }
                        printf("\t\tEnter new batsman's name : ");
                        scanf("%s",player_two[j].name);

                    }
                }

            }

            ///Extra Runs Calculation.
            else if(runs== 53 || runs == 21)
            {
                for(y=0;y<1;)
                {
                    getc(stdin);
                    printf("\t\tEnter Extra Runs : ");
                    scanf("%c",&extra_char);
                    extra_int = extra_char - 48;

                    if(extra_int == 71||extra_int == 39)
                    {

                        wicket++;

                        if(wicket == n-1)
                            break;

                        else if(strike == i || (overs==0&& balls==0) )
                        {
                            if( i < j)
                            {

                                i = j+1;
                                runs = 0;
                                totalRuns = totalRuns + runs;
                                if(balls>=0 && balls<=5)
                                {
                                    strike = i;
                                }
                                else
                                {
                                    strike = j;
                                }
                                printf("\t\tEnter new batsman's name : ");
                                scanf("%s",player_one[i].name);
                                printf("\n");


                            }

                            else if( i > j)
                            {

                                i = i + 1;
                                runs = 0;
                                totalRuns = totalRuns + runs;
                                if(balls>=0 && balls<=5)
                                {
                                    strike = i;
                                }
                                else
                                {
                                    strike = j;
                                }

                                printf("\t\tEnter new batsman's name : ");
                                scanf("%s",player_one[i].name);
                                printf("\n");

                            }
                        }
                        else if( strike == j )
                        {
                            if(j < i)
                            {

                                j = i + 1;
                                runs = 0;
                                totalRuns = totalRuns + runs;
                                if(balls>=0 && balls<=5)
                                {
                                    strike = j;
                                }
                                else
                                {
                                    strike = i;
                                }

                                printf("\t\tEnter new batsman's name : ");
                                scanf("%s",player_one[j].name);
                                printf("\n");

                            }

                        else if(j > i)
                        {

                            j = j + 1;
                            runs = 0;
                            totalRuns = totalRuns + runs;
                            if(balls>=0 && balls<=5)
                            {
                                strike = j;
                            }
                            else
                            {
                                strike = i;
                            }
                            printf("\t\tEnter new batsman's name : ");
                            scanf("%s",player_one[j].name);

                            }
                        }
                        y++;


                    }
                    else if(extra_int<8)///Adding Extra Runs.

                    {

                        totalExtra = totalExtra + extra_int;

                        totalRuns = totalRuns + extra_int;

                        balls = balls - 1;

                        y++;
                    }
                    else
                    {
                        printf("Invalid key pressed!Enter again -\n");
                    }

                }
            }

            else if(( overs == 0 && balls == 0)||(runs%2 == 0 &&(runs>=0 && runs <=6) && runs !=5 && strike == i) )
            {
                player_two[i].individualRun = player_two[i].individualRun + runs;
                totalRuns_2 = totalRuns_2 + runs;
                if(balls == 6)
                {
                    strike = j;
                }
            }

            else if( runs%2 == 1 &&(runs>=0 && runs <=6) && runs !=5 && (runs != 39 || runs != 71 )&& strike == i )

            {
                player_two[i].individualRun = player_two[i].individualRun + runs;
                totalRuns_2 = totalRuns_2 + runs;
                if(balls>=0 && balls<=5)
                {
                    strike = j;
                }

            }

            else if(runs%2 == 0 &&(runs>=0 && runs <=6)&& runs !=5 && strike == j)

            {
                player_two[j].individualRun = player_two[j].individualRun + runs;
                totalRuns_2 = totalRuns_2 + runs;

                if(balls == 6)
                {
                    strike = i;
                }
            }

            else if( runs%2 == 1 &&(runs>=0 && runs <=6) && runs !=5 && ( runs != 39 || runs != 71 ) && strike == j )

            {
                player_two[j].individualRun = player_two[j].individualRun + runs;
                totalRuns_2 = totalRuns_2 + runs;
                if(balls>=0 && balls<=5)
                {
                    strike = i;
                }
            }
            else
            {
                printf("\t\t!!!!!!!!  Invalid key pressed  !!!!!!!!\n");
                balls = balls-1;
            }


        }
        system("cls");
        headertitle();
        if(overs == totalOvers-1 ||wicket==n-1 || totalRuns_2>=target)
            continue;
        printf("\t\t****************************************************\n");

        printf("\t\t********  End of %d over! Total Score is %d/%d", overs+1, totalRuns_2,wicket);

        printf("\n\t\t********  Extras : %d\n",totalExtra);
        printf("\n\t\t********  Current Run Rate : %.2f",(float)totalRuns/(overs+1)  );
        printf("\n\t\t********  Required Run Rate : %.2f",(float)(totalRuns - totalRuns_2)/(totalOvers-(overs+1) ) );

        printf("\n\t\t          Currently batting -");

        printf("\n\t\t********  %s = %d Runs \n\t\t********  %s = %d Runs\n", player_two[i].name, player_two[i].individualRun, player_two[j].name, player_two[j].individualRun);

        if(balls == 7)
        {
            printf("\t\t********  %d Runs Required from %d balls\n",(target - totalRuns_2),totalOvers*6-(overs* 6 + (balls-1) ) );
        }
        printf("\t\t****************************************************\n");
    }

    if(balls<7)

    {
        printf("\n\t\t********  Total Score : %d/%d\n\t\t********  Overs : %d.%d \n",totalRuns_2,wicket,overs-1,balls);
    }
    else
    {
        printf("\n\t\t********  Total Score : %d/%d\n\t\t********  Overs : %d.0 \n",totalRuns,wicket,overs);
    }
    printf("\t\t********  Extras : %d\n",totalExtra);


    if(totalRuns_2 >= target)
    {
        printf("\n\t\t********  Result : Second team won by %d wickets\n",n-(1+wicket) );
    }
    else if(totalRuns_2 < target)
    {
        printf("\n\t\t********  Result : First team won by %d runs \n",totalRuns-totalRuns_2);
    }
    else if( totalRuns_2 == totalRuns)
    {
        printf("\n\t\t********  Result : Match draw\n");
    }


    printf("\n\t\t********  Batting Details :\n");
    for(x=0;x<n;x++)
    {
        if(strcmp(player_two[x].name,"Did not bat")==0)
        {
            printf("\n\t\t********  This batsman did not Bat\n");
        }
        else
        {
            if((wicket == n-1) && ((strike != i && x == i) || (strike != j && x == j)) )
            {
                printf("\n\t\t********  %s Scored %d runs (Not OUT) \n",player_two[x].name,player_two[x].individualRun);
            }
            else if( wicket < n-1 && (x == i || x == j))
            {
                 printf("\n\t\t********  %s Scored %d runs (Not OUT) \n",player_two[x].name,player_two[x].individualRun);
            }
            else
            {
                printf("\n\n\t\t********  %s Scored %d runs \n",player_two[x].name,player_two[x].individualRun);
            }
        }
    }
    printf("\n\t\t Press any key to return to previous page...");
    scanf("%c",&button);
    getc(stdin);
    system("cls");
    main_menu();
}

