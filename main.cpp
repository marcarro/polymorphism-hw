// Héctor Marcelo Arroyo Morantte – A00837236
// Victoria Valentina Marin Dominguez – A00836008

#include <iostream>
#include <vector>
#include <string>
#include "Shipment.h"
#include "Package.h"
#include "Envelope.h"
using namespace std;

int main() {
  string name = "Hector", addy = "San J.", city = "Monterrey", state = "NL", zip = "64630";
  string name1 = "Victoria", addy1 = "Resis", city1 = "Monterrey", state1 = "NL", zip1 = "64849";
  
  // Shipment shipment1(name, addy, city, state, zip, name, addy, city, state, zip, 30);
  Package package1(name, addy, city, state, zip, name1, addy1, city1, state1, zip1, 30, 1, 2, 3, 4, 10);
  Envelope envelope1(name1, addy1, city1, state1, zip1, name, addy, city, state, zip, 30, 26, 30, 15);
  
  vector<Shipment*> shipments = {&package1, &envelope1};
  int totalCost = 0;
  
  for (auto shipment: shipments) {
    cout << 

      "SENDER INFORMATION:\nName: " << shipment->getSenderName() <<
      "\nAddress: " << shipment->getSenderAddress() << 
      "\nCity: " << shipment->getSenderCity() <<
      "\nState: " << shipment->getSenderState() <<
      "\nZip: " << shipment->getSenderZip() << "\n" << 
      string(10, '-') << "\n" << 
      "RECIPIENT INFORMATION:\nName: " << shipment->getRecipientName() <<
      "\nAddress: " << shipment->getRecipientAddress() << 
      "\nCity: " << shipment->getRecipientCity() <<
      "\nState: " << shipment->getRecipientState() <<
      "\nZip: " << shipment->getRecipientZip() << 
      "\n\nCost: " << shipment->calculateCost() << "\n\n\n";
      
      totalCost += shipment->calculateCost();
  }

  cout << "Total cost of packages: " << totalCost << "\n";
}