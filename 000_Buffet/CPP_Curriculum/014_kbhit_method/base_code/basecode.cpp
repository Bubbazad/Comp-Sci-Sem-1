// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
		char Sym = '_';
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
	///////////////////////
	while(true){
	char key = getch();
	if(key == ' '){
	while(kbhit() == 0){
	gotoxy(24,6);
	cout<<random(100);
    }
	}
	else if(key == 'q'){
    	break;
    }
}
}