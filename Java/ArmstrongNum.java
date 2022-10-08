import java.util.Scanner;

public class ArmstrongNum {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        int a = scan.nextInt();
        int b = scan.nextInt();

        for(int i = a; i <= b; i++){
            int sum = 0;
            int rem;
            int check = i;

            while (check != 0){
                rem = check % 10;
                sum = sum + (rem * rem * rem);
                check = check / 10;
            }
            if (sum == i) System.out.println(i + " is an Armstrong Number.");
        }
    }
}
