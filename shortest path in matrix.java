package Matrix;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;

public class ShortestPath {
	
	public class Matrix {
		
		int matrix[][];
		int row;
		int col;
		
		public Matrix (int [][] mat, int row, int col) {
			this.row = row;
			this.col = col;
			this.matrix = mat;
		}
		
		public int getShortestPath (Point start, Point end) {
			
			Queue <Point> q = new LinkedList <Point>();
			q.add(start);
			int calRow [] = {0,0,-1,1};
			int calCol [] = {1,-1,0,0};
			
			boolean Visited[][] = new boolean[row][col];
			for (boolean [] array : Visited){
				Arrays.fill(array, false);
			}
			
			while (!q.isEmpty()){
				Point u = q.poll();
				Visited[u.i][u.j]=true;
				System.err.println ("Setting "+"("+u.i+","+u.j+") as visited ...");
				if (u.equals(end)){
					
					for (int i =0; i< row; i++){
						for (int j =0; j< col ; j++){
							System.out.print(matrix[i][j]+"  ");
						}System.out.println ();
					}
					
					return matrix[u.i][ u.j]-1;
				}
				else {
					for (int k =0; k< 4; k++){
						Point p = new Point(u.i+calRow[k],u.j+calCol[k]);
						if (isValid(p.i,p.j)&& !Visited [p.i][p.j] && matrix [p.i][p.j]==1 ){
							System.err.println ("Adding "+p.i +","+p.j + " to the queue");
							matrix [p.i][p.j] += matrix[u.i][u.j];
							q.add(p);
						}
					}
				}
				
			}
			
			return -1;
			
			
		}
		
		private boolean isValid (int i, int j){
			if (i<row && j < col && i>=0 && j>=0) return true;
			return false;
		}
	}
	
	public class Point {
		int i, j;
		
		
		public Point (int i, int j){
			this.i = i;
			this.j=j;
			
		}
		
		public boolean equals (Object p){
			Point ptemp = (Point)p;
			if (this.i == ptemp.i && this.j == ptemp.j )
				return true;
			else return false;
		}
	}

	public static void main (String [] s){
		int ROW = 9;
		int COL = 10;
		ShortestPath shortp = new ShortestPath();
		int[][] mat  = {{1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
                {1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },
                {1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },
                {0, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
                {1, 1, 1, 0, 1, 1, 1, 0, 1, 0 },
                {1, 0, 1, 1, 1, 1, 0, 1, 0, 0 },
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
                {1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
                {1, 1, 0, 0, 0, 0, 1, 0, 0, 1 }};
//		int [][] mat = { {1,1,1} ,
//						 {0,1,1} ,
//						 {0,0,1} 
//		};
		
		Matrix m =shortp.new Matrix (mat, ROW, COL);
		Point start = shortp.new Point (0,0);
		Point end = shortp.new Point (3,4);
		int ret = m.getShortestPath(start, end);
		System.out.println (ret);	
		
	}
}


