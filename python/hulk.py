n = int(input())
str = ''
word = ['hate', 'love']
for i in range(n):
    str += "I " + word[i%2]
    if i+1 is n:
        str = str + ' it'
    else:
        str += ' that '

print(str)