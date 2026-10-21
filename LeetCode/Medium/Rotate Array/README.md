# Rotate Array

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Medium |
| **Language** | cpp |
| **Solved On** | October 21, 2026 |
| **Tags** | Array, Math, Two Pointers |
| **Link** | [View Problem](https://leetcode.com/problems/rotate-array/) |
| **Runtime** | 12 ms |
| **Memory** | 263.4 MB |

## Problem Description

<p>Given an integer array <code>nums</code>, rotate the array to the right by <code>k</code> steps, where <code>k</code> is non-negative.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,4,5,6,7], k = 3
<strong>Output:</strong> [5,6,7,1,2,3,4]
<strong>Explanation:</strong>
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [-1,-100,3,99], k = 2
<strong>Output:</strong> [3,99,-1,-100]
<strong>Explanation:</strong> 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
	<li><code>0 &lt;= k &lt;= 10<sup>5</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong></p>

<ul>
	<li>Try to come up with as many solutions as you can. There are at least <strong>three</strong> different ways to solve this problem.</li>
	<li>Could you do it in-place with <code>O(1)</code> extra space?</li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: Beats 100% 3 Line Solution ||  Fully MOST Optimised Code
**Author**: [@7mm](https://leetcode.com/7mm/)
**Upvotes**: 530 👍
**Link**: [View Original Post](https://leetcode.com/problems/rotate-array/solutions/3506340/)

---

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Start!!

# Approach
<!-- Describe your approach to solving the problem. -->
Example:-1234567 ,k=3
1.first reverse the numbers form index 0 to n-k;
->4321 567
2.reverse the k elements from the last 
->4321 765
3.now reverse the whole nums;
->5671234 Done Answer is here !!!!
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(N)
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(1)
# Code
```
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // vector<int>temp;
        // int len=nums.size();
        // int j=0;
        // k=k%len;
        // for(int i=0;i<abs(len-k);i++)
        // {
        //     //1,2,3,4
        //     cout<<nums[i]<<" ";
        //     temp.push_back(nums[i]);
        // }
        // cout<<endl;
        // for(int i=abs(len-k);i<len;i++)
        // {
        //     //5,6,7

        //     cout<<nums[i]<<endl;
        //     nums[abs(i-abs(len-k))]=nums[i];
        // }
        // for(int i=k;i<len;i++)
        // {
        //     nums[i]=temp[j];
        //     j++;
        // }
        
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));

        reverse(nums.begin()+(nums.size()-k),nums.end());
    
        reverse(nums.begin(),nums.end());
            

        
        

        
        
    }
};
```
**Important -> Search *yashsiwach* in solutions of any question to get my image Solution thanks!\uD83D\uDCAF**
# Connect on LinkedIn ,link in Leetcode Profile !
**Upvote if it Helped !\uD83D\uDD25**



</details>
