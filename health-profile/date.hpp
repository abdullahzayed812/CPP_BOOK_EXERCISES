class Date {
 private:
  int day;
  int month;
  int year;

 public:
  Date(const int&, const int&, const int&);
  const int& getDay() const;
  const int& getMonth() const;
  const int& getYear() const;

  void setDay(const int&);
  void setMonth(const int&);
  void setYear(const int&);

  void displayDate() const;
};