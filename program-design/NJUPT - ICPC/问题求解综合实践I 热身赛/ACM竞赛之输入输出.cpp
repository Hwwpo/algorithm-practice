#include<stdio.h>


int main(){
    int N, i;
    scanf("%d", &N);
    char ch = getchar();
    char str[N][1000];
    char extra[1000];
    int len = 0;
    for(i=0; i<N; i++){
        gets(str[i]);
    }
    for(i=0; i<N; i++){
        printf("%s\n\n", str[i]);
    }
    for(i=0; scanf("%c", &extra[i]) != EOF; i++)\
    {
        len++;
    }
    
    for(i=0; i < len; i++){
        if(extra[i] == ' '||extra[i] == '\n')
        {
            printf("\n\n");
            continue;
        }
        printf("%c", extra[i]);
    }
    return 0;
}
