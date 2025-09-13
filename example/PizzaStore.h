#ifndef PIZZA_STORE_H_
#define PIZZA_STORE_H_

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

namespace ThisIsAPizzaStoreNamespace {

class PizzaStore {
 public:
  PizzaStore() = default;
  void tiktok();
  void makePizza();
  void orderPizza(const std::string& pizzaName);
  void deliver();
  void addTopping(const std::string& pizza_name,
                  const std::string& topping_name);
  void removeTopping(const std::string& pizza_name,
                     const std::string& topping_name);
  void orderDrink(const std::string& drink_name);
  void makeDrink();
  void showAllOrders();
  void partyHard();

 private:
  std::vector<std::string> p;                      // all pizza orders
  std::vector<std::string> d;                      // all drink orders
  std::unordered_map<std::string, std::string> t;  // all topping
};
}  // namespace ThisIsAPizzaStoreNamespace
#endif