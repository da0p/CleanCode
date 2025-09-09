#include "PizzaStore.h"

int main() {
    ThisIsAPizzaStoreNamespace::PizzaStore store;
    store.orderPizza("Margherita");
    store.addTopping("Margherita", "Basil");
    store.orderPizza("Hawaiian");
    store.addTopping("Hawaiian", "Pineapple");
    store.orderDrink("Coke");
    store.orderDrink("Vodka");
    store.makePizza();
    store.makeDrink();
    store.tiktok();
    store.showAllOrders();
    store.partyHard();
    return 0;
}