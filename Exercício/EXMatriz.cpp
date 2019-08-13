#include <iostream>

using namespace std;

int main(){
	int m[3][3] = { {5, 6, 3}, {9, 7, 1}, {10,44,3} };
	int min, line;
	
	for(int i=0; i<3; i++){
		cout << "\n";
		for(int j=0; j<3; j++){
			cout << m[i][j] << " ";
			if( m[i][j] < min){
				min = m[i][j];
				line = i+1;
			}
		}
	}
	cout <<"\n\nO menor valor da matriz e: " << min << " na linha: " << line;
	return 0;
}
