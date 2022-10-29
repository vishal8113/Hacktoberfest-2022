public class MainClass {

	public static boolean isSafe(int a[][], int n, int row, int col) {
		for(int i = 0; i < n; i++) {
			if(a[i][col] == 1) return false;
		}
		
		for(int i = row, j = col; i>=0 && j >=0; i--, j--) {
			if(a[i][j] == 1) return false;
		}
		
		for(int i = row, j = col; i>=0 && j < n; i--, j++) {
			if(a[i][j] == 1) return false;
		}
		
		return true;
	}
	
	public static boolean nQueen(int a[][], int n, int row) {
		
		if(row == n) return true;
		
		for(int col = 0; col < n; col++) {
			if(isSafe(a, n, row, col)) {
				a[row][col] = 1;
				if(nQueen(a, n, row+1)) {
					return true;
				}
				a[row][col] = 0;
			}
		}
		return false;
	}
	
