<h1 align="center">
  <a href="https://standardjs.com"><img src="assets/octocode.png" alt="LeetHub v2 - Automatically sync your code to GitHub." width="400"></a>
  <br>
  <a href="https://chrome.google.com/webstore/detail/leethub-v2/mhanfgfagplhgemhjfeolkkdidbakocm">LeetHub v2</a> - Automatically sync your code to GitHub.
  <br>
  <br>
</h1>

<p align="center">
  <a href="https://github.com/arunbhardwaj/LeetHub-2.0/blob/main/LICENSE">
    <img src="https://img.shields.io/badge/license-MIT-blue.svg" alt="license"/>
  </a>
  <!-- <a href="https://discord.gg/anXT9vErxu">
    <img src="https://img.shields.io/discord/781373810251137074" alt="discord">
  </a> -->
  <!-- <a href="https://chrome.google.com/webstore/detail/leethub/aciombdipochlnkbpcbgdpjffcfdbggi">
    <img src="https://img.shields.io/chrome-web-store/v/aciombdipochlnkbpcbgdpjffcfdbggi.svg" alt="chrome-webstore"/>
  </a> -->
  <!-- <a href="https://chrome.google.com/webstore/detail/leethub/aciombdipochlnkbpcbgdpjffcfdbggi">
    <img src="https://img.shields.io/chrome-web-store/d/aciombdipochlnkbpcbgdpjffcfdbggi.svg" alt="users">
  </a>
  <a href="https://github.com/arunbhardwaj/LeetHub-1.1/graphs/contributors" alt="Contributors">
    <img src="https://img.shields.io/github/contributors/arunbhardwaj/LeetHub-1.1" />
  </a> -->
</p>

<!-- <div align="center">
  <a href="https://www.producthunt.com/posts/leethub?utm_source=badge-featured&utm_medium=badge&utm_souce=badge-leethub" target="_blank">
    <img src="https://api.producthunt.com/widgets/embed-image/v1/featured.svg?post_id=275757&theme=light" alt="LeetHub - Automatically sync your code b/w Leetcode & GitHub. | Product Hunt" />
  </a>

  [![Chrome](https://user-images.githubusercontent.com/53124886/111952712-34f12300-8aee-11eb-9fdd-ad579a1eb235.png)](https://chrome.google.com/webstore/detail/leethub/aciombdipochlnkbpcbgdpjffcfdbggi) [![Firefox](https://user-images.githubusercontent.com/53124886/126341427-4a4e57aa-767a-467e-83d2-b31fa3564441.png)](https://addons.mozilla.org/en-US/firefox/addon/leethub/)
</div> -->

<!-- ## LeetHub progress and numbers (YouTube Video):
[![LeetHub](https://user-images.githubusercontent.com/43754306/165053510-a757c95e-c3bc-49d5-995c-7a52368abd37.png)](https://www.youtube.com/watch?v=o33PIjqlOgw "LeetHub saves lives!") -->

## What is LeetHub 2.0?
<p>A <a href="https://chromewebstore.google.com/detail/leethub-v2/mhanfgfagplhgemhjfeolkkdidbakocm">chrome</a> and (new) <a href="https://addons.mozilla.org/en-US/firefox/addon/leethub-v2/">firefox</a> extension that automatically pushes your code to GitHub when you pass all tests on a <a href="https://leetcode.com/">Leetcode</a> problem. It's forked from the original <a href="https://chrome.google.com/webstore/detail/leethub/aciombdipochlnkbpcbgdpjffcfdbggi?hl=en">LeetHub</a> and improves on it to be faster, cleaner and compatible with the new dynamic LeetCode UI.</p>

## Why LeetHub?
<p> <strong>1.</strong> Recruiters <em>want</em> to see your contributions to the Open Source community, be it through side projects, solving algorithms/data-structures, or contributing to existing OS projects.<br>
As of now, GitHub is developers' #1 portfolio. LeetHub just makes it much easier (autonomous) to keep track of progress and contributions on the largest network of engineering community, GitHub.</p>

<p> <strong>2.</strong> There's no easy way of accessing your leetcode problems in one place! <br>
Moreover, pushing code manually to GitHub from Leetcode is very time consuming. So, why not just automate it entirely without spending a SINGLE additional second on it? </p>

## How does LeetHub work?     

<p>It's as simple as:</p>
<ol>
  <li>After installation, launch LeetHub.</li>
  <li>Click on "authorize with GitHub" button to automatically set up your account with LeetHub.</li>
  <li>Setup an existing/new repository with LeetHub (private by default) by clicking "Get Started" button.</li>
  <li>Begin Leetcoding! To view your progress, simply click on the extension!</li>
</ol>


#### BONUS: Star [this repository](https://github.com/arunbhardwaj/LeetHub-2.0) for further development of features. If you want a particular feature, simply [request](https://github.com/arunbhardwaj/LeetHub-2.0/labels/feature) for it!


## Why did I decide to work on LeetHub?
<p>
After the 2023 SVB bank closure and growing layoffs, it became clear to me that maintaining your skills is incredibly important. In that effort, it helps to have a source to contain all your learnings over the years: a repo you can go back to and see your commit history and any notes you've taken. With the previous and other extensions broken by recent LeetCode and GitHub changes, I decided to build one out myself using the original as a starting point.
</p>

# Let's see you ACE that coding interview!

![leetcode view](assets/extension/leetcode.png)


# How to set up LeetHub for local development?


  1. Fork this repo and clone to your local machine
  2. Run "npm run setup" to install the developer dependencies
  3. Run `npm run build` to build the final extension files into the `./dist/` directory
  4. Go to <a href="chrome://extensions">chrome://extensions </a> or <a href="https://firefox-source-docs.mozilla.org/devtools-user/about_colon_debugging/index.html#extensions">about:debugging</a> in firefox
    a. In Chrome, enable [Developer mode](https://support.google.com/chrome/a/answer/2714278) by toggling the switch on top right corner
  6. Click `Load unpacked` or `Load Temporary Add-on...`
  7. Select the `./dist/chrome` or `./dist/firefox` LeetHub folder
  8. That's it! Be sure to `npm run build` and reload the extension after making changes


Other npm commands available:

```
npm run               Show list of commands available
npm run format        Auto-format JavaScript, HTML/CSS
npm run format-test   Test all code is formatted properly
npm run lint          Lint JavaScript
npm run lint-test     Test all code is linted properly
```

<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0059-spiral-matrix-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0059-spiral-matrix-ii) |
| [0064-minimum-path-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0064-minimum-path-sum) |
| [0074-search-a-2d-matrix](https://github.com/nikhilesh-git/Leetcode/tree/master/0074-search-a-2d-matrix) |
| [0120-triangle](https://github.com/nikhilesh-git/Leetcode/tree/master/0120-triangle) |
| [0121-best-time-to-buy-and-sell-stock](https://github.com/nikhilesh-git/Leetcode/tree/master/0121-best-time-to-buy-and-sell-stock) |
| [0169-majority-element](https://github.com/nikhilesh-git/Leetcode/tree/master/0169-majority-element) |
| [0198-house-robber](https://github.com/nikhilesh-git/Leetcode/tree/master/0198-house-robber) |
| [0213-house-robber-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0213-house-robber-ii) |
| [0229-majority-element-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0229-majority-element-ii) |
| [0240-search-a-2d-matrix-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0240-search-a-2d-matrix-ii) |
| [0287-find-the-duplicate-number](https://github.com/nikhilesh-git/Leetcode/tree/master/0287-find-the-duplicate-number) |
| [0322-coin-change](https://github.com/nikhilesh-git/Leetcode/tree/master/0322-coin-change) |
| [0410-split-array-largest-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0410-split-array-largest-sum) |
| [0416-partition-equal-subset-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0416-partition-equal-subset-sum) |
| [0455-assign-cookies](https://github.com/nikhilesh-git/Leetcode/tree/master/0455-assign-cookies) |
| [0485-max-consecutive-ones](https://github.com/nikhilesh-git/Leetcode/tree/master/0485-max-consecutive-ones) |
| [0494-target-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0494-target-sum) |
| [0518-coin-change-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0518-coin-change-ii) |
| [0733-flood-fill](https://github.com/nikhilesh-git/Leetcode/tree/master/0733-flood-fill) |
| [0967-minimum-falling-path-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0967-minimum-falling-path-sum) |
| [1056-capacity-to-ship-packages-within-d-days](https://github.com/nikhilesh-git/Leetcode/tree/master/1056-capacity-to-ship-packages-within-d-days) |
| [1408-find-the-smallest-divisor-given-a-threshold](https://github.com/nikhilesh-git/Leetcode/tree/master/1408-find-the-smallest-divisor-given-a-threshold) |
| [1559-cherry-pickup-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/1559-cherry-pickup-ii) |
| [1646-kth-missing-positive-number](https://github.com/nikhilesh-git/Leetcode/tree/master/1646-kth-missing-positive-number) |
| [1839-decode-xored-array](https://github.com/nikhilesh-git/Leetcode/tree/master/1839-decode-xored-array) |
| [2519-find-the-original-array-of-prefix-xor](https://github.com/nikhilesh-git/Leetcode/tree/master/2519-find-the-original-array-of-prefix-xor) |
## Depth-First Search
|  |
| ------- |
| [0144-binary-tree-preorder-traversal](https://github.com/nikhilesh-git/Leetcode/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/nikhilesh-git/Leetcode/tree/master/0145-binary-tree-postorder-traversal) |
| [0733-flood-fill](https://github.com/nikhilesh-git/Leetcode/tree/master/0733-flood-fill) |
## Breadth-First Search
|  |
| ------- |
| [0322-coin-change](https://github.com/nikhilesh-git/Leetcode/tree/master/0322-coin-change) |
| [0733-flood-fill](https://github.com/nikhilesh-git/Leetcode/tree/master/0733-flood-fill) |
## Matrix
|  |
| ------- |
| [0059-spiral-matrix-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0059-spiral-matrix-ii) |
| [0064-minimum-path-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0064-minimum-path-sum) |
| [0074-search-a-2d-matrix](https://github.com/nikhilesh-git/Leetcode/tree/master/0074-search-a-2d-matrix) |
| [0240-search-a-2d-matrix-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0240-search-a-2d-matrix-ii) |
| [0733-flood-fill](https://github.com/nikhilesh-git/Leetcode/tree/master/0733-flood-fill) |
| [0967-minimum-falling-path-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0967-minimum-falling-path-sum) |
| [1559-cherry-pickup-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/1559-cherry-pickup-ii) |
## Two Pointers
|  |
| ------- |
| [0005-longest-palindromic-substring](https://github.com/nikhilesh-git/Leetcode/tree/master/0005-longest-palindromic-substring) |
| [0061-rotate-list](https://github.com/nikhilesh-git/Leetcode/tree/master/0061-rotate-list) |
| [0125-valid-palindrome](https://github.com/nikhilesh-git/Leetcode/tree/master/0125-valid-palindrome) |
| [0141-linked-list-cycle](https://github.com/nikhilesh-git/Leetcode/tree/master/0141-linked-list-cycle) |
| [0142-linked-list-cycle-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0142-linked-list-cycle-ii) |
| [0160-intersection-of-two-linked-lists](https://github.com/nikhilesh-git/Leetcode/tree/master/0160-intersection-of-two-linked-lists) |
| [0234-palindrome-linked-list](https://github.com/nikhilesh-git/Leetcode/tree/master/0234-palindrome-linked-list) |
| [0287-find-the-duplicate-number](https://github.com/nikhilesh-git/Leetcode/tree/master/0287-find-the-duplicate-number) |
| [0455-assign-cookies](https://github.com/nikhilesh-git/Leetcode/tree/master/0455-assign-cookies) |
| [0908-middle-of-the-linked-list](https://github.com/nikhilesh-git/Leetcode/tree/master/0908-middle-of-the-linked-list) |
## Binary Search
|  |
| ------- |
| [0074-search-a-2d-matrix](https://github.com/nikhilesh-git/Leetcode/tree/master/0074-search-a-2d-matrix) |
| [0240-search-a-2d-matrix-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0240-search-a-2d-matrix-ii) |
| [0287-find-the-duplicate-number](https://github.com/nikhilesh-git/Leetcode/tree/master/0287-find-the-duplicate-number) |
| [0410-split-array-largest-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0410-split-array-largest-sum) |
| [1056-capacity-to-ship-packages-within-d-days](https://github.com/nikhilesh-git/Leetcode/tree/master/1056-capacity-to-ship-packages-within-d-days) |
| [1408-find-the-smallest-divisor-given-a-threshold](https://github.com/nikhilesh-git/Leetcode/tree/master/1408-find-the-smallest-divisor-given-a-threshold) |
| [1646-kth-missing-positive-number](https://github.com/nikhilesh-git/Leetcode/tree/master/1646-kth-missing-positive-number) |
## Bit Manipulation
|  |
| ------- |
| [0029-divide-two-integers](https://github.com/nikhilesh-git/Leetcode/tree/master/0029-divide-two-integers) |
| [0287-find-the-duplicate-number](https://github.com/nikhilesh-git/Leetcode/tree/master/0287-find-the-duplicate-number) |
| [1839-decode-xored-array](https://github.com/nikhilesh-git/Leetcode/tree/master/1839-decode-xored-array) |
| [2519-find-the-original-array-of-prefix-xor](https://github.com/nikhilesh-git/Leetcode/tree/master/2519-find-the-original-array-of-prefix-xor) |
## Math
|  |
| ------- |
| [0029-divide-two-integers](https://github.com/nikhilesh-git/Leetcode/tree/master/0029-divide-two-integers) |
| [0050-powx-n](https://github.com/nikhilesh-git/Leetcode/tree/master/0050-powx-n) |
| [0062-unique-paths](https://github.com/nikhilesh-git/Leetcode/tree/master/0062-unique-paths) |
| [0070-climbing-stairs](https://github.com/nikhilesh-git/Leetcode/tree/master/0070-climbing-stairs) |
| [0856-consecutive-numbers-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0856-consecutive-numbers-sum) |
| [1885-count-number-of-homogenous-substrings](https://github.com/nikhilesh-git/Leetcode/tree/master/1885-count-number-of-homogenous-substrings) |
| [2050-count-good-numbers](https://github.com/nikhilesh-git/Leetcode/tree/master/2050-count-good-numbers) |
## Recursion
|  |
| ------- |
| [0044-wildcard-matching](https://github.com/nikhilesh-git/Leetcode/tree/master/0044-wildcard-matching) |
| [0050-powx-n](https://github.com/nikhilesh-git/Leetcode/tree/master/0050-powx-n) |
| [0206-reverse-linked-list](https://github.com/nikhilesh-git/Leetcode/tree/master/0206-reverse-linked-list) |
| [0234-palindrome-linked-list](https://github.com/nikhilesh-git/Leetcode/tree/master/0234-palindrome-linked-list) |
| [2050-count-good-numbers](https://github.com/nikhilesh-git/Leetcode/tree/master/2050-count-good-numbers) |
## Dynamic Programming
|  |
| ------- |
| [0005-longest-palindromic-substring](https://github.com/nikhilesh-git/Leetcode/tree/master/0005-longest-palindromic-substring) |
| [0022-generate-parentheses](https://github.com/nikhilesh-git/Leetcode/tree/master/0022-generate-parentheses) |
| [0044-wildcard-matching](https://github.com/nikhilesh-git/Leetcode/tree/master/0044-wildcard-matching) |
| [0062-unique-paths](https://github.com/nikhilesh-git/Leetcode/tree/master/0062-unique-paths) |
| [0064-minimum-path-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0064-minimum-path-sum) |
| [0070-climbing-stairs](https://github.com/nikhilesh-git/Leetcode/tree/master/0070-climbing-stairs) |
| [0115-distinct-subsequences](https://github.com/nikhilesh-git/Leetcode/tree/master/0115-distinct-subsequences) |
| [0120-triangle](https://github.com/nikhilesh-git/Leetcode/tree/master/0120-triangle) |
| [0121-best-time-to-buy-and-sell-stock](https://github.com/nikhilesh-git/Leetcode/tree/master/0121-best-time-to-buy-and-sell-stock) |
| [0198-house-robber](https://github.com/nikhilesh-git/Leetcode/tree/master/0198-house-robber) |
| [0213-house-robber-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0213-house-robber-ii) |
| [0322-coin-change](https://github.com/nikhilesh-git/Leetcode/tree/master/0322-coin-change) |
| [0410-split-array-largest-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0410-split-array-largest-sum) |
| [0416-partition-equal-subset-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0416-partition-equal-subset-sum) |
| [0494-target-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0494-target-sum) |
| [0516-longest-palindromic-subsequence](https://github.com/nikhilesh-git/Leetcode/tree/master/0516-longest-palindromic-subsequence) |
| [0518-coin-change-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0518-coin-change-ii) |
| [0583-delete-operation-for-two-strings](https://github.com/nikhilesh-git/Leetcode/tree/master/0583-delete-operation-for-two-strings) |
| [0967-minimum-falling-path-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0967-minimum-falling-path-sum) |
| [1170-shortest-common-supersequence](https://github.com/nikhilesh-git/Leetcode/tree/master/1170-shortest-common-supersequence) |
| [1250-longest-common-subsequence](https://github.com/nikhilesh-git/Leetcode/tree/master/1250-longest-common-subsequence) |
| [1437-minimum-insertion-steps-to-make-a-string-palindrome](https://github.com/nikhilesh-git/Leetcode/tree/master/1437-minimum-insertion-steps-to-make-a-string-palindrome) |
| [1559-cherry-pickup-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/1559-cherry-pickup-ii) |
## Combinatorics
|  |
| ------- |
| [0062-unique-paths](https://github.com/nikhilesh-git/Leetcode/tree/master/0062-unique-paths) |
## Linked List
|  |
| ------- |
| [0061-rotate-list](https://github.com/nikhilesh-git/Leetcode/tree/master/0061-rotate-list) |
| [0141-linked-list-cycle](https://github.com/nikhilesh-git/Leetcode/tree/master/0141-linked-list-cycle) |
| [0142-linked-list-cycle-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0142-linked-list-cycle-ii) |
| [0160-intersection-of-two-linked-lists](https://github.com/nikhilesh-git/Leetcode/tree/master/0160-intersection-of-two-linked-lists) |
| [0206-reverse-linked-list](https://github.com/nikhilesh-git/Leetcode/tree/master/0206-reverse-linked-list) |
| [0234-palindrome-linked-list](https://github.com/nikhilesh-git/Leetcode/tree/master/0234-palindrome-linked-list) |
| [0237-delete-node-in-a-linked-list](https://github.com/nikhilesh-git/Leetcode/tree/master/0237-delete-node-in-a-linked-list) |
| [0908-middle-of-the-linked-list](https://github.com/nikhilesh-git/Leetcode/tree/master/0908-middle-of-the-linked-list) |
## String
|  |
| ------- |
| [0005-longest-palindromic-substring](https://github.com/nikhilesh-git/Leetcode/tree/master/0005-longest-palindromic-substring) |
| [0017-letter-combinations-of-a-phone-number](https://github.com/nikhilesh-git/Leetcode/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0022-generate-parentheses](https://github.com/nikhilesh-git/Leetcode/tree/master/0022-generate-parentheses) |
| [0044-wildcard-matching](https://github.com/nikhilesh-git/Leetcode/tree/master/0044-wildcard-matching) |
| [0115-distinct-subsequences](https://github.com/nikhilesh-git/Leetcode/tree/master/0115-distinct-subsequences) |
| [0125-valid-palindrome](https://github.com/nikhilesh-git/Leetcode/tree/master/0125-valid-palindrome) |
| [0205-isomorphic-strings](https://github.com/nikhilesh-git/Leetcode/tree/master/0205-isomorphic-strings) |
| [0451-sort-characters-by-frequency](https://github.com/nikhilesh-git/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [0516-longest-palindromic-subsequence](https://github.com/nikhilesh-git/Leetcode/tree/master/0516-longest-palindromic-subsequence) |
| [0583-delete-operation-for-two-strings](https://github.com/nikhilesh-git/Leetcode/tree/master/0583-delete-operation-for-two-strings) |
| [0812-rotate-string](https://github.com/nikhilesh-git/Leetcode/tree/master/0812-rotate-string) |
| [1170-shortest-common-supersequence](https://github.com/nikhilesh-git/Leetcode/tree/master/1170-shortest-common-supersequence) |
| [1250-longest-common-subsequence](https://github.com/nikhilesh-git/Leetcode/tree/master/1250-longest-common-subsequence) |
| [1437-minimum-insertion-steps-to-make-a-string-palindrome](https://github.com/nikhilesh-git/Leetcode/tree/master/1437-minimum-insertion-steps-to-make-a-string-palindrome) |
| [1737-maximum-nesting-depth-of-the-parentheses](https://github.com/nikhilesh-git/Leetcode/tree/master/1737-maximum-nesting-depth-of-the-parentheses) |
| [1885-count-number-of-homogenous-substrings](https://github.com/nikhilesh-git/Leetcode/tree/master/1885-count-number-of-homogenous-substrings) |
| [1890-sum-of-beauty-of-all-substrings](https://github.com/nikhilesh-git/Leetcode/tree/master/1890-sum-of-beauty-of-all-substrings) |
## Hash Table
|  |
| ------- |
| [0017-letter-combinations-of-a-phone-number](https://github.com/nikhilesh-git/Leetcode/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0141-linked-list-cycle](https://github.com/nikhilesh-git/Leetcode/tree/master/0141-linked-list-cycle) |
| [0142-linked-list-cycle-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0142-linked-list-cycle-ii) |
| [0160-intersection-of-two-linked-lists](https://github.com/nikhilesh-git/Leetcode/tree/master/0160-intersection-of-two-linked-lists) |
| [0169-majority-element](https://github.com/nikhilesh-git/Leetcode/tree/master/0169-majority-element) |
| [0205-isomorphic-strings](https://github.com/nikhilesh-git/Leetcode/tree/master/0205-isomorphic-strings) |
| [0229-majority-element-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0229-majority-element-ii) |
| [0451-sort-characters-by-frequency](https://github.com/nikhilesh-git/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [1890-sum-of-beauty-of-all-substrings](https://github.com/nikhilesh-git/Leetcode/tree/master/1890-sum-of-beauty-of-all-substrings) |
## Divide and Conquer
|  |
| ------- |
| [0169-majority-element](https://github.com/nikhilesh-git/Leetcode/tree/master/0169-majority-element) |
| [0240-search-a-2d-matrix-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0240-search-a-2d-matrix-ii) |
## Sorting
|  |
| ------- |
| [0169-majority-element](https://github.com/nikhilesh-git/Leetcode/tree/master/0169-majority-element) |
| [0229-majority-element-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0229-majority-element-ii) |
| [0451-sort-characters-by-frequency](https://github.com/nikhilesh-git/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [0455-assign-cookies](https://github.com/nikhilesh-git/Leetcode/tree/master/0455-assign-cookies) |
## Counting
|  |
| ------- |
| [0169-majority-element](https://github.com/nikhilesh-git/Leetcode/tree/master/0169-majority-element) |
| [0229-majority-element-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0229-majority-element-ii) |
| [0451-sort-characters-by-frequency](https://github.com/nikhilesh-git/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [1890-sum-of-beauty-of-all-substrings](https://github.com/nikhilesh-git/Leetcode/tree/master/1890-sum-of-beauty-of-all-substrings) |
## Stack
|  |
| ------- |
| [0144-binary-tree-preorder-traversal](https://github.com/nikhilesh-git/Leetcode/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/nikhilesh-git/Leetcode/tree/master/0145-binary-tree-postorder-traversal) |
| [0234-palindrome-linked-list](https://github.com/nikhilesh-git/Leetcode/tree/master/0234-palindrome-linked-list) |
| [1737-maximum-nesting-depth-of-the-parentheses](https://github.com/nikhilesh-git/Leetcode/tree/master/1737-maximum-nesting-depth-of-the-parentheses) |
## Tree
|  |
| ------- |
| [0144-binary-tree-preorder-traversal](https://github.com/nikhilesh-git/Leetcode/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/nikhilesh-git/Leetcode/tree/master/0145-binary-tree-postorder-traversal) |
## Binary Tree
|  |
| ------- |
| [0144-binary-tree-preorder-traversal](https://github.com/nikhilesh-git/Leetcode/tree/master/0144-binary-tree-preorder-traversal) |
| [0145-binary-tree-postorder-traversal](https://github.com/nikhilesh-git/Leetcode/tree/master/0145-binary-tree-postorder-traversal) |
## Greedy
|  |
| ------- |
| [0044-wildcard-matching](https://github.com/nikhilesh-git/Leetcode/tree/master/0044-wildcard-matching) |
| [0410-split-array-largest-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0410-split-array-largest-sum) |
| [0455-assign-cookies](https://github.com/nikhilesh-git/Leetcode/tree/master/0455-assign-cookies) |
## Simulation
|  |
| ------- |
| [0059-spiral-matrix-ii](https://github.com/nikhilesh-git/Leetcode/tree/master/0059-spiral-matrix-ii) |
## Enumeration
|  |
| ------- |
| [0856-consecutive-numbers-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0856-consecutive-numbers-sum) |
## Prefix Sum
|  |
| ------- |
| [0410-split-array-largest-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0410-split-array-largest-sum) |
## Heap (Priority Queue)
|  |
| ------- |
| [0451-sort-characters-by-frequency](https://github.com/nikhilesh-git/Leetcode/tree/master/0451-sort-characters-by-frequency) |
## Bucket Sort
|  |
| ------- |
| [0451-sort-characters-by-frequency](https://github.com/nikhilesh-git/Leetcode/tree/master/0451-sort-characters-by-frequency) |
## String Matching
|  |
| ------- |
| [0812-rotate-string](https://github.com/nikhilesh-git/Leetcode/tree/master/0812-rotate-string) |
## Backtracking
|  |
| ------- |
| [0017-letter-combinations-of-a-phone-number](https://github.com/nikhilesh-git/Leetcode/tree/master/0017-letter-combinations-of-a-phone-number) |
| [0022-generate-parentheses](https://github.com/nikhilesh-git/Leetcode/tree/master/0022-generate-parentheses) |
| [0494-target-sum](https://github.com/nikhilesh-git/Leetcode/tree/master/0494-target-sum) |
## Memoization
|  |
| ------- |
| [0070-climbing-stairs](https://github.com/nikhilesh-git/Leetcode/tree/master/0070-climbing-stairs) |
<!---LeetCode Topics End-->