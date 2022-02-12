#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");
    char a[] = "aaaa-mm-dd";
    int dd, mm, aaaa;

    printf("aaaa-mm-dd\n");
    scanf ("%s", a);

    aaaa = ((a[0] - '0') * 1000) + ((a[1] - '0') * 100) + ((a[2] - '0') * 10) + ((a[3] - '0'));
    mm = ((a[5] - '0') * 10) + ((a[6] - '0'));
    dd = ((a[8] - '0') * 10) + ((a[9] - '0'));
    
    printf("dd/mm/aaaa\n");
    if (dd < 10){
        printf("0%d/%d/%d\n", dd, mm, aaaa);
    } else {
        printf("%d/%d/%d\n", dd, mm, aaaa);
    }

return 0;
}