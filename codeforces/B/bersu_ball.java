package me.khalid;

import java.io.*;
import static java.lang.Math.abs;
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

        int[] a, b;
        int n, m;
        n = sc.nextInt();
        a = new int[n];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        m = sc.nextInt();
        b = new int[m];
        for (int i = 0; i < m; i++) b[i] = sc.nextInt();

        Arrays.sort(a);
        Arrays.sort(b);

        int x = 0, y = 0, count = 0;

        while (x < a.length && y < b.length) {
            if (abs(a[x] - b[y]) <= 1) {
                x++;
                y++;
                count++;
            } else {
                if (a[x] < b[y]) x++;
                else y++;
            }
        }

        out.println(count);

        out.close();
    }
}
