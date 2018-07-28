#include <stdio.h>
#include <stdlib.h>

void repeat(char *s);
void scramble(char *s);
void repeat(char *s);

int main()
{
    char *s = malloc(1001*sizeof(char));
    printf("Enter a message:\n");
    gets(s);
    printf("What do you want to do with this?\n");
    printf("Do you want to repeat?\n");
    char *a = malloc(20*sizeof(char));
    scanf("%s",a);
    if (a[0]=='y' || a[0]=='Y'){
        repeat(s);
    }
    printf("Do you want to scramble?\n");
    scanf("%s",a);
    if (a[0]=='y' || a[0]=='Y'){
        scramble(s);
    }
}

void scramble(char *s){
    printf("Enter a seed:\n");
    int n;
    scanf("%d", &n);
    for(int i = 0; s[i]!=NULL; i++){
        s[i] = (s[i] - 'A' + n) % 256;
    }
    printf("%s\n",s);

    printf("Do you want to decode?\n");
    char *x = malloc(20*sizeof(char));
    scanf("%s",x);
    if(x[0]=='Y' || x[0]=='y'){
        printf("Enter your seed:\n");
        scanf("%d", &n);
        for(int i = 0; s[i]!=NULL; i++){
            s[i] = (s[i] + 'A' - n) % 256;
        }
        printf("%s",s);
    }
}

void repeat(char *s){
    printf("How many times do you want to repeat this?\n");
    int times;
    scanf("%d", &times);
    printf("\n");
    for(int x = 0; x < times; x++){
    printf("%s\t",s);
    }
    printf("\n");
}
