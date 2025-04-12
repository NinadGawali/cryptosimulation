# 🛡️ Simple Crypto Simulation (C++ OOP)

A basic cryptocurrency exchange simulation implemented in **C++** using Object-Oriented Programming (OOP) concepts. The application simulates an order book system, supporting bids and asks, user wallets, and simple trade matching based on historical cryptocurrency data. 

---

## 📂 Project Structure

The `src/` folder contains the following files:

src/ ├── 20200317.csv # Sample historical crypto trading data
├── CSVReader.cpp # Utility for parsing CSV files
├── CSVReader.h # Header for CSVReader class
├── MerkelMain.cpp # Core exchange logic and menu interaction
├── MerkelMain.h # Header for MerkelMain class
├── OrderBook.cpp # Manages orders (asks and bids)
├── OrderBook.h # Header for OrderBook class
├── OrderBookEntry.cpp # Represents a single entry in the order book
├── OrderBookEntry.h # Header for OrderBookEntry class
├── Wallet.cpp # Simulates user wallet balance and transactions
├── Wallet.h # Header for Wallet class
├── main.cpp # Entry point to the console app
├── merklerex.exe # Compiled Windows executable


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



