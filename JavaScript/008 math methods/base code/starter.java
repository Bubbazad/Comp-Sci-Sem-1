import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		double A = Math.max(13 - 6 * 11, 30 % 7 * (-2));
		double B = Math.sqrt(3 * 8 + 31 % 7);
		double C = Math.pow(37 / 3, 35 % 21);
		double D = Math.max(Math.pow(2, 14 % 3), Math.sqrt(2 * 6));
		System.out.println(A);
		System.out.println(B);
		System.out.println(C);
		System.out.println(D);
	}
}
