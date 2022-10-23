"""
Print the below cross (X) star pattern for given size.
input = 5
     <--- 5 --->
* * *           * * *
* * * *       * * * *
* * * * *   * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
* * * * *   * * * * *
* * * *       * * * *
* * *           * * *

input = 3
   <- 3 ->
* *       * *
* * *   * * *
  * * * * *
    * * *
  * * * * *
* * *   * * *
* *       * *
"""

n = int(input())
j = n
for i in range(int((n + 1) / 2), n * 1 + 1):
    print("* " * i, "  " * (j - 1), "* " * i)
    j -= 2

for i in range(1, n, 2):
    print(" " * i, "* " * ((n * 2) - i))

print(" " * n, "* " * n)

for i in range((n - 2), 0, -2):
    print(" " * i, "* " * ((n * 2) - i))

for i in range(n * 1 + 1, int((n + 1) / 2), -1):
    print("* " * (i-1), "  " * (j + 1), "* " * (i-1))
    j += 2
