// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char Sym = '@';
	gotoxy(19, 4);
	int count = 0;
	while(count != 12){
	cout<<Sym;
	count = count + 1;
	}
	count = 0;
	int Y = 4;
	while(count != 5){
	gotoxy(19, Y);
	cout<<Sym;
	count = count + 1;
	Y = Y + 1;
	}
	gotoxy(19, 8);
	count = 0;
	while(count != 12){
	cout<<Sym;
	count = count + 1;
	}
	count = 0;
	Y = 4;
	while(count != 5){
	gotoxy(30, Y);
	cout<<Sym;
	count = count + 1;
	Y = Y + 1;
	}
	////////////////////
	gotoxy(24,6);
	cout<<random(100);
	///////////////////
	char key;
	gotoxy(1,10);
	cout<<"Enter q to quit and anything else for a new random number";
	cin>>key;
	while(true){
	if(key == 'q'){
		break;
	}
	else{
		gotoxy(24,6);
		cout<<random(99);
		gotoxy(1,10);
		cout<<"Enter q to quit and anything else for a new random number";
		cin>>key;
	}
	}
}
