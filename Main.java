import java.util.Scanner;

public class Main {
    public static void checkPrime(int num){
        int divNum = 2;
        boolean isDiv = false;
        for(int x = 2; x < (num / 2 + 1); x++) {
            if(num % x == 0) {
                isDiv = true;
                divNum = x;
                break;
            }
        }
        if(isDiv) {
            System.out.println("Number is NOT prime. Divisible by " + divNum);
        } else {
            System.out.println("Number IS Prime");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (true) {
            System.out.print("Enter a number: ");
            int userInt = scanner.nextInt();
            if (userInt >= 2) {
                checkPrime(userInt);
            } else {
                break;
            }
        }
        scanner.close();
    }
}