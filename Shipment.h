#ifndef SHIPMENT_H
#define SHIPMENT_H

#include <string>

class Shipment {
  public:
    Shipment();
    Shipment(
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
      int shippingCost
    );
    virtual double calculateCost() = 0;

    std::string getSenderName();
    std::string getSenderAddress();
    std::string getSenderCity();
    std::string getSenderState();
    std::string getSenderZip();
    std::string getRecipientName();
    std::string getRecipientAddress();
    std::string getRecipientCity();
    std::string getRecipientState();
    std::string getRecipientZip();

    void setSenderName(std::string name);
    void setSenderAddress(std::string address);
    void setSenderCity(std::string city);
    void setSenderState(std::string state);
    void setSenderZip(std::string zip);
    void setRecipientName(std::string name);
    void setRecipientAddress(std::string address);
    void setRecipientCity(std::string city);
    void setRecipientState(std::string state);
    void setRecipientZip(std::string zip);

  private:
    // Sender data
    std::string senderName;
    std::string senderAddress;
    std::string senderCity;
    std::string senderState;
    std::string senderZip;
  
    // Recipient data
    std::string recipientName;
    std::string recipientAddress;
    std::string recipientCity;
    std::string recipientState;
    std::string recipientZip;

  protected:
    double shippingCost;
};

#endif