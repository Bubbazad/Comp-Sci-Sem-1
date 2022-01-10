// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char Sym;
	int one;
	int two;
	char Opr;
	int Answer;
	cout<<"Charcter"<<endl;
	cin>>Sym;
	cout<<"1st integer"<<endl;
	cin>>one;
	cout<<"2nd integer"<<endl;
	cin>>two;
	cout<<"Operation"<<endl;
	cin>>Opr;
	if(Opr == '+'){
	Answer = one + two;
	}
	else if(Opr == '*'){
	Answer = one * two;
	}
	else if(Opr == '-'){
	Answer = one - two;
	}
	else if(Opr == '/'){
	Answer = one / two;
	}
	gotoxy(20, 5);
	cout<< one << " " << Opr << " " << two << " = " << Answer<<endl;
	
	gotoxy(19, 4);
	int count = 0;
	while(count != 11){
	cout<<Sym;
	count = count + 1;
	}
	count = 0;
	int Y = 4;
	while(count != 3){
	gotoxy(19, Y);
	cout<<Sym;
	count = count + 1;
	Y = Y + 1;
	}
	gotoxy(19, 6);
	count = 0;
	while(count != 11){
	cout<<Sym;
	count = count + 1;
	}
	count = 0;
	Y = 4;
	while(count != 3){
	gotoxy(29, Y);
	cout<<Sym;
	count = count + 1;
	Y = Y + 1;
	}
}
