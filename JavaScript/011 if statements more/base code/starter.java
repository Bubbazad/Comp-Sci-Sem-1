import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("Input Number");
		int Num_1 = sc.nextInt();
		System.out.println("Input Second Number");
		int Num_2 = sc.nextInt();
		if(Num_1 == Num_2){
			System.out.println("Winner!");
		}
		if(Num_1 != Num_2){
			System.out.println("Loser!");
		}
	}
}
