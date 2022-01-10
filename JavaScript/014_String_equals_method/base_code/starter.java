import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("Greetings Adventurer! What role do you want to play! Rogue, Warrior, or Wizard!");
		String Role = sc.nextLine();
		// System.out.println(Role.equals("Wizard"));
		if (Role.equals("Wizard") || Role.equals("Warrior") || Role.equals("Rogue")){
			System.out.println("Good Choice!");
		}
		else{
			System.out.println("That is not a role. Please try again later.");
		}
	}
}
