# Algorithm_and_Data_Structures
* Reference source from github: https://github.com/nguyenvanhieuvn
## Week 1
  C++ program to print all the prime number small than or equal to n (a given number) by Sieve of Eratosthenes
* Idea: 
- Step 1: Initialize a bool array(or vector) with n+1 elements, set all the elements is true
        bool prime[n+1];
- Step 2: Create a for loop, mark all the numbers aren't a prime number with the label false:
        + In each time in for loop, another for loop to mark numbers that are multiples of primes as false
        for(int p = 2; p*p <= n; p++){
           if(prime[p]){
              for(int i = p*p; i<=n;i+=p){  // increase p number each time
                  prime[i] = false;
              }
           }
        }

* Full function code

void SieveOfEratosthenes(int n){   

    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers

    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
 