#include "PizzaStore.h"

#include <iostream>

namespace {
auto isValidOrder(const std::string& orderName) -> bool {
  return orderName == "Margherita" || orderName == "Hawaiian" ||
         orderName == "Napoletan" || orderName == "Marinara" ||
         orderName == "Ortolana";
}

auto isValidDrink(const std::string& drinkName) -> bool {
  return drinkName == "Vodka" || drinkName == "Whiskey" ||
         drinkName == "Rice Wine" || drinkName == "Coke";
}
}

void PizzaStore::orderPizza(const std::string& pizzaName) {
  if (!isValidOrder(pizzaName)) {
    std::cout << "Invalid pizza order\n";
    return;
  }

  // accept the order
  m_pizzaOrders.push_back(pizzaName);
}

void PizzaStore::makePizza() {
  for (const auto& order : m_pizzaOrders) {
    std::string topping = m_toppingOrders.count(order) > 0
                              ? " with topping " + m_toppingOrders.at(order)
                              : "";
    std::cout << "Doing " << order << " pizza" << topping << "\n";
  }
}

void PizzaStore::advertiseOnTiktok() {
  for (const auto& order : m_pizzaOrders) {
    std::cout << "Showing pizza " << order << " on tiktok\n";
  }
}

void PizzaStore::orderDrink(const std::string& drinkName) {
  if (!isValidDrink(drinkName)) {
    std::cout << "Invalid drink order\n";
    return;
  }

  m_drinkOrders.push_back(drinkName);
}

void PizzaStore::makeDrink() {
  for (const auto& drink : m_drinkOrders) {
    std::cout << "Making drink " << drink << "\n";
  }
}

void PizzaStore::addTopping(const std::string& pizzaName,
                            const std::string& toppingName) {
  m_toppingOrders[pizzaName] = toppingName;
}

void PizzaStore::showAllOrders() {
  for (const auto& pizza : m_pizzaOrders) {
    std::cout << "Pizza order:\n";
    std::cout << "Name: " << pizza << "\n";
    if (m_toppingOrders.count(pizza) > 0) {
      std::cout << "Topping: " << m_toppingOrders.at(pizza) << "\n";
    }
  }
}