package me.khalid;

import java.io.*;
import static java.lang.Math.max;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {

    static class FastScanner {
        BufferedReader br;
        StringTokenizer st;

        public FastScanner(InputStream s) {
            br = new BufferedReader(new InputStreamReader(s));
        }

        public FastScanner(FileReader f) {
            br = new BufferedReader(f);
        }

        public String next() throws IOException {
            while (st == null || !st.hasMoreTokens())
                st = new StringTokenizer(br.readLine());
            return st.nextToken();
        }

        public int nextInt() throws IOException {
            return Integer.parseInt(next());
        }

        public long nextLong() throws IOException {
            return Long.parseLong(next());
        }

        public double nextDouble() throws IOException {
            return Double.parseDouble(next());
        }
    }

    public static void main(String[] args) throws IOException {
        FastScanner sc = new FastScanner(System.in);
        PrintWriter out = new PrintWriter(System.out);

        int n, l;
        n = sc.nextInt();
        l = sc.nextInt();

        int[] lant = new int[n];
        for (int i = 0; i < n; i++) lant[i] = sc.nextInt();
        Arrays.sort(lant);
        int last = -1;
        double maxDist = Double.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            maxDist = last == -1 ? lant[i] : max(maxDist, (lant[i] - last) / 2.0);
            last = lant[i];
        }
        maxDist = max(maxDist, (l - last));
        out.println(maxDist);

        out.close();
    }
}
