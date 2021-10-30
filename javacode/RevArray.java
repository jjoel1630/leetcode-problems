package javacode;
public class RevArray {
	// public int[][] matrix;
	// public int[] array;
	// RevArray(int[][] mat, int[] arr) {
	// 	matrix = mat;
	// 	array = arr;
	// }

	public static int[] reverseArray(int[] arr) {
		for(int i = 0; i < arr.length / 2; i++) {
			int t = arr[i];
			arr[i] = arr[arr.length - 1 - i];
			arr[arr.length - 1 - i] = t;
		}

		// for(int i = 0; i < arr.length; i++) {
		// 	System.out.println(arr[i]);
		// }

		return arr;
	}

	public int[][] reverseMatrix(int[][] matrix) {
		for(int i = 0; i < matrix.length; i++) {
			matrix[i] = reverseArray(matrix[i]);
		}

		// for(int i = 0; i < matrix.length; i++) {
		// 	for(int j = 0; j < matrix[i].length; j++) {
		// 		System.out.print(matrix[i][j]);
		// 		System.out.print(" ");
		// 	}

		// 	System.out.println();
		// }

		return matrix;
	} 

	public void reverseMatrixFull(int[][] matrix) {
		matrix = reverseMatrix(matrix);

		for (int j = 0; j < matrix[0].length; j++) {
			for(int i = 0; i < matrix.length / 2; i++) {
				int t = matrix[i][j];
				matrix[i][j] = matrix[matrix.length - 1 - i][j];
				matrix[matrix.length - 1 - i][j] = t;
			}
		}

		for(int i = 0; i < matrix.length; i++) {
			for(int j = 0; j < matrix[i].length; j++) {
				System.out.print(matrix[i][j]);
				System.out.print(" ");
			}

			System.out.println();
		}
	}

}

