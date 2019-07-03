#ifndef mqtt_simoli.h
#define mqtt_simoli

class Mqtt_simoli
{
private:
  String server;

public:
  Mqtt_simoli(/* args */);
  String getServer();
  void setServer(String value)
  {
  }
};

#endif