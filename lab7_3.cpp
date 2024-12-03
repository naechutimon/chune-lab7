#include<iostream>
using namespace std;

char before(char x){
	char N = x-1;
	
    
	if (65<=int (N)&&int (N)<=90){
		return (N) ;
	}
	if (x-1=='@'){
		return 'Z';
	}
	else{
		return '0' ;
	}
	
	
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
