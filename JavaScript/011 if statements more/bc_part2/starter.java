import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("Input Number");
		int num_1 = sc.nextInt();
		System.out.println("Input Second Number");
		int num_2 = sc.nextInt();
		System.out.println("Input Third Number");
		int num_3 = sc.nextInt();
		//////////////////////////////////////////////
		if(num_1 > num_2 && num_1 > num_3){
			System.out.println(num_1);
		}
		if(num_2 > num_1 && num_2 > num_3){
			System.out.println(num_2);
		}
		if(num_3 > num_1 && num_3 > num_2){
			System.out.println(num_3);
		}
		//////////////////////////////////////////////
		if(num_1 < num_2 && num_1 < num_3){
			System.out.println(num_1);
		}
		if(num_2 < num_1 && num_2 < num_3){
			System.out.println(num_2);
		}
		if(num_3 < num_1 && num_3 < num_2){
			System.out.println(num_3);
		}
	}
}
