#include<stdio.h>
/* wall #
 * pellets .
 * ghost g
 * pacman p
 */
void map(){
    char map[10][11]={"##########",
             "#........#",
             "#........#",
             "#........#",
             "#........#",
             "#........#",
             "#........#",
             "#........#",
             "#........#",
             "##########"};
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%c",map[i][j]);
        }
        printf("\n");

    }
}
void main(){
map();
}
