#include<iostream>
using namespace std;

double valorAbs(double &abs){
	if(abs >= 0){
		return abs;
	}else{
		if(abs < 0){
			abs = abs * -1;
			return abs;
		}
	}
}

int main (int argc, char *argv[]) {
	double abs;
	cout << "x =";
	cin >> abs;
	
	cout <<"|"<< valorAbs(abs)<<"|";
	
	return 0;
}

