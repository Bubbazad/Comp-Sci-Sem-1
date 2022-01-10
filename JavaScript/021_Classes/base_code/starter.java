import java.util.Scanner;
import java.util.Random;

class Char{
	String role = new String("Wizard");
	int Str = 10;
	int Dex = 10;
	int Con = 10;
	int Int = 10;
	int Wis = 10;
	int Cha = 10;
}
class starter {
	public static void main(String args[]) {
		Char myChar = new Char(); 
		System.out.println(myChar.role);
		System.out.println(myChar.Str);
		System.out.println(myChar.Dex);
		System.out.println(myChar.Con);
		System.out.println(myChar.Int);
		System.out.println(myChar.Wis);
		System.out.println(myChar.Cha);
	}
}
