#include <PubSubClient.h>

#include <UIPEthernet.h>
#include <utility/logging.h>

#include <SPI.h>

//Variável itilizada para enviar as mensagens utilizando o clinte MQTT
boolean mensagem;

//Define o endereço MAC que será utilizado
byte mac[] = {0xAE, 0x81, 0xBA, 0xC6, 0xCE, 0x0E};

//Inicia o cliente Ethernet
EthernetClient client;

//Inicia o cliente MQTT
PubSubClient mqttClient(client);

void setup() {
    //Inicia o controlador Ethernet e solicita um IP para o servidor de DHCP
    Ethernet.begin(mac);

    //Inicia o monitor Serial
    Serial.begin(9600);

    //Define o IP TCP do Broker MQTT que vamos utilizar
    mqttClient.setServer("54.144.190.205", 1883);

    //Exibe no Monitor Serial as informações sobre o IP do Arduino
    Serial.print("O IP do Arduino e: ");
    Serial.println(Ethernet.localIP());

    //Exibe no Monitor Serial as informações sobre a Máscara de Rede do Arduino
    Serial.print("A Mascara de Rede do Arduino e: ");
    Serial.println(Ethernet.subnetMask());

    //Exibe no Monitor Serial as informações sobre o Gateway do Arduino
    Serial.print("O Gateway do Arduino e: ");
    Serial.println(Ethernet.gatewayIP());

    //Exibe uma linha em branco
    Serial.println("");

    delay(500);

}

void loop() {

    mqttClient.connect("matheusfernandes");

    mensagem = mqttClient.publish("matheusfernandes-t", "FUNCIONOU!");

    Serial.println(mensagem);

    mqttClient.loop();

    delay(500);
}