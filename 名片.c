#include <stdio.h>

int main(){
    
    char 等级[] = "宇宙霸主        ";
    char 招式[] = "我有一刀，可斩宇宙！";
    char 姓名[] = "罗峰 ";
    char 联系方式[] = "156360164**";
    
    
    printf("╔==========================╗ \n");
    printf("║          名片            ║\n");
    printf("║ 姓名:%s               ║\n",姓名 );
    printf("║ 等级:%s    ║\n", 等级);
    printf("║ 招式:%s║\n", 招式);
    printf("║ 联系方式:%s     ║\n", 联系方式);
    printf("╚==========================╝ ");
    getchar();
    return 0;

}