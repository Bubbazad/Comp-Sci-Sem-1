// base code file
#include "./hfiles/poole.h"
	// framedbox(12,12,5,8,'&');
	// drawbox(2,2,4,8,'^');
	// drawline(10,3,10,'$');
///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	double $$$;
	int a = random(9) - 1;
	int b = random(9) - 1;
	int c = random(9) - 1;
	cout<<"Hello Welcome to the Con-Croc Casino! How much money will you be spending today!"<<endl;
	cin>>$$$;
	framedbox(1,4,16,61,'-');
	framedbox(5,6,8,13,'$');
	framedbox(25,6,8,13,'$');
	framedbox(45,6,8,13,'$');
	framedbox(28,15,3,7,'#');
	gotoxy(30,16);
	cout<<$$$ - 5;
	char $ = getch();
	$$$ = $$$ - 5;
	while(kbhit() == 0){
	gotoxy(11,9);
	cout<<random(9) - 1;
	gotoxy(31,9);
	cout<<random(9) - 1;
	gotoxy(51,9);
	cout<<random(9) - 1;
	}
	gotoxy(11,9);
	cout<<a;
	gotoxy(31,9);
	cout<<b;
	gotoxy(51,9);
	cout<<c;
	if(a == b && a == c){
		$$$ = $$$ + 1000;
		gotoxy(30,16);
		cout<<$$$;
	}
	else if(a == b || a == c || b == c ){
		$$$ = $$$ + 200;
		gotoxy(30,16);
		cout<<$$$;
	}
	else if(a == 7 && b == 7 && c == 7){
		$$$ = 1000000;
		gotoxy(30,16);
		cout<<$$$;
	}
	
}
