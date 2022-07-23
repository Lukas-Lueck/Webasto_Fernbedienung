# Webasto GSM-Fernbedienung

Dies ist ein kleines Projekt von  mir, was ich vor ein paar Jahren umgesetzt habe. Gesteuert wird eine Webasto Thermo Top Evo 5, sollte allerdings mit allen anderen Standheizungen auch funktionieren, da nur der "Tastendruck" an der Controlunit simuliert wird. 

## Funktion
Es handelt sich um ein arduino-gesteuertes GSM-Fernbedienungsmodul, welches über eine Signalleitung die Multicontroleinheit einer Webasto Standheizung steuert.

Wird das Modul von einer im Code festgelegten Nummer angerufen, wird zur Bestätigung der Anruf kurz angenommen und nach einer Sekunde wieder aufgelegt. Danach wird die Standheizung ein- oder ausgeschalten, je nach vorherigem Schaltzustand. Unbekannte Nummern werden einfach abgewiesen. Die Heizzeit und der Heizungsmodus muss vorher in der Controllunit festgelegt werden.

## Einbau
Angeklemmt wird das Modul im Fzg. auf Klemme 30 und 31, die Signalleitung des Moduls muss in der Controlunit verlötet werden. Den Lötpunkt bitte messtechnisch ermitteln, direkt an der Heiztaste der Controlleinheit. Dafür muss das Gehäuse geöffnet werden. Die Signalleitung kann über den Diagnoseingang aus dem Gehäuse geführt werden. 
Bei meinem Fzg. habe ich bei verbautem Modul einen Ruhestrom von 84 mA, was im Rahmen liegt (mit ausgelöteten Kontroll-LED's vom Arduino/GSM-Shield).

Hinweis: Das Verbauen und Betreiben des Moduls im Fahrzeug erfolgt auf eigene Verantwortung! Ich übernehme keinerlei Haftung für evlt. auftretende (Personen-)Schäden.

## Lizenz

[MIT](LICENSE.md)
