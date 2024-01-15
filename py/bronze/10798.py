a = []
l = []
for i in range(5):
    w = input()
    a.append(w)
    l.append(len(a[i]))
string = ''
for i in range(max(l)):
    for j in range(5):
        if i < l[j]:
            string += a[j][i]
print(string)