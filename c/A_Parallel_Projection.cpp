#include <iostream>
#include <math.h>
#include <vector>
#include <ctime> /* time(0) */
//#include <cstdlib> /* rand() */
using namespace std;
int N;/* value of N in N*N board */

/* generateRandomBoard -> initializes board
with random values. Starting point of Hill Climbing */
void generateRandomBoard(vector<vector<bool>>& board, vector<int>& state)
{
    /* To get different values of rand()
     everytime program runs, seed set to time(0). Varies with time */
	srand(time(0));
    
	/* i -> column variation
	   state[i] -> row variation */
	for (int i = 0; i < N; i++) {

		/* Pick a random row index &
		   mark board[row][col] to 1 */
		state[i] = rand() % N;
		board[state[i]][i] = 1;
	}
}
/* copies state from source to target */
void cpyState(vector<int>& target, vector<int>& source){
    for(int i=0; i<N; i++)
        target[i] = source[i];
}
/* generates board with given state */
void gnrteBrd(vector<vector<bool>>& board, vector<int>& state){
    board = vector<vector<bool>>(N,vector<bool>(N,0));/* zeroes the board*/
    for(int i=0; i<N; i++){
        board[state[i]][i] = 1;
    }
}
/* prints the board(solution if exists) */
void coutBoard(vector<vector<bool>>& board)
{
	for(int i=0; i<N ; i++){
        for(int j=0; j<N; j++)
            cout<<board[i][j]<<" ";
        cout<<endl;
    }
}
/* 	Checks if both states are equal or not 
	returns true if equal. i.e optimal state reached 
	(current better than all neighbours)	*/
bool cmpStates(vector<int>& A, vector<int>& B)
{
	for (int i = 0; i < N; i++) {
		if (A[i] != B[i])
			return false;
	}
	return true;
}
/* Calculates the cost of state (No of possible pairs of attacks)*/
int calculateCost(vector<vector<bool>>& board, vector<int>& state){
    int attacks = 0;
    int r = 0,c = 0;
    for(int i=0; i<N; i++){
        r = state[i], c = i-1;
        while(c>=0 && board[r][c]!=1)c--;
        if(c>=0 && board[r][c]==1)attacks++;

        r = state[i], c = i+1;
        while(c<N && board[r][c]!=1)c++;
        if(c<N && board[r][c]==1)attacks++;

        r = state[i]-1, c = i-1;
        while(c>=0 && r>=0 && board[r][c]!=1)c--,r--;
        if(c>=0 && r>=0 && board[r][c]==1)attacks++;

        r = state[i]+1, c = i+1;
        while(c<N && r<N && board[r][c]!=1)c++,r++;
        if(c<N && r<N && board[r][c]==1)attacks++;

        r = state[i]-1, c = i+1;
        while(c<N && r>=0 && board[r][c]!=1)r--,c++;
        if(c<N && r>=0 && board[r][c]==1)attacks++;

        r = state[i]+1, c = i-1;
        while(c>=0 && r<N && board[r][c]!=1)r++,c--;
        if(c>=0 && r<N && board[r][c]==1)attacks++;
    }
    return attacks/2;   // pair of attacks
}
void bestNeighbour(vector<vector<bool>>& board, vector<int>& state){
    vector<int> betterState(N);
    vector<vector<bool>> betterBoard(N,vector<bool>(N,0));
    cpyState(betterState, state);
    gnrteBrd(betterBoard,betterState);
    int betterCost = calculateCost(betterBoard,betterState);
    vector<int> neighbourState(N);
    vector<vector<bool>>neighbourBoard(N,vector<bool>(N,0));
    cpyState(neighbourState,betterState);
    gnrteBrd(neighbourBoard,neighbourState);

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(j!=state[i]){
                neighbourState[i] = j;
                neighbourBoard[state[i]][i] = 0;
                neighbourBoard[j][i] = 1;
        
                int tempCost = calculateCost(neighbourBoard,neighbourState);
                /* if cost reduces, copy state,board and explore further neighbours */
                if(tempCost<=betterCost){
                    betterCost = tempCost;
                    cpyState(betterState,neighbourState);
                    gnrteBrd(betterBoard,betterState);
                }

                /* return to original state for exploring next neighbours to get best neighbour */
                neighbourBoard[j][i] = 0;
                neighbourState[i] = state[i];
                neighbourBoard[state[i]][i] =1;
                
            }
        }
    }
    cpyState(state, betterState);
    gnrteBrd(board, state);
}
/* Hill Climbing Function */
void startClimbing(vector<vector<bool>>& board, vector<int>& state){
    vector<int> neighbourState(N);
    vector<vector<bool>> neighbourBoard(N,vector<bool>(N,0));
    cpyState(neighbourState, state);/* neighbourState <- state */
    gnrteBrd(neighbourBoard, neighbourState);/* neighbourBoard <- board */
    while(1){
        cpyState(state, neighbourState);
        gnrteBrd(board, state);
        /* state <- neighbourState, board <- neighbourBoard */
        bestNeighbour(neighbourBoard, neighbourState);

        if(cmpStates(state, neighbourState) && calculateCost(board,state)==0){
            /* if cost values of all neighbours is worse than curr state
            and cost = 0,
            then print board and exit */
            coutBoard(board);
            //cout<<calculateCost(board, state);
            break;
        }else if(calculateCost(board,state)==
        calculateCost(neighbourBoard,neighbourState)){
            /* plateau */
            neighbourState[rand()%N] = rand()%N;
            /* go to any random neighbour */

            gnrteBrd(neighbourBoard, neighbourState);
        }
    }
}
int main(){
    /* state[j] = i ==> Queen at ith row and jth column */
    cin>>N; /* input N */
    vector<int> state(N);
    vector<vector<bool>> board(N,vector<bool>(N,0));/* Initailly all 0's */
    generateRandomBoard(board, state);/* Initialization of state and board */
    startClimbing(board,state); /* Hill Climbing starts... */
    return 0;
}