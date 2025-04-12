# 🛡️ Simple Crypto Simulation (C++ OOP)

A basic cryptocurrency exchange simulation implemented in **C++** using Object-Oriented Programming (OOP) concepts. The application simulates an order book system, supporting bids and asks, user wallets, and simple trade matching based on historical cryptocurrency data. 

---

## 📂 Project Structure

The `src/` folder contains the following files:

20200317.csv # Sample historical crypto trading data
CSVReader.cpp/.h # Utility for parsing CSV files
MerkelMain.cpp/.h # Core exchange logic and menu interaction
OrderBook.cpp/.h # Order management (asks/bids)
OrderBookEntry.cpp/.h # Represents a single entry in the order book
Wallet.cpp/.h # Simulates user wallet balance and transactions
main.cpp # Entry point to the console app
merklerex.exe # Compiled Windows executable
