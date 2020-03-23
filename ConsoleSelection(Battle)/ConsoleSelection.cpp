//#include <iostream>
//#include <vector>
//#include <windows.h>
//#include <stdlib.h>
//using namespace std;
//
//void printMatrix(vector<vector<int>>& matrix) {
//	system("cls");
//	for (int i = 0; i < matrix.size(); i++) {
//		for (int j = 0; j < matrix[i].size(); j++) {
//			cout << matrix[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	CONSOLE_SELECTION_INFO selectionInf;
//	vector<vector<int> > matrix;
//	int a = 10, b = 10;
//	for (int i = 0; i < a; i++)
//	{
//		vector<int> tempVect;
//		for (int j = 0; j < b; j++)
//		{
//			tempVect.push_back(0);
//		}
//		matrix.push_back(tempVect);
//	}
//
//	printMatrix(matrix);
//
//
//	while (true) {
//		GetConsoleSelectionInfo(&selectionInf);
//		int x1= selectionInf.dwSelectionAnchor.X;
//		int y1 = selectionInf.dwSelectionAnchor.Y;
//		int isTrue1 = selectionInf.dwFlags;
//		if (isTrue1) {
//			printMatrix(matrix);
//			while (true) {
//				GetConsoleSelectionInfo(&selectionInf);
//				int x2 = selectionInf.dwSelectionAnchor.X;
//				int y2 = selectionInf.dwSelectionAnchor.Y;
//				int isTrue2 = selectionInf.dwFlags;
//				if (isTrue2) {
//					for (int i = y1; i <= y2; i++) {
//						for (int j = x1; j <= x2; j++) {
//							matrix[i][j / 3] = 1;
//						}
//					}
//					printMatrix(matrix);
//					break;
//				}
//				
//			}
//		}
//	}
//
//
//
//}