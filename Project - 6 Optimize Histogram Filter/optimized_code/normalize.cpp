#include "headers/normalize.h"
using namespace std;

// OPTIMIZATION: Pass variable by reference
vector< vector<float> > normalize(vector< vector <float> > grid) {

  	// OPTIMIZATION: Avoid declaring and defining 				// intermediate variables that are not needed.
	float total = 0.0;
	static int i, j;
	vector<float> row;
	vector<float> newRow;
	float oldProb;
	for (i = 0; i < grid.size(); i++)
	{
		row = grid[i];
		for (j=0; j< row.size(); j++)
		{
			total += row[j];
			//total += oldProb;
		}
	}

	//vector< vector<float> > newGrid;
	for (j=0; j< grid[i].size(); j++) {
			float newProb = grid[i][j] / total;
			newRow.push_back(newProb);
	}
	for (i = 0; i < grid.size(); i++) {
		grid.push_back(newRow);
	}

	return grid;
}
