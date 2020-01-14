import ru.ifmo.testlib.Checker;
import ru.ifmo.testlib.InStream;
import ru.ifmo.testlib.Outcome;

public class Check implements Checker {

    @Override
    public Outcome test(InStream inf, InStream ouf, InStream ans) {
        int n = inf.nextInt();
        int x = inf.nextInt();
        int y = inf.nextInt();

        int a[] = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = inf.nextInt();
        }
        int jAnsI = ans.nextInt() - 1;
        int cAnsI = ouf.nextInt() - 1;

        int cAnsJ = -1;
        if (cAnsI != -1) {
            cAnsJ = ouf.nextInt() - 1;
        }

        if (cAnsI < -1 || cAnsI >= n) {
            return new Outcome(Outcome.Type.WA, String.format("%d is incorrect index", cAnsI + 1));
        }

        if (cAnsI != -1 && (cAnsJ < 0 || cAnsJ >= n)) {
            return new Outcome(Outcome.Type.WA, String.format("%d is incorrect index", cAnsJ + 1));
        }

        if (cAnsI != -1 && (cAnsJ == cAnsI)) {
            return new Outcome(Outcome.Type.WA, String.format("Same indexes %d & %d", cAnsJ, cAnsI));
        }

        int jAnsJ = -1;
        if (jAnsI != -1) {
            jAnsJ = ans.nextInt() - 1;
        }

        if (jAnsI == -1 && cAnsI == -1) {
            return new Outcome(Outcome.Type.OK, "Answer isn't exist");
        }

        if (cAnsI == -1 && jAnsI != -1) {
            return new Outcome(Outcome.Type.WA, String.format("Contestant doesn't find answer: %d %d", jAnsI + 1, jAnsJ + 1));
        }

        int sum = a[cAnsI] + a[cAnsJ];
        if (sum > x) {
            return new Outcome(Outcome.Type.WA,
                    String.format("a[%d] + a[%d] > %d", cAnsI + 1, cAnsJ + 1, x));
        }

        int sub = Math.abs(a[cAnsI] - a[cAnsJ]);
        if (sub < y) {
            return new Outcome(Outcome.Type.WA,
                    String.format("|a[%d] - a[%d]| < %d", cAnsI + 1, cAnsJ + 1, y));
        }

        if (jAnsJ == -1) {
                return new Outcome(Outcome.Type.FAIL,
                        String.format("Jury doesn't find answer: %d %d", cAnsI + 1, cAnsJ + 1));
        }

        return new Outcome(Outcome.Type.OK, String.format("%d %d", cAnsI + 1, cAnsJ + 1));


    }
}

