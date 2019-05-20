this sort is based on divide and conquer algorithm
here the last item of the array is taken as the pivot and two partitons are made such that one of the partitions contain elements which are lesser than the pivot and the other partition contains elements which are greater than the pivot
then again in each parrtitions last element of it is considered as pivot and again it is partitioned into two until the size of the paritition becomes one.
the partition fn(part in my code) takes care of returning the position of the pivot and does the allocation of smaller elements on the left side of the pivot and larger than pivot elements on the right side of the pivot.
the fn quicksort is recursively called on both the partitions
time complexity:O(nlogn) in average cases and O(n^2)in worst cases
