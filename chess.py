import sys

T = int(sys.stdin.readline());

for n in xrange(0, T):
    testcase = sys.stdin.readline();
    X1 = ord(testcase[0])-ord('A');
    Y1 = int(testcase[2]) - 1;
    X2 = ord(testcase[4])-ord('A');
    Y2 = int(testcase[6]) - 1;
    if (X1 == X2 and Y1 == Y2):
        print "0 " + testcase[:3];
        continue;
    start1 = X1 - Y1;
    start2 = -Y1 - X1;
    end1 = X2 - Y2;
    end2 = -Y2 - X2;
    if (start1 % 2 != end1 % 2):
        print "Impossible";
        continue;
    if (start1 == end1 or start2 == end2):
        print "1 " + testcase[:7];
        continue;
    dist = (end1-start1)/2;
    X3 = X1 + dist;
    Y3 = Y1 - dist;
    if X3 > -1 and X3 < 8 and Y3 > -1 and Y3 < 8:
        print "2 " + testcase[:4] + str(unichr(X3 + ord('A'))) + " " + str(Y3 + 1) + " " + testcase[4:7];
        continue;
    dist = (end2-start2)/2;
    X3 = X1 - dist;
    Y3 = Y1 - dist;
    print "2 " + testcase[:4] + str(unichr(X3 + ord('A'))) + " " + str(Y3 + 1) + " " + testcase[4:7];
