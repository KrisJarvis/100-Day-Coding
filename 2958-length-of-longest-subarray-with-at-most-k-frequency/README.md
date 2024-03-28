<h2><a href="https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/">2958. Length of Longest Subarray With at Most K Frequency</a></h2><h3>Medium</h3><hr><div element-id="1109"><p element-id="1108">You are given an integer array <code element-id="1107">nums</code> and an integer <code element-id="1106">k</code>.</p>

<p element-id="1105">The <strong element-id="1104">frequency</strong> of an element <code element-id="1103">x</code> is the number of times it occurs in an array.</p>

<p element-id="1102">An array is called <strong element-id="1101">good</strong> if the frequency of each element in this array is <strong element-id="1100">less than or equal</strong> to <code element-id="1099">k</code>.</p>

<p element-id="1098">Return <em element-id="1097">the length of the <strong element-id="1096">longest</strong> <strong element-id="1095">good</strong> subarray of</em> <code element-id="1094">nums</code><em element-id="1093">.</em></p>

<p element-id="1092">A <strong element-id="1091">subarray</strong> is a contiguous non-empty sequence of elements within an array.</p>

<p element-id="1090">&nbsp;</p>
<p element-id="1089"><strong class="example" element-id="1088">Example 1:</strong></p>

<pre element-id="1087"><strong element-id="1086">Input:</strong> nums = [1,2,3,1,2,3,1,2], k = 2
<strong element-id="1085">Output:</strong> 6
<strong element-id="1084">Explanation:</strong> The longest possible good subarray is [1,2,3,1,2,3] since the values 1, 2, and 3 occur at most twice in this subarray. Note that the subarrays [2,3,1,2,3,1] and [3,1,2,3,1,2] are also good.
It can be shown that there are no good subarrays with length more than 6.
</pre>

<p element-id="1083"><strong class="example" element-id="1082">Example 2:</strong></p>

<pre element-id="1081"><strong element-id="1080">Input:</strong> nums = [1,2,1,2,1,2,1,2], k = 1
<strong element-id="1079">Output:</strong> 2
<strong element-id="1078">Explanation:</strong> The longest possible good subarray is [1,2] since the values 1 and 2 occur at most once in this subarray. Note that the subarray [2,1] is also good.
It can be shown that there are no good subarrays with length more than 2.
</pre>

<p element-id="1077"><strong class="example" element-id="1076">Example 3:</strong></p>

<pre element-id="1075"><strong element-id="1074">Input:</strong> nums = [5,5,5,5,5,5,5], k = 4
<strong element-id="1073">Output:</strong> 4
<strong element-id="1072">Explanation:</strong> The longest possible good subarray is [5,5,5,5] since the value 5 occurs 4 times in this subarray.
It can be shown that there are no good subarrays with length more than 4.
</pre>

<p element-id="1071">&nbsp;</p>
<p element-id="1070"><strong element-id="1069">Constraints:</strong></p>

<ul element-id="1068">
	<li element-id="1067"><code element-id="1066">1 &lt;= nums.length &lt;= 10<sup element-id="1065">5</sup></code></li>
	<li element-id="1064"><code element-id="1063">1 &lt;= nums[i] &lt;= 10<sup element-id="1062">9</sup></code></li>
	<li element-id="1061"><code element-id="1060">1 &lt;= k &lt;= nums.length</code></li>
</ul>
</div>