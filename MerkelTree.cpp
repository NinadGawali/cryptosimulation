// MerkleTree.cpp
#include "MerkelTree.h"
#include <string>
#include <vector>
#include <functional> 
#include <sstream>

// Simulated SHA256 using std::hash (not cryptographic)
std::string simpleHash(const std::string& str)
{
    std::hash<std::string> hasher;
    size_t hashValue = hasher(str);

    // Convert hashValue to hex string
    std::stringstream ss;
    ss << std::hex << hashValue;
    return ss.str();
}

std::string MerkleTree::computeMerkleRoot(const std::vector<OrderBookEntry>& entries)
{
    std::vector<std::string> hashes;

    for (const auto& entry : entries)
    {
        std::string data = entry.username + entry.product + std::to_string(entry.price) +
                           std::to_string(entry.amount) + entry.timestamp;
        hashes.push_back(simpleHash(data));
    }

    while (hashes.size() > 1)
    {
        std::vector<std::string> newHashes;
        for (size_t i = 0; i < hashes.size(); i += 2)
        {
            if (i + 1 < hashes.size())
                newHashes.push_back(simpleHash(hashes[i] + hashes[i + 1]));
            else
                newHashes.push_back(hashes[i]); // Odd number, carry forward
        }
        hashes = newHashes;
    }

    return hashes.empty() ? "" : hashes[0];
}
