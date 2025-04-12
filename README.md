Simple Crypto Simulation (C++ OOP)
A basic cryptocurrency exchange simulation implemented in C++ demonstrating Object-Oriented Programming concepts. The console application simulates an order book with support for bids and asks, user wallet balances, and simple trade matching mechanics based on a given dataset.

📂 Project Structure
The src/ folder contains the following files:

bash
Copy
Edit
20200317.csv             # Sample historical crypto trading data
CSVReader.cpp/.h         # Utility for parsing CSV files
MerkelMain.cpp/.h        # Core exchange logic and menu interaction
OrderBook.cpp/.h         # Order management (asks/bids)
OrderBookEntry.cpp/.h    # Represents a single entry in the order book
Wallet.cpp/.h            # Simulates user wallet balance and transactions
main.cpp                 # Entry point to the console app
merklerex.exe            # Compiled Windows executable
🛠️ How to Download and Run
📦 Clone the Repository
bash
Copy
Edit
git clone https://github.com/your-username/simple-crypto-simulation.git
cd simple-crypto-simulation/src
🧰 Compile the Project
Make sure you have g++ installed.

bash
Copy
Edit
g++ main.cpp MerkelMain.cpp Wallet.cpp OrderBook.cpp OrderBookEntry.cpp CSVReader.cpp -o merklerex
⚠️ If you're on Windows and prefer using an IDE like Code::Blocks, just create a project and add all .cpp and .h files.

▶️ Run the Application
bash
Copy
Edit
./merklerex
On Windows:

cmd
Copy
Edit
merklerex.exe
💬 How to Use the Console Application
Once the app starts, you'll be presented with a simple text-based menu:

txt
Copy
Edit
Welcome to Merkelrex Exchange!
===============================
1: Print help
2: Show exchange stats
3: Make an ask
4: Make a bid
5: Print wallet
6: Continue to next time frame
7: Exit
You can interact by entering numbers (1 to 7) corresponding to menu options.

📊 Sample Ask/Bid Input Examples
For this simulation, a correct order format will be prompted like this:

txt
Copy
Edit
Enter the order: product,orderType,price,amount
Examples that will be accepted:

✅ Valid Asks
txt
Copy
Edit
ETH/BTC,ask,0.02193217,36.8
ETH/BTC,ask,0.02194444,1.37106559
DOGE/BTC,ask,0.00000042,5952282.4414734
DOGE/BTC,ask,0.00000046,2880183.0593082
✅ Valid Bids
txt
Copy
Edit
ETH/BTC,bid,0.02188401,7.44192988
ETH/BTC,bid,0.0218731,9.13685695
❗ Notes:

Ensure that the product matches exactly with the entries in the CSV (ETH/BTC, DOGE/BTC, etc.)

Prices and amounts must be positive floating-point numbers

You must have enough balance in your wallet to make bids or asks

🧪 Features Demonstrated
C++ classes and encapsulation

Inheritance and modular design

Custom CSV parsing

Order matching mechanism

Simulated wallet transactions and balance updates

Time-step based exchange progression

📚 Ideal For
This project is perfect for:

C++ beginners looking to apply OOP concepts

Students learning about financial systems and order books

Anyone curious about basic crypto exchange simulations
