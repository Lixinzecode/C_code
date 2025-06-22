#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
    //printf("��Ϸ��ʼ\n");
    char ret = 0;
    char board[ROW][COL] = { 0 };
    InitBoard(board, ROW, COL);//��ʼ������
    DisplayBoard(board, ROW, COL);//��ӡ����

    srand((unsigned int)time(NULL));//������������ɵ����

    while (1)
    {
        PlayerMove(board, ROW, COL);//�������
        ret = IsWin(board, ROW, COL);//�ж���Ӯ
        if (ret != 'C')
        {
            break;
        }
        DisplayBoard(board, ROW, COL);

        ComputerMove(board, ROW, COL);//��������
        ret = IsWin(board, ROW, COL);//�ж���Ӯ
        if (ret != 'C')
        {
            break;
        }
        DisplayBoard(board, ROW, COL);

    }

    if (ret == '*')
    {
        printf("\n��һ�ʤ!!!!!!!!!!!!!!!!\n");
    }
    else if (ret == '#')
    {
        printf("\n���Ի�ʤ!!!!!!!!!!!!!!!!\n");
    }
    else
    {
        printf("\nƽ��\n");
    }
    DisplayBoard(board, ROW, COL);//��ӡ����
    

  
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
        printf("��ѡ��>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("\n���˳�");
            break;
        default:
            printf("\nѡ���������������\n");
            break;
        }
    } while (input);

    return 0;
}