import java.util.*;[
public class AgeOnOtherPlanets {
	
	Scanner read = new Scanner(System.in);
	float age;
	String[] planets = {"Mercury",  "Venus", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    float[] years = {4.1f,1.6f,0.5f, 0.08f, 0.03f, 0.01f, 0.006f};
	
    public AgeOnOtherPlanets() {
    	System.out.println("How old are you on Earth?");
    	System.out.print("\t");
		age = read.nextFloat(); 
    	System.out.print("\n");

		calcAge(age);
    }
    
	public void calcAge(float earthAge) {
		for(int i = 0; i<planets.length; i++) {
			float newAge = age*years[i];
			System.out.println("You are "+newAge+" years old in "+planets[i]);
		}
		
		System.out.println("\t\nNote: these are approximated values");
	}
	public static void main(String[] args) {
		Scanner read = new Scanner(System.in);
		int answer;
		System.out.println("Age calculator! Your age is different on the different worlds, did you know?\n");
		do {
			@SuppressWarnings("unused")
			AgeOnOtherPlanets age = new AgeOnOtherPlanets();
			System.out.println("\nDo you want to try again? 1. Yes\t2. No");
			answer = read.nextInt();
			if(answer == 2) {
				System.out.println("Okay, see you later!");
				break;
			}
			
		}while(true);
	read.close();
	}
	
}
