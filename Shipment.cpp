#include "Shipment.h"

Shipment::Shipment() {
  senderName = "Sender Name";
  senderAddress = "Sender Address";
  senderCity = "Sender City";
  senderState = "Sender State";
  senderZip = "Sender Zip";

  recipientName = "Recipient Name";
  recipientAddress = "Recipient Address";
  recipientCity = "Recipient City";
  recipientState = "Recipient State";
  recipientZip = "Recipient Zip";

  shippingCost = 0.0;
}

Shipment::Shipment(
      std::string nameS, 
      std::string addyS, 
      std::string cityS, 
      std::string stateS, 
      std::string zipS, 
      std::string nameR, 
      std::string addyR, 
      std::string cityR, 
      std::string stateR, 
      std::string zipR,
      int shippingCostIn
) {
  senderName = nameS;
  senderAddress = addyS;
  senderCity = cityS;
  senderState = stateS;
  senderZip = zipS;

  recipientName = nameR;
  recipientAddress = addyR;
  recipientCity = cityR;
  recipientState = stateR;
  recipientZip = zipR;

  shippingCost = shippingCostIn;
}

std::string Shipment::getSenderName() { return senderName; }
std::string Shipment::getSenderAddress() { return senderAddress; }
std::string Shipment::getSenderCity() { return senderCity; }
std::string Shipment::getSenderState() { return senderState; }
std::string Shipment::getSenderZip() { return senderZip; }
std::string Shipment::getRecipientName() { return recipientName; }
std::string Shipment::getRecipientAddress() { return recipientAddress; }
std::string Shipment::getRecipientCity() { return recipientCity; }
std::string Shipment::getRecipientState() { return recipientState; }
std::string Shipment::getRecipientZip() { return recipientZip; }

void Shipment::setSenderName(std::string name) { senderName = name; }
void Shipment::setSenderAddress(std::string address) { senderAddress = address; }
void Shipment::setSenderCity(std::string city) { senderCity = city; }
void Shipment::setSenderState(std::string state) { senderState = state; }
void Shipment::setSenderZip(std::string zip) {senderZip = zip; }
void Shipment::setRecipientName(std::string name)  { recipientName = name; }
void Shipment::setRecipientAddress(std::string address) { recipientAddress = address; }
void Shipment::setRecipientCity(std::string city) { recipientCity = city; }
void Shipment::setRecipientState(std::string state) { recipientState = state; }
void Shipment::setRecipientZip(std::string zip) { recipientZip = zip; }