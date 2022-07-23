# Webasto Telestart

Dies ist ein kleines Projekt von  mir, was ich vor ein paar Jahren umgesetzt habe.

## Funktion
Es handelt sich um ein arduino-gesteuertes GSM-Fernbedienungsmodul, welches über eine Signalleitung die Multicontroleinheit einer Webasto Standheizung steuert.

Wird das Modul von einer im Code festgelegten Nummer angerufen, wird zur Bestätigung der Anruf kurz angenommen und danach wieder aufgelegt. Danach wird die Standheizung ein- oder ausgeschalten, je nach vorherigem Schaltzustand. Unbekannte Nummern werden einfach abgewiesen. Die Heizzeit und der Heizungsmodus muss vorher in der Controllunit festgelegt werden.

## Einbau
Angeklemmt wird das Modul im Fzg. auf Klemme 30 und 31, die Signalleitung des Moduls muss in der Konttrolleinheit verlötet werden (Lötpunkt siehe Bild Control_Unit). Bei meinem Fzg. habe ich bei verbautem Modul einen Ruhestrom von 84 mA, was durchaus im Rahmen liegt (mit ausgelöteten Kontroll-LED's vom Arduino/GSM-Shield).

Hinweis: Das Verbauen und Betreiben des Moduls im Fahrzeug erfolgt auf eigene Verantwortung! Ich übernehme keinerlei Haftung für evlt. auftretende (Personen-)Schäden. Siehe auch -> LICENSE

## License

[MIT](LICENSE.md)
