#include "headers/sense.h" //headers/

using namespace std;

// OPTIMIZATION: Pass larger variables by reference
vector< vector <float> > sense(char color, vector< vector <char> > grid, vector< vector <float> > beliefs,  float p_hit, float p_miss) 
{
	// OPTIMIZATION: Is the newGrid variable necessary?
  	// Could the beliefs input variable be updated directly?
  	//vector< vector <float> > newGrid;
	vector<float> newRow;

	float prior, p;

	//char cell;

	int i, j;
	//height = grid.size();
	//width = grid.size();
	for (j=0; j<grid[0].size(); j++) {
          	// OPTIMIZATION: Which of these variables are 					needed?
			prior = beliefs[i][j];
			//cell = grid[i][j];
			if (grid[i][j] == color) {
				p = prior * p_hit;
			}
            // OPTIMIZATION: if else statements might be 
          	// 	faster than two if statements
			else {
				p = prior * p_miss;
			}
			newRow.push_back(p);
		}
	for (i=0; i<grid.size(); i++) {
		beliefs.push_back(newRow);
	}

	return beliefs;
}
