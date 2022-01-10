// base code file
#include "./hfiles/poole.h"
#include <thread>
///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x;
	int z;
	cout<<"How tall is your pesent?"<<endl;
	cin>>z;
	cout<<"How wide is your pesent?"<<endl;
	cin>>x;
	gotoxy(0,5);
	cout<<"	   *                   "<<endl;
	cout<<"          /^\\          "<<endl;
	cout<<"	 /^ 0\\	               "<<endl;
	cout<<"        /^ ^ ^\\        "<<endl;      
	cout<<"       /^ 0 ^ ^\\       "<<endl;          
	cout<<"      /^ ^ ^ 0 ^\\      "<<endl;                
	cout<<"     /^ 0 ^ ^ ^ ^\\     "<<endl;               
	cout<<"    /^ ^ ^ 0 ^ ^ ^\\    "<<endl;              
	cout<<"   /^ 0 ^ ^ ^ ^ 0 ^\\   "<<endl;             
	cout<<"  /^ ^ ^ ^ 0 ^ ^ ^ ^\\  "<<endl;             
	cout<<" /^_0_^_^_^_^_^_^_0_^\\ "<<endl;               
	cout<<"        |__|            "<<endl; 
	for(int i = 0; i < x; i++){
		for(int j = 0; j < z; j++){
			gotoxy(30 + i,10 + j);
			cout<<"#";
		}
	}
	int s;
 for(int f = 0; f != 100; f++){
	for(s = 0; s < 20; s++){
		gotoxy(10,4+s);
		cout<<"."<<endl;
		gotoxy(15,7+s);
		cout<<"."<<endl;
		gotoxy(20,5+s);
		cout<<"."<<endl;
		this_thread::sleep_for(chrono::milliseconds(100));
		gotoxy(10,4+s);
		cout<<" ";
		gotoxy(15,7+s);
		cout<<" ";
		gotoxy(20,5+s);
		cout<<" ";
	}
 }	
}