# Projeto MQTT-matheusfernandes
Esse repositório tem como objetivo ser usado para a entrega do Projeto desenvolvido na Sprint 8 do 1° TERMO do Curso Técnico de Redes de  Computadores da Escola SENAI de Informática. 

## Objetivo
O objetivo desse projeto é utilizar o Arduino Uno juntamente com um Sensor Magnético para o monitoramento da porta de um Rack de rede, fazendo a seguinte verificação: **RACK ABERTO** ou **RACK FECHADO**. Após esta análise, a informação será enviada via internet utilizando o protocolo MQTT (_Message Queuing Telemetry Transport_) para um servidor MQTT hospedado na _Amazon Web Service_ (AWS) e assim, exibida em um cliente MQTT.

<h1>
    <h1 align="center">
    <img src="https://i.ibb.co/yhcL9y8/img1.png">
</h1>

Aplicativo onde as informações serão exibidas:

Plataforma | Aplicativo
--- | ---------
Android | [MQTT Dash](https://play.google.com/store/apps/details?id=net.routix.mqttdash&hl=pt_BR&gl=US)
IOS | [MQTTool](https://apps.apple.com/us/app/mqttool/id1085976398)

Bibliotecas utilizadas:
- [UIPEthernet](https://github.com/UIPEthernet/UIPEthernet) (Conexão do ENC28J60 com o Arduino)
- [PubSubClient](https://github.com/knolleary/pubsubclient) (Cliente MQTT para o Arduino)

## Materiais utilizados

* Arduino Uno;
* Módulo Ethernet (ENC28J60);
* Sensor Magnético (MC-38);
* Jumpers.

## Circuito
  
<h1>
    <h1 align="center">
    <img src="https://i.ibb.co/7RrjXhk/img2.png">
</h1>
