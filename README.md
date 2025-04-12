# Simple Crypto Simulation (C++ OOP)

This is a simple cryptocurrency exchange simulation implemented in **C++** using Object-Oriented Programming (OOP) principles. The project simulates an order book system with the ability to process **bids** and **asks**, manage user **wallets**, and match orders based on historical trading data.

---

## How to Download and Run

### Clone the Repository

To get started, clone this repository to your local machine:

```bash
git clone https://github.com/your-username/simple-crypto-simulation.git
cd simple-crypto-simulation/src
```

### Compile the Project
To compile the project, you will need g++ installed on your machine.

On Linux/macOS:
```bash
g++ main.cpp MerkelMain.cpp Wallet.cpp OrderBook.cpp OrderBookEntry.cpp CSVReader.cpp -o merklerex
```

### Running the Application
Once compiled, you can run the application.

On Linux/macOS:
```bash
./merklerex
```
On Windows:
```bash
merklerex.exe
```
## How to Use the Console Application
Once the application starts, you will be presented with the following menu:
```terminal
Welcome to Merkelrex Exchange!
===============================
1: Print help
2: Show exchange stats
3: Make an ask
4: Make a bid
5: Print wallet
6: Continue
```
---
### Menu Options
1: Print Help: Displays a list of available commands.

2: Show Exchange Stats: Displays the current state of the exchange, including active asks, bids, and the order book.

3: Make an Ask: Create a sell order (ask) with price and amount.

4: Make a Bid: Create a buy order (bid) with price and amount.

5: Print Wallet: Displays the current balance in your wallet.

6: Continue: Advances the simulation to the next time frame in the data.

---
### Sample Ask/Bid Input Examples
When making asks or bids, the input format is:
```bash
Enter the order: product,orderType,price,amount
```
### Examples of Valid Asks

```txt
ETH/BTC,ask,0.02193217,36.8
ETH/BTC,ask,0.02194444,1.37106559
DOGE/BTC,ask,0.00000042,5952282.4414734
DOGE/BTC,ask,0.00000046,2880183.0593082
```
### Examples of Valid Bids
``` txt
ETH/BTC,bid,0.02188401,7.44192988
ETH/BTC,bid,0.0218731,9.13685695
DOGE/BTC,bid,0.00000043,2500000

```


License
This project is open-source and free to use under the MIT License.

Author
Created with ❤️ for learning purpose.
Feel free to contribute or raise issues in the repository.

Resources
C++ Documentation

MIT License
