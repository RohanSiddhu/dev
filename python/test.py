def main():
    N = int(input())
    Word = input()
    length = 0
    
    for i in range(N):
        for j in range(N, i, -1):
            TempSubWord = Word[i : j]
            if TempSubWord == TempSubWord[::-1] and (j - i) > length:
                length = j - i
                SubWord = TempSubWord
                break
    print(length, SubWord, sep = '\n')

main()
