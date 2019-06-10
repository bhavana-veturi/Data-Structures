"""Implement quick sort in Python.
Input a list.
Output a sorted list."""
def quicksort(array):
    quicksortsplit(array,0,len(array)-1)
    
def quicksortsplit(array,first,last):
    if(last>first):
        splt_pt=partition(array,first,last)
        quicksortsplit(array,first,splt_pt-1)
        quicksortsplit(array,splt_pt+1,last)
def partition(array,first,last):
    pivot=array[first]
    flag=False
    left=first+1
    right=last
    while not flag:
        while left <= right and array[left]<=pivot:
            left=left+1
        while right >= left and array[right]>=pivot:
            right = right-1
        if(left>right):
            flag=True
        else:
            temp=array[left]
            array[left]=array[right]
            array[right]=temp
    temp=array[first]
    array[first]=array[right]
    array[right]=temp
    return(right)
            
test = [21, 4, 1, 3, 9, 20, 25, 6, 21, 14]
quicksort(test)
print(test)
