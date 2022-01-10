import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	Scanner sc = new Scanner(System.in);
	
	System.out.println("What is your First Name?");
	String Name = sc.nextLine();
	System.out.print("Your name is ");
	System.out.print(Name);
	System.out.println("!");
	
	System.out.println("How Young are you?");
	int Age = sc.nextInt();
	System.out.print("You are ");
	System.out.print(Age);
	System.out.println(" years young!");
	sc.nextLine();
	
	System.out.println("What Month were you born?");
	String Month = sc.nextLine();
	
	System.out.println("What Day were you born?");
	int Day = sc.nextInt();
	
	System.out.println("What Year were you born?");
	int Year = sc.nextInt();
	System.out.print("You were born on ");
	System.out.print(Month);
	System.out.print(" ");
	System.out.print(Day);
	System.out.print(" ");
	System.out.print(Year);
	System.out.println("!");
	
	System.out.println("How much is a buck 50?");
	double Money = sc.nextDouble();
	System.out.println("Good Job! Thank you for your Response!");
	}
}
