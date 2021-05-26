/* A simple Tic Tac Toe game. */
#include <stdio.h>
#include <stdlib.h>

/* the tic tac toe matrix */
char matrix[3][3]; 

char check(void);
void init_matrix(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matrix(void);

int main(void) {
    
    char done;
    
    printf("This is the game of Tic Tac Toe.\n");
    printf("You will be playing against the computer.\n");
    done = ' ';

    init_matrix();

    do {
        disp_matrix();
        get_player_move();
        
        /* see if winner */
        done = check(); 
        
        /* winner!*/
        if(done!= ' ') break;
        
        /* see if winner */
        get_computer_move();
       
        done = check();
    } while(done == ' ');

    if(done=='X') {
       printf("You won!\n"); 
    } else {
      printf("I won!!!!\n");
    }
    
    /* show final positions */
    disp_matrix(); 
    return 0;
}


/* Initialize the matrix. */
void init_matrix(void) {
    
    int i, j;
    
    for(i=0; i<3; i++)
    for(j=0; j<3; j++) matrix[i][j] = ' ';
}


/* Get a player's move. */
void get_player_move(void) {
    
    int x, y;
    
    printf("Enter X,Y coordinates for your move: ");
    // put a digit a character and another digit
    scanf("%d%*c%d", &x, &y);
    x--; y--;

    if(matrix[x][y]!= ' '){
        printf("Invalid move, try again.\n");
        get_player_move();
    } else {
        matrix[x][y] = 'X';   
    } 
}


/* Get a move from the computer. */
void get_computer_move(void) {
  
    int i, j;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++) {
          if(matrix[i][j] == ' ') break;  
        }
        // If j for is braked parent for i also should be braked
        if(matrix[i][j] == ' '){
            break;
        }

    }
    
    if(i*j==9) {
        printf("draw\n");
        exit(0);
    } else {
      matrix[i][j] = 'O';  
    }
}

/* Display the matrix on the screen. */
void disp_matrix(void) {

    int t;

    for(t=0; t<3; t++) {
        // Show the X or O chosen by de player and computer
        printf(" %c | %c | %c ",matrix[t][0],
        matrix[t][1], matrix [t][2]);
        
        if(t!=2) {
        printf("\n---|---|---\n");  
        } 
    }

    printf("\n");

}

/* See if there is a winner. */
char check(void) {
int i;

/* check rows */
/* Check if the same symbol is in all row
   XXX or OOO   
*/
for(i=0; i<3; i++) {
  if(matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2]) {
     return matrix[i][0];  
  }   
}


/* check columns */
for(i=0; i<3; i++) {

    if(matrix[0][i] == matrix[1][i] && matrix[0][i] == matrix[2][i]) {
        return matrix[0][i];  
    } 

    /*  Test diagonals */
    /*  Test  Left Diagonal  */
    if(matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2]) {
        return matrix[0][0];
    }

    /*  Test diagonals */
    /*  Test RIGHT Diagonal  */
    if(matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0]) {
         return matrix[0][2]; 
    }   
}

return ' ';

}