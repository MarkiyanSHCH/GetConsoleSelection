#include <iostream>
#include <vector>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

void printMatrix(vector<vector<int>>& matrix) {
	system("cls");
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++) {
			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}
}


bool check(vector<vector<int>>& matrix, int& x_def, int& x_rand, int& y_def, int& y_rand, int i, int j) {
	if (matrix[i][j] != 3) {
		if (matrix[i][j] == 1) {
			x_def = j; y_def = i;
			y_rand = i; x_rand = j;
			return true;
		}
		else if (matrix[i][j] != 2) {
			matrix[i][j] = 3;
		}

	}

}


int main() {
	vector<vector<int> > matrix;
	int a = 10, b = 10;
	for (int i = 0; i < a; i++)
	{
		vector<int> tempVect;
		for (int j = 0; j < b; j++)
		{
			tempVect.push_back(0);
		}
		matrix.push_back(tempVect);
	}

	printMatrix(matrix);


	matrix[2][2] = 1;
	matrix[3][2] = 1;
	matrix[4][2] = 1;
	matrix[5][2] = 1;




	srand(time(0));
	while (true) {
		int x_rand = rand() % b;
		int y_rand = 3;//rand() % a;
		int x_def = 2, y_def = -1;
		if (matrix[y_rand][x_rand] == 1) {
			while (true) {
				matrix[y_rand][x_rand] = 2;
				int x_from = x_rand - 1, x_to = x_rand + 1, y_from = y_rand - 1, y_to = y_rand + 1;
				if (x_def == x_rand) {
					bool isTrue = false;
					while (true) {
						for (int i = y_from; i <= y_to; i++) {
							if (i == y_rand) { continue; }
							isTrue = check(matrix, x_def, x_rand, y_def, y_rand, i, x_rand);
							printMatrix(matrix);
						}
						if (isTrue) { break; }
					}


				}
				else if (y_def == y_rand) {
					int j = rand() % (x_to - x_from + 1) + x_from;
					check(matrix, x_def, j, y_def, y_rand, y_rand, j);
				}
				else {
					int i = rand() % (y_to - y_from + 1) + y_from;
					int j = rand() % (x_to - x_from + 1) + x_from;
					check(matrix, x_def, x_rand, y_def, y_rand, i, j);
				}


			}

		}
	}

}