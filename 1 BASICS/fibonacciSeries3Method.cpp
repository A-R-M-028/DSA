#include <iostream>

// Fibonacci using a for loop:

int fibonacciUsingLoop(int n) {
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    int prev = 0, curr = 1;
    for (int i = 2; i <= n; ++i) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int n = 10; // Change 'n' to calculate the nth Fibonacci number
    std::cout << "Fibonacci using loop: " << fibonacciUsingLoop(n) << std::endl;
    return 0;
}


// Fibonacci using recursion:

#include <iostream>

int fibonacciUsingRecursion(int n) {
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacciUsingRecursion(n - 1) + fibonacciUsingRecursion(n - 2);
}

int main() {
    int n = 10; // Change 'n' to calculate the nth Fibonacci number
    std::cout << "Fibonacci using recursion: " << fibonacciUsingRecursion(n) << std::endl;
    return 0;
}

//Fibonacci using dynamic programming (DP):

#include <iostream>
#include <vector>

int fibonacciUsingDP(int n) {
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    std::vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n = 10; // Change 'n' to calculate the nth Fibonacci number
    std::cout << "Fibonacci using dynamic programming: " << fibonacciUsingDP(n) << std::endl;
    return 0;
}
