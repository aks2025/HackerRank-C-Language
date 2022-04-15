#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){
    int greatest;
        if(a>b){
            if(a>c){
                if(a>d){
                    greatest=a;
                }
                else{
                   greatest=d; 
                }
            }
            else if(c>d){
                greatest=c;
            }
            else{
                greatest=d;
            }
        }
        else{
            if(b>c){
                if(b>d){
                    greatest=b;
                }
                else{
                   greatest=d; 
                }
            }
            else if(c>d){
                greatest=c;
            }
            else{
                greatest=d;
            }
        }
    return greatest;
    }
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
