#include <bits/stdc++.h>
using namespace std;

/*global vectors to store previously placed queens*/
vector<vector<int>> prevd;
vector<int> prevc;

/* Function to print solution */
void printBoard(vector<vector<int>> chess)
{
	int N = chess.size();
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N;j++) {
			cout<<chess[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool isValid(vector<vector<int>> chess, int r, int c)
{
	int N = chess.size();

	/* Check this column only upward */
	if(prevc[c] == 1) return false;

	/* Check upper diagonal on right side */
	if(prevd[r+c][0] == 1) return false;

	/* Check upper diagonal on left side */
	if(prevd[r-c+N-1][1] == 1) return false;

	return true;
}

/* Recursive function for N-Queen Problem*/
bool recurNqueen(vector<vector<int>> chess, int r,int N)
{
	/* if no queens are left to place
	we return true. */
	if (r >= N)
		printBoard(chess);
		return true;

	for (int i = 0; i < N; i++) {
		/*Check if placing queen to chess[r][i] is valid.*/
		if (isValid(chess, r, i)) {
			/* Place this queen in chess[r][i] and mark 
                  the respective column , right and left diagonal. */
			chess[r][i] = 1;
			prevc[i] = 1;
			prevd[r+i][0] = 1;
			prevd[r-i+N-1][1] = 1;
			
			/* move ahead for next row */
			if (recurNqueen(chess, r + 1,N))
				return true;

			/* Backtracking */
		chess[r][i] = 0;
			prevc[i] = 0;
			prevd[r+i][0] = 0;
			prevd[r-i+N-1][1] = 0;
		}
	}

	/* If the queen cannot be placed in any column for
	the given row we return false.*/
	return false;
}

void NQueen(int N)
{
	/* creating chess board of NxN and initialising it with 0*/
	vector<vector<int>> chess(N,vector<int>(N,0));
	
	/*creating and initializing global vector to store answers 
	for prev diagonals and columns.*/
	prevd.resize(2*N,vector<int> (2,0));
	prevc.resize(N,0);

	/*initialising the recursive function from 0th row*/
	if (recurNqueen(chess, 0, N) == 0) {
		/* if no solution exists the recursive function will end up 
		returning false.*/
		cout<<"Solution Do not exist for "<<N<<" Queens ";
		return;
	}
	/* else solution exists and printing out the solution*/
	printBoard(chess);
	return;
}