from random import randrange

def generate_random_arr(n):
    arr = [randrange(0, n) for i in range(n)]
    return arr

def selection_sort(arr):
    n = len(arr)
    for j in range(n):
        # set index of min to current index
        min_index = j
        # for each following item, check if it's less than min
        # if true, set index of min to index of this element
        for i in range(j + 1, n):
            if arr[i] < arr[min_index]:
                min_index = i
        # swap current element with min element
        tmp = arr[j]
        arr[j] = arr[min_index]
        arr[min_index] = tmp
    return arr

def main():
    arr = generate_random_arr(22)
    print(arr)
    print(selection_sort(arr))

if __name__=="__main__":
    main()
