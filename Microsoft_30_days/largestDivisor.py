def largestDivisor(lst):
    # check the array is empty
    if not lst:
        return []
    # sort the array
    lst.sort()

    # length of the lst
    length = len(lst)

    # create an two list 
    lst_1 = [1] * length
    lst_2 = [-1] * length

    # create an variable initial zero value
    lg_idx = 0

    # iterate through each element in the list
    for i in range(length):
        for j in range(i):
            # check condition
            # ar[i] % ar[j] is equal to zero 
            if lst[i] % lst[j] == 0:
                if lst_1[i] < lst_1[j] + 1:
                    lst_1 = lst_1 + 1
                    lst_2[i] = j
        # check condition
        if lst_1[lg_idx] < lst_1[i]:
            lg_idx = i
    solve = []
    i = lg_idx
    while i != -1:
        solve.append(lst[i])
        i = lst_2[i]
    # print(solve)
    # print(solve[::-1])
    # leetcode submission
    return solve[::-1]
