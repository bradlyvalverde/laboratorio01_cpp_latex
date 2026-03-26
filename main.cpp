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
	double x;
	cout << "x =";
	cin >> x;
	
	cout <<"|"<< valorAbs(x)<<"|";
	
	return 0;
}

