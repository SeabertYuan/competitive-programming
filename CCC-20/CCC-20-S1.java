import java.io.*;
import java.util.*;

public class Main{
	static class FastReader{
		BufferedReader br;
		StringTokenizer st;

		public FastReader(){
			br = new BufferedReader(new InputStreamReader(System.in));
		}
		String next(){
			while(st == null || !st.hasMoreElements()){
				try{
					st = new StringTokenizer(br.readLine());
				}
				catch (IOException e){
					e.printStackTrace();
				}
			}
			return st.nextToken();
		}
		int nextInt() {
			return Integer.parseInt(next());
		}
	}
	public static void main(String[] args){
		
		FastReader s = new FastReader();
		int n = s.nextInt();
		int[][] input = new int[n][2];
		for(int i = 0; i < n; i++){
			input[i][0] = s.nextInt();
			input[i][1] = s.nextInt();
		}
		Arrays.sort(input, new Comparator<int[]>() {
			public int compare(int[] a, int[] b){
				return Integer.compare(a[0], b[0]);
			}
		});

		float speed;
		for(int i = 0; i < input.length - 1; i++){
			speed = Math.max(speed,
					(input[i+1][1]-input[i][1])/
					(input[i+1][0]-input[i][0]));
		}
		System.out.println(speed);
	}
}
