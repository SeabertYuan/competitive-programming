import java.io.*;
import import java.util.*;

public class Main {
	static class FastReader{
		BufferedReader br;
		StringTokenizer st;

		public FastReader(){
			br = new BufferedReader(new InputStreamReader(System.in));
		}
		String next(){
			while(st==null || !st.hasMoreElements()){
				try{
					st = new StringTokenizer(br.readLine());
				}
				catch (IOException e){
					e.printStackTrace();
				}
			}
			return st.nextToken();
		}
		int nextInt(){
			return Integer.parseInt(next());
		}

		public static void main(String[] args){
			FastReader s = new FastReader();
			int S = s.nextInt();
			int M = s.nextInt();
			int L = s.nextInt();

			if(1*S + 2*M + 3*L){
				System.out.println("happy");
			} else {
				System.out.println("sad");
			}
		}
	}
}
