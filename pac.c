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
int tile_check(int r, int c){
    char pos = map[r][c];
    if(pos=='#')
        return 0;
    else if(pos=='.')
        return 1;
    else if(pos=='g')
        return 2;
    else
        return -1;
}
int classify(int check){
    if(check==0){
        printf("Invalid position\n");
        return 0;
    }
    else if(check==1||check==-1){
        printf("Valid position\n");
        return 1;
    }
    else if(check==2){
        printf("YOU DIED\n");
        return 2;
    }
}
void display_perm(int perm){
    if(perm==1){
        mapdisplay(map);
        return;
    }
    else
        return;
}
void main(){
    pc=0;
    pr=3;
    int check=tile_check(pr,pc);
    int perm=classify(check);

}
