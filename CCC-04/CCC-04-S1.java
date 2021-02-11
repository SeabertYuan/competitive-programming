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
				catch(IOException e){
					e.printStackTrace();
				}
			}
			return st.nextToken();
		}

		//functions
		int nextInt(){
			return Integer.parseInt(next());
		}
		long nextLong(){
			return Long.parseLong(next());
		}
		double nextDouble(){
			return Double.parseDouble(next());
		}
		String nextLine(){
			String str = "";
			try{
				str=br.readLine();
			}
			catch(IOException e){
				e.printStackTrace();
			}
			return str;
		}
	}
	public static void main(String[] args){
		FastReader fr = new FastReader();
		int n = fr.nextInt();
		List<String[]> collection = new ArrayList<String[]>();
		for(int i = 0; i < n; i++){
			String[] colSet = new String[3];
			for(int j = 0; j < 3; j++){
				colSet[j] = fr.nextLine();
			}
			collection.add(colSet);
		}
		for(int i =0; i < n; i++){
			boolean fix = true;
			for(int j = 1; j < 3; j++){
				if(!collection.get(i)[j].startsWith(collection.get(i)[0])){
					fix = true;
					break;
				}
				else if(!collection.get(i)[j].endsWith(collection.get(i)[0])){
					fix = true;
					break;
				}
				else
					fix = false;
			}
			if(!fix)
				System.out.println("No\n");
			else
				System.out.println("Yes\n");
		}
	}
}
