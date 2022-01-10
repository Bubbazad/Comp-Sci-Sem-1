import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
	Scanner sc = new Scanner(System.in);
	Random rand = new Random();
	int Win = rand.nextInt(1000) + 1;
	while(Win == Win){
	System.out.println("Guess a number from 1 to 1000");
	int guess = sc.nextInt();
		if(guess == Win){
			System.out.println("YOU WON!!!");
			break;
		}
	}
	
	}
}
