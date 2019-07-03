#include <Arduino.h>
#include <mqtt_simoli.h>

void mqtt_simoli::function(/* args */){
    /* function code */
};

mqtt_simoli::mqtt_simoli(/* args */)
{
}
void mqtt_simoli::setServer(String value)
{
  this.server = value;
}
String mqtt_simoli::setServer()
{
  return this.server;
}
mqtt_simoli broker = mqtt_simoli();