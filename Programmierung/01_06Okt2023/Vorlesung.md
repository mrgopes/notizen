# Einleitung

**Informatik:** Methoden, Konzepten, Verfahren um ein Input in einem Output zu verwandeln, Umwandlung von Mustern - enge verknuepfung mit Mathe

![[modelle_der_informatik.png]]

# Algorithmus

Schrittweise Vorschrift zur Berechnung

### Eigenschaften:
- Eingangswerte, Ausgabewerte
- Eindeutigkeit
- Effektivitaet - jeder Schritt muss ausfuehrbar sein - realistisch
- Determinismus - Zufall spielt keine Rolle
- Endlichkeit - muss irgendwann ein Ergebnis ausgeben und muss mit endlich vielen Zeichen formulierbar sein
- Vollstaendigkeit - kann alle moegliche Faelle behandeln
- Korrektheit - liefert das gewuenschte Ergebnis

Manchmal ist es aber hilfreich, an manche Eigenschaften zu verzichten: Monte Carlo (manchmal falsche Ergebnisse), Las Vegas (manchaml terminiert nicht)

### Darstellungen von Algorithmen:
- Graphisch: Ablaufdiagramme, Strukturogramme, UML-Diagramme, Flussdiagramme (Flow charts)
- Textuell: Pseudocode, Programmiersprachen, natuerliche Sprache

**Uebrigens:** n > 0 ja oder n <= 0

# Programm

- ein Programm ist eine syntaktisch korrekt geformte Formel einer Programmiersprache
- ein deterministisches Programm kann als eine mathematische Funktion betrachtet werden, die die Menge der moeglichen Eingaben in die Menge der moeglichen Ausgaben abbildet und mit Hilfe des Computers berechnet werden kann (f: E -> A)

Dekompilierung gibt nicht immer das von uns geschriebenes Quellcode aus

Manche Programme muessen nicht auf einmal uebersetz werden, sondern duerfen Zeile fuer Zeile interpretiert und ausgefuehrt werden

**Interpreter** - Programm, das die Umsetzung ins Maschinecode vornimmt
Verschiedene Programmiersprachen eignen sich unterschiedlich gut fuer Interpreter, bzw. Compiler = manche sind schneller, manche langsamer

Manche Programmiersprachen (wie Java angeblich) sind erst in einen Zwischencode kompiliert werden, der dann interpretativ abgearbeitet wird = das Vorteil ist aber die Unabhaengigkeit von Betriebssystem (Kompilierung ist OS Abhaengig)

**Simultandolmetscher:**

## Binder

Setzt alle Programmteile (wenn es in mehrere Teilen kompiliert wird oder z.B. wenn manche Libraries verwendet sind) zusammen

Haeufig verwendete Programmteile werden in Libraries ausgelagert und stehen bereits in kompilierter Version zur Verfuegung

**Dynamic Link Library** Libraries, die erst bei Bedarf zur LAufzeit an das Programm gebunden werden koennen

# Programmierer-Paradigmen

**Paradigma** vorherrschende Verfahren, 

![[programmier_paradigmen.png]]

### Imperativ programmieren
Alles Schritt fuer Schritt zu programmieren
Anweisungen koennen Werte in Variabeln zwischenspeichern, lesen und veraendern

![[pfadfinder_gelaendespiel.png]]

Deklarativ programmieren = Die deklarative Programmierung ist ein Programmierparadigma, bei dem die Beschreibung des Problems im Vordergrund steht. Der Lösungsweg wird dann automatisch ermittelt.

### Das funktionale Paradigma
Das Programm ist nur aus Funktion im mathematischen Sinn aufgebaut
Keine Variabeln, keine Seiteneffekte...
Jedes Vorkommen eines Funktionsaufrufes kann durch das Funktionsergebnis ersetz werden

sehr kurz

![[funktionale_paradigma.png]]
3! » 3·(3-1)! » 3·2! » 3·2·(2-1)! » 3·2·1! » 3·2·1·(1-1)! » 3·2·1·0! » 3·2·1·1 » 6

### Das logikbasierte Paradigma
Programm besteht aus Regeln & Fakten

Ableitbare Fakten aus Regeln
Ein Problem ist, wenn es Widersprueche zwischen den Regeln gibt -> schwer sie zu finden

**Meta-Regel:** Ein Regel, der mit sich selbst beschaeftigt

### Weitere Programmiersprachen Klassifikationskriterien

- sequentiell versus parallel
- typisiert vs untypisiert (fliessender Uebergang - egal was wo gespeichert wird) - Daten Typen str, int, bool ...
- orthogonal (rechtwinkelig) dazu: objektorientiert

# Katgeorisierung von C++

- imperativ, prozedural
- sequentiell
- streng typisiert - vordefinierte Wertebereiche

# Structured program theorem
- Ein beliebiger Programmablauf laesst sich mit nur 3 PRogrammkonstrukten verwirklichen

- Die Squenz von Anweisungen ist eine Anweisung
- Die Entscheidung ist eine Anweisung
- Die Iteration ist eine Anweisung

**Schnittstelle BS** : Betriebssystem

# C++ Notizen

Return statement in main() geht zur BS, das die Wert weiter bewerten darf und entscheiden, was damit weiter zu tun (z.B. in bash Dataien)
0 = OK

\\n steht fuer **ein** Zeichen

# Konventionen fuer Dateinamen

- Vermeide Leer und Sonderzeichen
- Linux unterscheidet zwischen Gross- und Kleinschreibung, Kleinschreibung ist bevorzuegt

![[konventionen_fuer_dateinamen.png]]

# Programmfehler Kategorisierung

## Compile Time
- **Warning** = ein lauffaehiges Programm wurde erzeugt, aber es enthaelt Konstrukte die eventuell zu run time Fehlern fuehren: if (x=1) {} ergibt Warnung, aber if ((x=1)) {} nicht - wenns echt so gemeint is, aber meistens mag stattdessen if (x\==1) verwendet werden
- **Error** = kein lauffaehiges Program koennte erzeugt werden

## Laufzeit
- Fehler in der Programmlogik / "Bedienungs" fehler - str statt int eintippen, wird nur durch gutes Testes entdeckt
- Die Schwierigsten zu finden

## Programme umfassend absichern
ist keine leichte Aufgabe

# Formatierungskonventionen

Bitte benutzen um Fehler zu vermeiden und beheben

Es gibt sogar mehrere, aber am wichtigsten ist, eine einzige gewaehlte durchzuhalten.
Programme sollen so geschrieben werden, dass man sie lesen kann

# Datentypen
- Menge von Werten mit einer MEnge von Operationen, die auf diesen Werten definiert sind
- Werte = Examplare, Instanzen eines Datentyps

- z.B. <R, {+, -, \*, /}

Rechener rechenen nicht richtig: 0.1 + 0.1 ... (10\*0.1) = 10

## Speicherplatz

Haengt von dem Wertebereich des Datentyps ab

Größe(<{0..255},{+,-,\*,/}>) = 1 Byte
Größe(<{-32768..32767},{+,-,\*,/}>) = 2 Byte
32767 + 1 = -32768

Größe(<{wahr, falsch},{and,or,non}>) = 1 Byte (warum?)
bool benoetigt 1 Byte, denn normalerweise es ned moeglich ist, auf einen einzelnen Bit zuzugreifen

### Fundamentale (primitive) Datentypen

- char (1B) mind. 256 unterschiedliche Zeichen
- int (4B)
- double (8B)
- bool (1B)

Die Groessen sind nicht in C++ definiert (ausserhalb die Groesse von char), sie sind auch implementationsabhaengig

**nicht initialisierte Variable** = unbedingt vermeiden
**Auswertungsrheienfolge bei Ausdruecken** = so formulieren, dass es nicht von unspezifiertem Verhalten abhaengt, Ausdruecken werden in verschiedenen Rheienfolgen ausgewertet

## Datentyp Modifier

- **int**: short, long, long long, signed (default), unsigned - Groessespezifikation, int darf entfallen
- **char:** signed, unsigned - grosse, kleine Buchstaben... char darf nicht entfallen
- **double:** long, eine kleinere Alternative zu double ist *float*

## Literal

- konstanter Wert, der direkt im Programmtext auftritt

- "Hello World!", 42, 3.14

0x bedeutet hexadezimal
es gibt ein Dezimal**punkt**, keine Komma

double:
3.1E2 = 3.1 \* 10^2
1e-1
1.

'\\033' = escape Taste

'C' '+' '+' '\\0'
Zeichenketten = const char\[n+1] = ein Zeichen mehr als der Text braucht

**sizeof** liefert die Groesse eines Datentyps

# Variable

- veraenderbarer Wert
- beachte die **Namen** (in Folien)
	- moeglichst sprechende Namen
	- mehere woertern mit _ trennen
	- Variabelnnamenmit Kleinbuchstaben beginnen

verschiedene "Case"s = myVar - camelCase, my_var snake_case, my-var



