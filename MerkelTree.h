// MerkleTree.h
#pragma once
#include <string>
#include <vector>
#include "OrderBookEntry.h"

class MerkleTree
{
public:
    static std::string computeMerkleRoot(const std::vector<OrderBookEntry>& entries);
};
