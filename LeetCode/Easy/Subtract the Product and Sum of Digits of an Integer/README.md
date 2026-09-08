# Subtract the Product and Sum of Digits of an Integer

| Field | Value |
|-------|-------|
| **Platform** | LeetCode |
| **Difficulty** | Easy |
| **Language** | cpp |
| **Solved On** | September 8, 2026 |
| **Tags** | Math |
| **Link** | [View Problem](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/) |
| **Runtime** | 0 ms |
| **Memory** | 7.8 MB |

## Problem Description

Given an integer number <code>n</code>, return the difference between the product of its digits and the sum of its digits.
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 234
<strong>Output:</strong> 15 
<b>Explanation:</b> 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 4421
<strong>Output:</strong> 21
<b>Explanation: 
</b>Product of digits = 4 * 4 * 2 * 1 = 32 
Sum of digits = 4 + 4 + 2 + 1 = 11 
Result = 32 - 11 = 21
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10^5</code></li>
</ul>


##  Top Community Optimal Approach

<details>
<summary>Click to expand</summary>

**Title**: [C++] 100% time, ~80% space - time => linear to number of digits; space => constant
**Author**: [@Ajna](https://leetcode.com/Ajna/)
**Upvotes**: 21 👍
**Link**: [View Original Post](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/solutions/714994/)

---

I just produce slicing the last digit off `n` until it boils down to `0`, all the while updating the product `p` and the sum `s` of the digits.

Note - I am pretty sure interviewers seeing you convert the number to string, splitting it into `char`s, converting them back to numbers, etc won\'t be that impressed.

The code:

```cpp
class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1, s = 0, t;
        while (n) {
            t = n % 10;
            p *= t;
            s += t;
            n /= 10;
        }
        return p - s;
    }
};
```

</details>
