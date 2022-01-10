// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x;
	int y;
	char Loop = 'Y';
	char Opr;
	while(Loop == 'Y'){
	cout<<"Please enter a number"<<endl;
	cin>> x;
	cout<<"Please enter another number"<<endl;
	cin>> y;
	cout<<"Please enter an operatuon"<<endl;
	cin>> Opr;
	if(Opr == '*'){
		cout<< x * y;
	}
	else if(Opr == '-'){
		cout<< x - y;
	}
	else if(Opr == '/'){
		cout<< x / y;
	}
	else if(Opr == '+'){
		cout<< x + y;
	}
	else{
		cout<< "ERROR!";
	}
	cout<< " is your answer!"<<endl;
	cout<< "Would you like to continue?"<<endl;
	cout<< "Y or N?"<<endl;
	cin>> Loop;
	}
}