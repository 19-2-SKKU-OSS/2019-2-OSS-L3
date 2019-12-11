#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main(void)
{
    int i,j=0;
    int com[3]={0}; //The variable which save 3 variable from program
    int mine[3]={0}; //The variable which user's input variable
    int strike=0; 
    int ball=0; 
    int game=0; //The variable that have flag of end game
   
 
    while(com[0]==com[1]||com[0]==com[2]||com[1]==com[2]) //If two number are same from three input the loop do not break
    {
        srand((int)time(NULL));//Time variable (Random)
        
        for(i=0; i<3; i++)
        {
        com[i]=(rand()%9)+1;//
        }
    }
 
 
    while(end==0) //If end variable is 0 and until the strike variable are 3
    {
        printf("서로다른 숫자 0~9까지 세개를 입력해주세요.\n");
        for(i=0;i<3;i++)
        {
            scanf("%d",&mine[i]);//
        }
 
        if(mine[0]==mine[1]||mine[0]==mine[2]||mine[1]==mine[2]) //세가지숫자가 하나라도 같으면 게임시작불가능
            {
                printf("입력한 숫자가 중복되었습니다.게임을 다시시작해주세요.\n");
                break; //Out of recent loop
            }
    
 
    
        for(i=0; i<3;i++) //
        {        
            if (com[i]==mine[i]) //computer variable and user variable are same
            {
                strike=strike+1; //++strike variable
            }
        }
 
        for(i=0; i<3;i++) 
        {
            for(j=0; j<3; j++) 
            {
                if(com[i]==mine[j]) //check if there are some same number (each variable)
                {
                    ball=ball+1; //if true, ball++
                    break; 
                }
            }
 
        }
 
        
        game++;
        printf("%d번째 게임 : %d strike %d ball\n",game,strike,ball-strike);
 
        if(strike==3)
        {
            end=1; 
        }
        strike=0; 
        ball=0;
        
 
              
    }   
 
        
    return 0;
}
 
