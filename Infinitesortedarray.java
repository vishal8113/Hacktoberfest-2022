import java.util.Scanner;

class FindElementInSortedInfiniteArray {
    private static int binarySearch(int[] a, int target) {
        int start = 0;
        int end = 1;

        // First try to find the lower and upper bounds before applying binary search
        while (target > a[end]) {
            start = end;
            end *= 2;
        }

        while (start <= end) {
            int mid = (start + end) / 2;

            if (target == a[mid]) {
                return mid;
            } else if (target < a[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        int n = keyboard.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = keyboard.nextInt();
        }
        int target = keyboard.nextInt();
        keyboard.close();

        System.out.printf("BinarySearch(%d) = %d%n", target, binarySearch(a, target));
    }
}
