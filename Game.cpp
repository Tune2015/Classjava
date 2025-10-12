// Base class for all transactions
class Transaction {
protected:
    std::string description;
    double amount;
    std::string date;
public:
    Transaction(std::string desc, double amt, std::string dt);
    virtual void display() const = 0;
    virtual std::string getType() const = 0;
    double getAmount() const;
    std::string getDate() const;
    std::string getDescription() const;
};

// Derived classes
class Income : public Transaction {
public:
    Income(std::string desc, double amt, std::string dt);
    void display() const override;
    std::string getType() const override;
};

class Expense : public Transaction {
public:
    Expense(std::string desc, double amt, std::string dt);
    void display() const override;
    std::string getType() const override;
};

// Category class
class Category {
private:
    std::string name;
    std::vector<Transaction*> transactions;
public:
    Category(std::string name);
    void addTransaction(Transaction* t);
    double getTotal() const;
    void displayTransactions() const;
};

// Budget class
class Budget {
private:
    std::map<std::string, double> categoryLimits;
public:
    void setLimit(std::string category, double limit);
    bool isWithinLimit(std::string category, double spent) const;
    void displayLimits() const;
};

// Controller class
class FinanceManager {
private:
    std::map<std::string, Category> categories;
    Budget budget;
public:
    void addTransaction(std::string category, Transaction* t);
    void setBudget(std::string category, double limit);
    void generateReport() const;
    void saveToFile(std::string filename) const;
    void loadFromFile(std::string filename);
};