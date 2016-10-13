import java.util.Comparator;
import java.util.PriorityQueue;

public class MapLearn {

	
	public static void main (String s[] ){
		Matrix m = new Matrix ();
		m.printOrdered();
	}
	
}

class CompareClass implements Comparator <Combos> {

	@Override
	public int compare(Combos o1, Combos o2) {
		if (o1.value<o2.value) return -1;
		else if (o1.value>o2.value) return 1;
		else return 0;
	}

}
class Combos {
	public int i;
	public int j;
	public int value;
	
	public Combos (int i,int j,int value) {
		this.i = i;
		this.j = j;
		this.value = value;
	}
}



class Matrix {
	private int mat[][] ={ {10, 20, 30, 40},
            				{15, 25, 35, 45},
            				{27, 29, 37, 48},
            				{32, 33, 39, 50},
          					};
	public Matrix () {
		
	}
	public void printOrdered (){
		PriorityQueue <Combos> pq = new PriorityQueue<Combos> (new CompareClass());
		for (int j=0; j<4 ; j++){
			pq.add (new Combos (j,0,mat[j][0]));
		}
		
		Combos c=null;
		while (!pq.isEmpty()){
			c = pq.poll();
			System.out.print(c.value+" ");
			if (c.j +1 < 4)
			pq.add(new Combos(c.i, c.j+1,mat[c.i][c.j+1]) );
			
		}
	}

}
