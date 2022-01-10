import java.util.Scanner;
import java.util.Random;

class starter {
	public static int pow(int x, int y){
		int a = x;
		int b = y;
		int count = b;
		while(true){
			a = x * a;
			count = count - 1;
			if(count == 1){
				break;
			}
		}
		int sum = a;
		return sum;
	}
	public static void main(String args[]) {
		// Your code goes below here
		System.out.println(pow(2,5));
	}
}
