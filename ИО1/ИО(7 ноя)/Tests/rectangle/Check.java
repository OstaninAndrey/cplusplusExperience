import ru.ifmo.testlib.Checker;
import ru.ifmo.testlib.InStream;
import ru.ifmo.testlib.Outcome;

public class Check implements Checker {
    @Override
    public Outcome test(InStream inf, InStream ouf, InStream ans) {
        String act = ouf.nextToken();
        String exp = ans.nextToken();

        if (!act.equals(exp)) {
            return new Outcome(Outcome.Type.WA, String.format("Expected %s, but found %s", exp, act));
        }

        return new Outcome(Outcome.Type.OK, String.format("%s", act));
    }
}
