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
          "#......g.#",
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
int tile_checko(int r, int c){
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
        printf("Skill Issue\n");
        return 0;
    }
    else if(check==1||check==-1){
        printf("Valid position\n");
        return 1;
    }
    else if(check==2){
        printf("WOMP WOMP\n");
        return 2;
    }
    else {
        return -1;
    }
}
void main(){
    pr=4;
    pc=4;
    int runno = 1;

        while(runno){
            mapdisplay(map);

            char move;
            printf("Enter move (w/a/s/d, q to quit): ");
            scanf(" %c", &move);

            if(move == 'q'){
                printf("Quitting game...\n");
                break;
            }

            int new_pr = pr;
            int new_pc = pc;

            if(move=='w') new_pr--;
            else if(move=='s') new_pr++;
            else if(move=='a') new_pc--;
            else if(move=='d') new_pc++;
            else{
                printf("Invalid move\n");
                continue;
            }

            int check = tile_checko(new_pr, new_pc);
            int perm = classify(check);

            if(perm == 1){
                pr = new_pr;
                pc = new_pc;
            }
            else if(perm == 2){
                printf("Game Over!\n");
                runno = 0;
            }
        }
    }
