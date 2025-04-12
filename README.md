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


---

## 🛠️ How to Download and Run

### 📦 Clone the Repository

Clone the repository to your local machine:

```bash
git clone https://github.com/your-username/simple-crypto-simulation.git
cd simple-crypto-simulation/src

🧰 Compile the Project
To compile the project, you need g++ installed on your machine.

For Linux or macOS:

g++ main.cpp MerkelMain.cpp Wallet.cpp OrderBook.cpp OrderBookEntry.cpp CSVReader.cpp -o merklerex


▶️ Run the Application
After compiling the project, run the application:

On Linux/macOS:
./merklerex

On Windows:
merklerex.exe



