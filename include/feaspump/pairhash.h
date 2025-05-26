/**
 * @file pairhash.h
 * @brief Custom hash function to help find index of current solution (with the help of isInCache function)
 *
 * @author Arvell Leoputra
 * 2025
 */

#ifndef PAIRHASH_H
#define PAIRHASH_H

#include <vector>

struct PairHash {
    std::size_t operator()(const std::pair<double, std::vector<double>>& x) const {
        std::size_t seed = std::hash<double>()(x.first);
        for (const auto& val : x.second) {
            seed ^= std::hash<double>()(val) + 0x9e3779b9 + (seed << 6) + (seed >> 2);  // hash combine
        }
        return seed;
    }
};

#endif /* PAIRHASH_H */
