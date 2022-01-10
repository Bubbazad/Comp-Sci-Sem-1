import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		Random rand = new Random();
		System.out.println("Pick a number between 1 and 1000");
		int guess_num = sc.nextInt();
		int rand_num = rand.nextInt(1000) + 1;
		if(guess_num == rand_num){
			System.out.println("YOU WIN!!");
		}
		else if(guess_num > rand_num){
			System.out.println("A little too high");
		}
		else if(guess_num < rand_num){
			System.out.println("A little too low");
		}
		else{
			System.out.println("Loser!");
		}
	}
}
