// ===> BS - Binary Search Pattern <===

/*

==> Patterns
-> Search Space is Sorted
-> TC <= O(log N) || < O(N)
-> Search Space
-> Search Space of the Answer is known i.e., Min and High Value
-> Find Occcurence, Peak, Low, High and etc
-> Input Constraint: >= 10^5 Elements
-> Flattened 2D Array
-> Staircase Traversal on 2D Array

*/



/*

==> BS - Binary Search(Classical)

Approach:
Calculate mid and compare with target, return index if target found.
If nums[mid] < target, eliminate the left part and search on right part.
If nums[mid] > target,, eliminate the right part and search om left part.
Return -1 if target not present.



==> BS - Binary Search(Lower Bound)
The lower bound in a sorted array is the smallest index at which the value is greater than or equal to the target.
It represents the position where the target can be inserted without violating array order.

Approach:
Use binary search on the sorted array to find the smallest index where the element is greater than or equal to the target.
Narrow the search space by adjusting high when mid element meets condition, otherwise move low.
Return the index of this lower bound or arr.size() if no such element.



==> BS - Binary Search (Upper Bound)
The upper bound in a sorted array is the smallest index at which the value is greater than the target.
It indicates the position where a strictly greater element can be inserted without violating order.

Approach:
Use binary search on the sorted array to find the smallest index where the element is strictly greater than the target.
Narrow the search range by moving high when mid element is greater than target, otherwise move low.
Return the index of this upper bound or arr.size() if no such element is found.

*/