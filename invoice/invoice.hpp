#include <string>

class Invoice {
 private:
  std::string number;
  std::string description;
  int quantity;
  int pricePerItem;

 public:
  Invoice(const std::string&, const std::string&, int, int);
  const std::string& getNumber() const;

  const std::string& getDescription() const;

  const int& getQuantity() const;

  const int& getPricePerItem() const;

  const int& getInvoiceAmount() const;

  void setNumber(const std::string&);

  void setDescription(const std::string&);

  //  If the quantity is not positive, it should be set to 0
  void setQuantity(const int&);

  //  If the price per item is not positive, it should be set to 0
  void setPricePerItem(const int&);
};