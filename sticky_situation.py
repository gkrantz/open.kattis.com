import sys

sys.stdin.readline();
sticks = map(lambda d: int(d), sys.stdin.readline().split(' '));
sticks = sorted(sticks);

x = False;
for i in range(0, len(sticks)-2):
    if sticks[i] + sticks[i+1] > sticks[i+2]:
        print "possible";
        x = True;
        break;
if not x: 
    print "impossible";
