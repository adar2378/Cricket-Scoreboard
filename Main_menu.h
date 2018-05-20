void main_menu()
{
    int i;
    char input,garbage;

    for(i=0;i<1;)
    {
        headertitle();
        printf("\n\t\t Menu:");
        printf("\n\t\t [1]. Start");
        printf("\n\t\t [2]. Instructions");
        printf("\n\t\t [3]. About");
        printf("\n\t\t [4]. Exit");
        printf("\n\t\t Enter Your Choice: ");
        scanf("%c",&input);
        system("cls");
        if(input==49)
        {
            innings();
        }
        else if(input==50)
        {
            headertitle();
            printf("\n\t\t When Entering Result per ball\n\t\t Enter only 1,2,3,4 and 6 to store run\n\t\t Press 'W' or 'w' when a wicket falls\n");
            printf("\t\t Press 'B' or 'b' Bye or Leg bye runs\n");
            printf("\t\t Press 'e' or 'E' for extra runs like No Ball or Wide \n");
            printf("\n\t\t Press any key to return to previous page...");
            scanf("%c",&garbage);
            getc(stdin);
            system("cls");
            main_menu();
        }
        else if(input==51)
        {
            headertitle();
            printf("\n\t\t Cricket Scoreboard.\n\t\t A console based software to help people to store \n\t\t the score of their own cricket match!! \n");
            printf("\n\n\t\t Developed by ");
            Sleep(300);
            printf("S");
            Sleep(300);

            printf("a");
            Sleep(300);
            printf("i");
            Sleep(300);
            printf("f, ");
            printf("A");
            Sleep(300);
            printf("d");
            Sleep(300);
            printf("a");
            Sleep(300);
            printf("r & ");
            Sleep(300);
            printf("N");
            Sleep(300);
            printf("a");
            Sleep(300);
            printf("z");
            Sleep(300);
            printf("m");
            Sleep(300);
            printf("u");
            Sleep(300);
            printf("s.\n");
            Sleep(300);
            printf("\n\t\t Press any key to return to previous page...");
            scanf("%c",&garbage);
            getc(stdin);
            system("cls");
            main_menu();
        }
        else if(input==52)
        {
            exit(0);
        }
    }
}
