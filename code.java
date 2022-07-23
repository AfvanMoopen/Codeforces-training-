static class FastScanner {
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	StringTokenizer st = new StringTokenizer("");
	public String next() {
		while(st.hasMoreElements()) {
			try {
				st = new StringTokenizer(br.readline());
			}catch(IOException e) {
				e.printStackTrace();
			}
		return st.nextToken();
		}
		int nextInt() {
			return Integer.parseInt(next());
		}
		int[] readArray(int n) {
			int[] a = new int[];
			for(int i = 0; i < n; i++) a[i] = nextInt();
				return a;
		}
	}
}