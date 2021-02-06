import java.util.*;

public class RPS {
	Random rand = new Random();
	String userOption;
	String winner = "Nobody";
	int intUser;
    int random;

	public void game() {
	random	= rand.nextInt(3); 
		while(true) {
			Scanner read = new Scanner(System.in);

			System.out.println("\nChoose one: ");
			System.out.println("0.Rock\n1.Paper\n2.Scissors\n");
			intUser = read.nextInt(); 
			
			if(intUser == 0) {
				userOption = "ROCK";
				break;
			}else if(intUser == 1){
				userOption = "PAPER";
				break;
			}else if(intUser == 2){
				userOption = "SCISSORS";
				break;
			}else {
				System.out.println("Invalid option! Try again.");

			}
		}
		String computerOption;
		if(random == 0) {
			computerOption = "ROCK";
		}else if(random == 1) {
			computerOption = "PAPER";
		}else {
			computerOption = "SCISSORS";
		}
		System.out.println("You have "+userOption.toUpperCase());
		System.out.println("The computer has "+computerOption);
		if(intUser == 0 && random == 1) { //ROCK x PAPER = PAPER
			winner = "Computer";
			System.out.println(winner+" won. "+computerOption+" > "+userOption.toUpperCase());
		}else if(intUser == 0 && random == 2) { //ROCK X SCISSORS = ROCK
			winner = "You";
			System.out.println(winner+" won!! "+userOption.toUpperCase()+" > "+computerOption);
		}else if(intUser == 1 && random == 0) { //PAPER X ROCK = PAPER
			winner = "You";
			System.out.println(winner+" won!! "+userOption.toUpperCase()+" > "+computerOption);
		}else if(intUser == 1 && random == 2) { //PAPER X SCISSORS = SCISSORS
			winner = "Computer";
			System.out.println(winner+" won. "+computerOption+" > "+userOption.toUpperCase());
		}else if(intUser == 2 && random == 0) { //SCISSORS X ROCK = ROCK
			winner = "Computer";
			System.out.println(winner+" won. "+computerOption+" > "+userOption.toUpperCase());
		}else if(intUser == 2 && random == 1) { //SCISSORS X PAPER = SCISSORS
			winner = "You";
			System.out.println(winner+" won!!"+userOption.toUpperCase()+" > "+computerOption);
		}else if(intUser == random){
			System.out.println("Nobody wins! :(");
		}else {
			System.out.println("Invalid option. Try again!");
		}
	
	}
	public boolean end() {
	
		int answer;
		Boolean returnB;
		System.out.println("Do you want to play again? 1. Yes\t2. No");
		do {
		Scanner read = new Scanner(System.in);
		answer = read.nextInt();
		if(answer == 1) {
			returnB = true;
			System.out.println("\nLet's go again!");
			break;
		}else if(answer == 2) {
			System.out.println("Okay. See you later :)");
			returnB = false;
			break;
		}else {
			System.out.println("Invalid option. Try again!");
		}
	}while(true);

		return returnB;
		
	}
	public static void main(String[] args) {
		RPS a = new RPS();
		System.out.println("Welcome to Rock-Paper-Scissors.");
		do {
			a.game();
			if(!a.end()) {
				break;
			}
		}while(true);
	}
}
