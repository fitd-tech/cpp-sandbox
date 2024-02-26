#include <vector>
#include <string>
#include "debug.hpp"
#include "supermarket_queue.hpp"

// https://www.codewars.com/kata/57b06f90e298a7b53d000a86/cpp

/* 
    reverse the customers array
    pop n customers from the reversed array into the queue array
    track the smallest int
    iterate through the queue array and make a new array without the smallest int
    add the smallest int to total_time
    while the reversed array is greater than n,
    pop a customer from the reversed array
    if the popped customer is the smallest value, add it to total_time
    otherwise add it to the array
    when the reverse array is equal to n, add the largest number to total_time
    return total_time 
*/

long SupermarketQueue(std::vector<int> customers, int n) {
    long total_time = 0;
    if (customers.size() <= n) {
        for (int i = 0; i < customers.size(); i++) {
            total_time += customers[i];
        }
        return total_time;
    }
    std::vector<int> reversed_array = {};
    for (auto it = std::crbegin(customers); it != std::crend(customers); it++) {
        reversed_array.push_back(*it);
    }
    std::vector<int> customers_at_tills = {};
    int shortest_visit = std::numeric_limits<int>::max();
    int shortest_visit_index = 0;
    int longest_visit = 0;
    int longest_visit_index;
    for (int i = 0; i < n; i++) {
        int current_customer = reversed_array[reversed_array.size() - 1];
        if (current_customer < shortest_visit) {
            shortest_visit = current_customer;
            shortest_visit_index = i;
        }
        if (current_customer > longest_visit) {
            longest_visit = current_customer;
            longest_visit_index = i;
        }
        customers_at_tills.push_back(current_customer);
        reversed_array.pop_back();
    }
    while (reversed_array.size() > n) {
        int current_customer = reversed_array[reversed_array.size() - 1];
        customers_at_tills.push_back(current_customer);
        if (current_customer < shortest_visit) {
            shortest_visit = current_customer;
            shortest_visit_index = customers_at_tills.size() - 1;
        }
        if (current_customer > longest_visit) {
            longest_visit = current_customer;
            longest_visit_index = customers_at_tills.size() - 1;
        }
        total_time += customers_at_tills[shortest_visit_index];
        customers_at_tills.erase(customers_at_tills.begin() + shortest_visit_index);
    }
    total_time += customers_at_tills[longest_visit_index];
    return total_time;
}
