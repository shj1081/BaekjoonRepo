#include <stdio.h>

int main(){
    int a,b,c,d,e,f;
    
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    for (int x = -999 ; x <= 999 ; x += 1) {
        for (int y = -999 ; y <= 999 ; y += 1) {
            if (a*x + b*y == c && d*x + e*y == f) {
                printf("%d %d", x, y);
                return 0;
            }
        }
    }
    
}