import sys

T = int(sys.stdin.readline());

def compare(target, ipt):
    res = 0;
    for i in xrange(0, min(len(target),len(ipt))):
        if target[i] == ipt[i]:
            res = res + 1;
        else:
            break;
    return len(ipt) + len(target) - 2 * res;

for n in xrange(0, T):
    word = sys.stdin.readline().strip();
    ipt = sys.stdin.readline().strip();
    sug1 = sys.stdin.readline().strip();
    sug2 = sys.stdin.readline().strip();
    sug3 = sys.stdin.readline().strip();
    _min = compare(word, ipt);
    _min = min(_min, compare(word, sug1) + 1);
    _min = min(_min, compare(word, sug2) + 1);
    _min = min(_min, compare(word, sug3) + 1);
    print (_min)
