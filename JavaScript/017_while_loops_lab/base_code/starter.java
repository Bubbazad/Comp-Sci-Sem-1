import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
		Scanner sc = new Scanner(System.in);
		System.out.println("USER GIVE ME YOUR NAME!");
		String Name = sc.nextLine();
		System.out.println("How Many times do you want me to yell your name into the abyssal darkness that is life");
		int Num = sc.nextInt();
	int count = 0;
	while(count != Num){
		System.out.println(Name);
		count = count + 1;
	}

	}
}
