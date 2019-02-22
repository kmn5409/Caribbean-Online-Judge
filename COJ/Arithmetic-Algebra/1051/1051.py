def main():
    num = int(input())
    #print(num)
    count = 0
    if( ( (num-2) /3) == int( (num-2) /3) ):
        count+=1

    #l = '011' * int(num/3)

    print(count + (int(num/3)*2) )

if __name__ == "__main__":
    main()
