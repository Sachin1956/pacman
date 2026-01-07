#include<stdio.h>
/* wall #
 * pellets .
 * ghost g
 * pacman p
 */
int pc,pr;
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
void mapdisplay(char map[10][11]){

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i==pr&&j==pc)
                printf("p");
            else
                printf("%c",map[i][j]);
        }
        printf("\n");

    }
}
void main(){
    pc=3;
    pr=3;
mapdisplay(map);
}
