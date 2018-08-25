import sys

#read attributes
my_dict = {}
attributes = sys.stdin.readline().split(" ")
attributes[len(attributes)-1] = attributes[len(attributes)-1].rstrip()
for i, v in enumerate(attributes):
    my_dict[v.rstrip()] = i;

# read songs
songs = []
for i in xrange(int(sys.stdin.readline())):
    songs.append(sys.stdin.readline().split(" "))
    
# read sortings
for i in xrange(int(sys.stdin.readline())):
    asd = sys.stdin.readline().rstrip()
    songs.sort(key=lambda list_: list_[my_dict[asd]])
    #print
    print " ".join(attributes)
    for song in songs:
        sys.stdout.write(" ".join(song))
    print
