#ifndef PIZZA_STORE_H_
#define PIZZA_STORE_H_

#include <string>
#include <unordered_map>
#include <vector>

class PizzaStore {
 public:
  PizzaStore() = default;
  void advertiseOnTiktok();
  void makePizza();
  void orderPizza(const std::string& pizzaName);
  void addTopping(const std::string& pizzaName,
                  const std::string& toppingName);
  void removeTopping(const std::string& pizzaName,
                     const std::string& toppingName);
  void orderDrink(const std::string& drinkName);
  void makeDrink();
  void showAllOrders();

 private:
  std::vector<std::string> m_pizzaOrders;
  std::vector<std::string> m_drinkOrders;
  std::unordered_map<std::string, std::string> m_toppingOrders;
};
#endif