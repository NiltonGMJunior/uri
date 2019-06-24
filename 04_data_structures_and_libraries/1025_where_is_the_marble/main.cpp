#include <bits/stdc++.h>

#define MAX_N 10100

int main()
{
    // Test case number
    unsigned short int test = 0;

    // Loops while n and q are not zero
    while (true)
    {
        // Number of marbles and queries for each test case
        unsigned short int n, q;

        // Reads the first pair
        std::cin >> n >> q;

        // Break condition
        if (n == 0 && q == 0) 
            break;

        // Increments test case (for output format only)
        test++;

        // Declares and fills the marble array
        unsigned short int marbles[MAX_N];
        for (unsigned short int iii = 0; iii < n; ++iii) 
            std::cin >> marbles[iii];

        // Sorts the marbles array
        std::sort(marbles, marbles + n);

        // Test case line
        std::cout << "CASE# " << test << ":\n";

        // Binary search for each query
        for (unsigned short int _ = 0; _ < q; ++_)
        {
            // Declares and reads the current query
            unsigned short int query;
            std::cin >> query;

            // Initializes the indices of the binary search
            unsigned int first = 0, mid, last = n - 1;
            
            // Query response
            short int index = -1;

            // Performs the search
            while (first <= last && index == -1)
            {
                // Redefines mid position
                mid = (first + last) / 2;
                // Found the marble
                if (marbles[mid] == query) 
                    index = mid;
                // Maybe marble is somewhere before the mid position
                else if (marbles[mid] > query) 
                    last = mid - 1;
                // Marble could be after the mid position
                else 
                    first = mid + 1;

            }
            if (index == -1) std::cout << query << " not found\n";
            else
            {
                // In case elements are repeated, verify that the previous one is not equal
                while (index > 0 && marbles[index - 1] == marbles[index]) 
                    index -= 1;
                std::cout << query << " found at " << index + 1 << "\n";
            }
        }
    }

    return 0;
}