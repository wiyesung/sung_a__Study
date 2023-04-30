#include <stdio.h>

int main() 
{
    int temp, sum = 0;

    FILE* fa = fopen("a.txt", "r");
    FILE* fb = fopen("b.txt", "w");

    if(!fa || !fb) {
        fprintf(stdout, "파일열기실패");    // stdout, stdin, stderr
        return 1;
    }

    for(int i=0; i<10; i++) {
        fscanf(fa, "%d", &temp);    
        sum += temp;
    }

    fprintf(fb, "합계: %d\n", sum);
    fprintf(fb, "평균: %.1f\n", (double)sum/10);

    fclose(fa);
    fclose(fb);

    return 0;
}
