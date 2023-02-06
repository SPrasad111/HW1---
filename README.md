# HW-1-Topics-in-CS

1)  Two Sum:
We need to make sure that two numbers from Array add up to the target value. One way of doing this, is by using brute force. We can do this by having a nested loop of the array, with variable i and j, which will be incremented inside of the array which time the loop continues. How this will work is the number at index 0 will be looped x amount of time while being added to x amount of numbers in the array until it matches or doesn’t match the target. After nothing is found from the first loop of the outer array, it will increment, and go to the second index and repeat. This will add all the numbers inside of the array until it matches the target or is not available in which we will return -1, -1. However, if the numbers in the index match each other, the calculation will not be done since two of the same element cannot be added to the target. The time complexity of this would be O(n)^2 since it uses nested loops, there are definitely more efficient methods available to solve this kind of problem.



2) Find First and Last Position of Element in Sorted Array:
To find the First and Last Position of an element in an Sorted Array that must have a runtime of O(logn) must use a binary search. What we can do is use binary search until our target number is in the middle. Once it’s in the middle we need to find whether it’s the first or last occurrence, so first we set it equal to left, and then subtract the index mid currency and compare it to the previous index. If they match then we set left equal to the value in that index. We then repeat the binary search, to find the last occurrence. But this time, we would add to the index of mid, and check if they match. How this is done is that we have another while loops that keeps repeating while left is equal to left - 1, or right is equal to right + 1, this will keep iterating until we reach the first or last occurence of that integer. If we cannot find the First and Last element then we  return -1, -1. If the target occurrences once then left and right both should be equal to mid. Time complexity is logn since it uses a binary search, the implementation could be more efficient. 


3) Median of Two Sorted Arrays: Couldn’t figure this one out


4) Remove Nth Node From End of List:
We needed to have 2 starting points. One needs to be ahead by 2 full nodes. We’ll have First be ahead of the Second node by nth full nodes. So first we loop it n times (the nth number that needs to be removed) then we exit that loop. Then we enter another loop, that will loop First and Second until First is equal to NULL. The number next to second is nth, so in order to remove it from the list all we do is Second ->next = Second->next-next, which makes a Second points at the node ahead of the nth node that needs to be removed. 


5) Merge k Sorted Lists: Incomplete, only completed merging the lists. First it would do edge checks on the twi lists and then merge them together. The idea was to merge two lists one by one, and each time a merge is completed, it would call the MergeList Function to merge another two lists. What I have so far is compares the values in the list, to see which is greater or lower and sorts them accordingly. The plan was regardless of how many lists there were, we would always compare 2 lists over and over again until there weren't any left then it will return the current list. This can be more efficient, cannot give an estimate of Big O, as so far I would be O(n) because of constant looping of calling the function.

