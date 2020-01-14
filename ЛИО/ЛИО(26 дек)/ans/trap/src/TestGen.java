/**
 * Created by Grigorii Shovkoplias on 23.12.2015.
 */

import java.io.*;
import java.util.*;

public class TestGen {

    private void gen() throws Exception {
        new File("../tests").mkdir();
        new File("../preliminary").mkdir();
        desc = new PrintWriter("../tests.desc");


        done = 0;
        genSamples();

        //-------------------------first group-------------------------------------------------
        subtask = "subtask1";

        genSimples();
        genRand(10, 5);
        genRand(3, 100);
        for (int i = 0; i < 10; i++) {
            genRand(rand(MAXN1) + 1, rand(MAXX) + 1);
        }



        for (int i = 0; i < 3; i++) {
            genRand(MAXN1, MAXX);
            genGreaterX(MAXN1, MAXX);
            genLessY(MAXN1, MAXX);
            genSpecial(MAXN1, MAXX - 5);
            genGreaterX(rand(MAXN1) + 1, rand(MAXX) + 1);
            genLessY(rand(MAXN1) + 1, rand(MAXX) + 1);
            genSpecial(rand(MAXN1) + 1, rand(MAXX) + 1);
        }

        desc.println(String.format("comment_subtask%d=\"n &lt;= %d\"", 1, MAXN1));
        desc.println(String.format("bonus_subtask%d=%d", 1, 50));

        //-------------------------second group-------------------------------------------------
        subtask = "subtask2";

        for (int i = 0; i < 10; i++) {
            genRand(rand(MAXN2) + 1, rand(MAXX) + 1);
        }

        for (int i = 0; i < 3; i++) {
            genRand(MAXN2, MAXX);
            genGreaterX(MAXN2, MAXX);
            genLessY(MAXN2, MAXX);
            genSpecial(MAXN2, MAXX - 5);
            genGreaterX(rand(MAXN2) + 1, rand(MAXX) + 1);
            genLessY(rand(MAXN2) + 1, rand(MAXX) + 1);
            genSpecial(rand(MAXN2) + 1, rand(MAXX) + 1);
        }

        desc.println(String.format("comment_subtask%d=\"n &lt;= %d\"", 2, MAXN2));
        desc.println(String.format("bonus_subtask%d=%d", 2, 50));


        desc.close();

    }

    public static void main(String[] args) throws Exception {
        new TestGen().gen();
    }

    private int done = 0;
    private PrintWriter desc;
    private final Random rnd = new Random(3289214075201L);
    private final int MAXN1 = 1000;
    private final int MAXN2 = 100_000;
    private final int MAXX = 100_000;



    private int rand(int n) {
        if (n < 1)
            return 0;
        return rnd.nextInt(n);
    }

    private int gand(int n) {
        return rand(n / 2) + n / 2 + 1;
    }

    private char zeroOrOne() {
        return (char) ('0' + rnd.nextInt(2));
    }

    private long rand(long n) {
        if (n < 1)
            return 0;
        long res = rand(Integer.MAX_VALUE);
        res <<= 32;
        res += rand(Integer.MAX_VALUE);
        res %= n;
        return res;
    }

    private void print(int[] a, int x, int y) throws IOException {
        done++;
        System.err.println("Generation test #" + done);
        PrintWriter out = new PrintWriter(String.format("../tests/%02d", done));
        out.println(a.length + " " + x + " " + y);
        for (int i = 0; i < a.length - 1; i++) {
            out.print(a[i] + " ");
        }
        out.println(a[a.length - 1]);
        out.close();
    }


    private String getPath() {
        return String.format("../tests/%02d", done);
    }

    private void printDesc(String path, String folder, String subtask, int points, String comment) throws IOException {
        desc.println(String.format("%s, folder=%s, subtask=%s, points=%d, comment=\"%s\"", path, folder, subtask, points, comment));
    }

    private String subtask;

    private void printDescT(String comment) throws IOException {
        printDesc(getPath(), "tests", subtask, 0, comment);
    }

    //begin generators

    private void genSamples() throws IOException {
        PrintWriter out;
        String path;
        path = "../preliminary/01";
        out = new PrintWriter(path);
        out.println("5 5 2");
        out.println("1 2 3 4 5");
        out.close();
        printDesc(path, "preliminary", "subtask0", 0, "sample 1");
        path = "../preliminary/02";
        out = new PrintWriter(path);
        out.println("4 5 2");
        out.println("2 3 4 5");
        out.close();
        printDesc(path, "preliminary", "subtask0", 0, "sample 2");
        path = "../preliminary/03";
        out = new PrintWriter(path);
        out.println("3 10 1");
        out.println("1 10 5");
        out.close();
        printDesc(path, "preliminary", "subtask0", 0, "sample 3");
    }

    private void shuffle(int[] a) {
        for (int i = 0; i < a.length; i++) {
            int j = rand(a.length);
            int tmp = a[j];
            a[j] = a[i];
            a[i] = tmp;
        }
    }
    //begin generators

    private void genRand(int n, int max) throws IOException {
        int x = rand(max) + 1;
        int y = rand(x) + 1;
        int a[] = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = rand(max) + 1;
        }
        print(a, x, y);
        printDescT(String.format("Random: n = %d, x = %d, y = %d", n, x, y));
    }

    private void genSimples() throws IOException {
        print(new int[]{1, 1, 2, 3}, 4, 2);
        printDescT(String.format("simple 1"));
        print(new int[]{1, 1, 2, 4}, 4, 2);
        printDescT(String.format("simple 2"));
        print(new int[]{1, 1, 2, 3}, 4, 3);
        printDescT(String.format("simple 3"));
        print(new int[]{8, 8, 8, 8}, 100, 1);
        printDescT(String.format("simple 4"));
    }


    private void genLessY(int n, int max) throws IOException {
        int x = rand(max) + 1;
        int y = rand(x) + 1;
        int a[] = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = rand(y) + 1;
        }
        print(a, x, y);
        printDescT(String.format("Less than Y: n = %d, x = %d, y = %d", n, x, y));
    }

    private void genGreaterX(int n, int max) throws IOException {
        int x = rand(max) + 1;
        int y = rand(x) + 1;
        int a[] = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = x + rand(max - x) + 1;
        }
        print(a, x, y);
        printDescT(String.format("Greater than X: n = %d, x = %d, y = %d", n, x, y));
    }

    private void genSpecial(int n, int max) throws IOException {
        int x;
        int y;
        int a[] = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = Math.min(i + 1, max);
        }
        shuffle(a);
        x = Math.min(n, max) + 1;
        y = Math.min(n, max) - 1;
        print(a, x, y);
        printDescT(String.format("One answer: n = %d, x = %d, y = %d", n, x, y));
    }

    //end generators

}
