#include<stdio.h>

int main(void)
{   
    int num;
    printf("Enter the Number you want tables for: ");
    scanf("%d", &num);
    for (int current_table=0; current_table <= 10; current_table++) {
        printf("%d * %d = %d\n", num, current_table, num*current_table);
    };
    printf("done");
    return 0;
}
