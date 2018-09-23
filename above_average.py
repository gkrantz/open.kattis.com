import sys

C = int(sys.stdin.readline())

for i in xrange(0, C):
    args = sys.stdin.readline().strip().split(" ")
    student_count = int(args[0])
    avg = 0
    for j in xrange(1, student_count+1):
        avg += int(args[j])
    avg /= student_count
    above_avg_student_count = 0
    for j in xrange(1, student_count+1):
        if (int(args[j]) > avg):
            above_avg_student_count += 1
    print "{0:.3f}%".format(100*float(above_avg_student_count)/float(student_count))
