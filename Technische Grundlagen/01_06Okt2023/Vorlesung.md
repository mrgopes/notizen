# Bit

- von Leibnitz erfunden
	- Differenzialgleichung, Ableitung, Integralrechnung
	- Taktum (bei Prozesoren)
	- Mathematiker
	- Wie man das Denken materialisieren kann? Wie man ne Maschine zum Denken bringt?
- Wie konnte der Gott die Welt aus nichts schaffen - Leibnitz hat das Binaersystem verwendet, um Gott zu beweisen

## Zahlensysteme

Peano Axiome
Digitus - Finger

Heinz Zemanek hat ein Rechner gebaut, der auf der Basis von 10 funktioniert hat

Roemisches Zahlensysteme

### Stellenwertsysteme

Es kommt darauf vor, wo was steht, nicht wie beim Roemisches Zahlsystem, dass es das ueberhaupt ist

568(unten 10) => eine Zahl in Dezimal

#### Binaersystem

Minimalvariante
Sehr einfach technisch zu realisieren

##### Hexadezimal

0x... -> jede Zahl faengt mit 0x an

0 ... 9 A B C D E F

### Gebrochene Zahlen

Das Komma trennt den ganzzahligen vom gebrochenen

genau das selbe zersplitterung, sondern nicht nur bis zu 10^0, sondern weiter zu 10^-n, wo n ist die Anzahl des gebrochenen Stellen

Binaerzahle funktionieren genau so

**Beim Konvertieren (dividieren) von Ende nach Anfang lesen**

Beim gebrochenen Zahlen gehts nicht immer sie zu konvertieren, nur Naeherungswerte ermittlern

Bei der Gruppenbildung faengt man an rechte Seite an, falls links was uebrig bleibt, dann fuegt man nur noch irgendwieviele 0s dazu

## Bit

bit = binary digit
n bit => 2^n Zustaende

Kibi vs Kilo = 1024 vs 1000
war noch nie in einer Klausur :d

### Subtraktion
auf Addieren zurueckfuehrbar

17 - 4 = 17 + 100 - 4 - 100 = 17 + 96 - 100

#### Wie komm ich zu 96?
99 - 4 + 1
Ich ziehe eine 1 ab aus eine Nummer die nur aus lauter 1 besteht

99 - was auch immer mit 2 Ziffern ist immer 9 - 1ste Ziffer und 9 - 2te Ziffer

Das Uebertrag laesst man afoch weg

#### Funktioniert nicht auf negaive Zahle

Wenn es keine 1 auf Uebertragsstelle gibt, handelt es sich um ne negative Zahl
=> das richtige Ergebnis ist ein Komplement von dem vorherigen Ergebnis = Rueckkomplementieren

> Probier's auch mit mehr freie Plaetze (wie viel musss geben)

## Darstellung negativer Binaerzahlen

### Vorzeichen und Betrag
Zustazbit fuer + / - 0 / 1, Negativ? True or False

die Bitgroesse einer Zahl ist dann aber halt n - 1, also wir koennen nur 1 bit weniger verwenden

2-er Komplementierung: Auf der erste Stelle ist bei negativen Zahlen immer ne 1 und bei Positiven immer ne 0

### Exzess

Die kleinste Zahl die ich brauche ist 0000, dann zahle ich bis ich kann, also:

-7 -6 -5 -4 -3 -2 -1 0 1 2 3 4 5
0000 0001 0010 0011 ... bis 1111

Exzess = Bias = 16, also -16 ist 00000, dann 0 ist 10000 usw.

## Festkomma-Darstellung

### Gleitpunkt-(Gleitkomma/Fliesskomma)-Darstellung

desto naeher man zu 0 kommt, desto praeziser die Darstellung ist, 

### IEEE 754 Standard aktuell: 2008

Exponent ist mit Exzessdarstellung dargestellt = Exzess von 127

# Rundungsfehleranalytse

epsylon1 mal epsylon2 darf man so wie so weg lassen, denn es sehr klein ist
Folie etwa 79