#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
    //printf("游戏开始\n");
    char ret = 0;
    char board[ROW][COL] = { 0 };
    InitBoard(board, ROW, COL);//初始化棋盘
    DisplayBoard(board, ROW, COL);//打印棋盘

    srand((unsigned int)time(NULL));//设置随机数生成的起点

    while (1)
    {
        PlayerMove(board, ROW, COL);//玩家下棋
        ret = IsWin(board, ROW, COL);//判断输赢
        if (ret != 'C')
        {
            break;
        }
        DisplayBoard(board, ROW, COL);

        ComputerMove(board, ROW, COL);//电脑下棋
        ret = IsWin(board, ROW, COL);//判断输赢
        if (ret != 'C')
        {
            break;
        }
        DisplayBoard(board, ROW, COL);

    }

    if (ret == '*')
    {
        printf("\n玩家获胜!!!!!!!!!!!!!!!!\n");
    }
    else if (ret == '#')
    {
        printf("\n电脑获胜!!!!!!!!!!!!!!!!\n");
    }
    else
    {
        printf("\n平局\n");
    }
    DisplayBoard(board, ROW, COL);//打印棋盘
    

  
}

void menu()
{
    printf("********************\n");
    printf("***1.play  0.exit***\n");
    printf("********************\n");
}


int main()
{
    int input = 0;
    do
    {
        menu();
        printf("请选择：>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("\n已退出");
            break;
        default:
            printf("\n选择错误，请重新输入\n");
            break;
        }
    } while (input);

    return 0;
}