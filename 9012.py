
N = int(input())

for _ in range(N):

    word = input()
    word_list = list(word)
    result = []
    for i in range(len(word_list)):
        if word_list[0] == "(":
            word_list.pop(0)
            result.append(1)
        else :
            try:
                result.pop()
                word_list.pop(0)
            except:
                print("NO")
                break

    if len(word_list) == 0 and len(result) == 0:
        print("YES")
    elif len(result) != 0:
        print("NO")
    

