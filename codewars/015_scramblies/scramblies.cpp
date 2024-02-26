#include <vector>
#include <string>
#include <cmath>
#include <map>
#include "debug.hpp"
#include "scramblies.hpp"

// https://www.codewars.com/kata/55c04b4cc56a697bb0000048/cpp

bool Scramblies(const std::string& s1, const std::string& s2) {
    std::vector<char> s2_array = {};
    for (size_t i = 0; i < s2.length(); i++) {
        s2_array.push_back(s2[i]);
    }
    bool match_word = false;
    for (size_t i = 0; i < s1.length(); i++) {
        for (size_t j = 0; j < s2_array.size(); j++) {
            if (s2_array[j] == s1[i]) {
                s2_array.erase(s2_array.begin() + j);
                break;
            }
        }
        if (s2_array.size() == 0) {
            match_word = true;
            break;
        }
    }
    return match_word;
};

bool ScrambliesOld2(const std::string& s1, const std::string& s2) {
    std::vector<char> s1_array = {};
    for (size_t i = 0; i < s1.length(); i++) {
        s1_array.push_back(s1[i]);
    }
    bool match_word = true;
    std::vector<char> pool = s1_array;
    std::vector<char> swap = {};
    for (size_t i = 0; i < s2.length(); i++) {
        bool match_letter = false;
        for (size_t j = 0; j < pool.size(); j++) {
            if (pool[j] != s2[i] || match_letter == true) swap.push_back(pool[j]);
            else {
                match_letter = true;
            }
        }
        if (match_letter == false) {
            match_word = false;
            break;
        }
        pool = swap;
        swap = {};
    }
    return match_word;
};

bool ScrambliesOld(const std::string& s1, const std::string& s2) {
    std::vector<char> s1_array = {};
    for (size_t i = 0; i < s1.length(); i++) {
        s1_array.push_back(s1[i]);
    }
    bool match_word = true;
    std::vector<char> pool = s1_array;
    for (size_t i = 0; i < s2.length(); i++) {
        bool match_letter = false;
        for (size_t j = 0; j < pool.size(); j++) {
            if (pool[j] == s2[i]) {
                pool.erase(pool.begin() + j);
                match_letter = true;
                break;
            }
        }
        if (match_letter == false) {
            match_word = false;
            break;
        }
    }
    return match_word;
};