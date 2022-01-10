import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		Random rand = new Random();
		System.out.println("Hello Adventurer! What is your name!");
		String Name = sc.nextLine();
		System.out.println("Hello " + Name + " What is your title? EX: ...The Mighty, ...Gourger of Babies, ...of Asgard");
		String Title = sc.nextLine();
		System.out.println("Hello " + Name + " " + Title + ". Choose your role. EX: Wizard, Rogue, Barbarian, Sorcerer, Warlock, Paladin, Cleric, Bard, Monk, Druid, Fighter, or Ranger.");
		String Role = sc.nextLine();
		if (Role.equals("Wizard") || Role.equals("Barbarian") || Role.equals("Rogue") || Role.equals("wizard") || Role.equals("barbarian") || Role.equals("rogue") || Role.equals("Cleric") || Role.equals("cleric") || Role.equals("Fighter") || Role.equals("fighter") || Role.equals("Sorcerer") || Role.equals("sorcerer") || Role.equals("Warlock") || Role.equals("warlock") || Role.equals("Paladin") || Role.equals("paladin") || Role.equals("Ranger") || Role.equals("ranger") || Role.equals("Bard") || Role.equals("bard") || Role.equals("Druid") || Role.equals("druid") || Role.equals("Monk") || Role.equals("monk")){
			System.out.println("Good Choice " + Name + " " + Title + ". Time to cash in your skill points!");
		}
		else{
			System.out.println(Role + " is not a role. PLease run again.");
		}
		//////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////
		int SP = 25;
		System.out.println("You have 25 points to put towards either Strength, Dexterity, Intelligence, Constitution, Wisdom, and Charisma. Spend them wisely.");
		System.out.print("Strength (1-10):");
		int STR = sc.nextInt();
		if(STR > 10 || STR < 0){
			System.out.println("It says 1-10 not negative infinity to infinity.");
		}
		
		System.out.println("You have " + (SP - STR) + " skill points left.");
		System.out.print("Dexterity (1-10):");
		int DEX = sc.nextInt();
		if(DEX > 10 || DEX < 0){
			System.out.println("It says 1-10 not negative infinity to infinity.");
		}
		
		System.out.println("You have " + (SP - STR - DEX) + " skill points left.");
		System.out.print("Intelligence (1-10):");
		int INT = sc.nextInt();
		if(INT > 10 || INT < 0){
			System.out.println("It says 1-10 not negative infinity to infinity.");
		}
		
		System.out.println("You have " + (SP - STR - DEX - INT) + " skill points left.");
		System.out.print("Constitution (1-10):");
		int CON = sc.nextInt();
		if(CON > 10 || CON < 0){
			System.out.println("It says 1-10 not negative infinity to infinity.");
		}
		
		System.out.println("You have " + (SP - STR - DEX - INT - CON) + " skill points left.");
		System.out.print("Wisdom (1-10):");
		int WIS = sc.nextInt();
		if(WIS > 10 || WIS < 0){
			System.out.println("It says 1-10 not negative infinity to infinity.");
		}
		
		System.out.println("You have " + (SP - STR - DEX - INT - CON - WIS) + " skill points left.");
		System.out.print("Charisma (1-10):");
		int CHA = sc.nextInt();
		if(CHA > 10 || CHA < 0){
			System.out.println("It says 1-10 not negative infinity to infinity.");
		}
		
		System.out.println("You have " + (SP - STR - DEX - INT - CON - WIS - CHA) + " Leftover points.");
		
		int LP = (SP - STR - DEX - INT - CON - WIS - CHA);
		if(LP >= 0) {
			System.out.println("Congratulations! " + Name + " " + Title + "! Here are your final stats!");
			System.out.println("Role: " + Role);
			System.out.println("Strength: " + STR);
			System.out.println("Dexterity: " + DEX);
			System.out.println("Intelligence: " + INT);
			System.out.println("Constitution: " + CON);
			System.out.println("Wisdom: " + WIS);
			System.out.println("Charisma: " + CHA);
			System.out.println("Good luck adventurer! I wish for your glory in battle!");
		}
		else{
			System.out.println("YOU CHEATER! YOU CANT USE MORE POINTS THAN YOU HAVE! TO THE DUNGEON WITH YOU!");
		}
		
	}
}
