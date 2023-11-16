Variable Initialisierung:

**Definition**
double y {0}; y mit dem Wert 0, in {} gibts einen Ausdruck, der berechnet wird

wenn ein Programm schon laenger laeuft, dann darf bei der definition auch ein Speicherplatz verwendet werden, das schon vorher das Programm verwendet hat 

**Deklaration**
extern double x;

x wird woanders definiert = die Adresse wird nicht reserviert, wird aber definiert in einem anderen Programmteil oder in einer Bibliothek

### Initialisierung

Variablen sind immer in der gegebene Reihenfolge initialisiert.
int x; int y {x * 7}; <- x hat kein Wert, deshalb ist auch y uninitialisiert; ist also falsch!

### Zuweisung und {}

Zuweisung ergibt eine Warnung des Compilers, besser sind {}

int y {3.5}: error, man kann mit einem Double keine int initialisieren
int y = 3.5; wird gerundet auf 3!

int z {static_cast\<int\>(3.5)}: OK, das ist explizite Typumwandlung

### 2 Verwendungsarten fuer Variablen:

Lesen und Wertzuweisung

**Wertzuweisung:** Erst das Ausdruck auf der rechte Seite berechnen, dann das Ergebnis der Variable zuweisen

### Benannte Konstanten

constexpr = vor dem Laufzeit (ausserhalb von funktionen)
const = zur Laufzeit festgelegte Konstanten

constexpr duerfen auch aus Ausdruecke bestehen, aber das Ausdruck einer Konstante darf nur aus Konstanten bestehen

"abc" ist in C++ nicht String, sondern char\[n+1], also man kann nicht "ab" + "er" verketten! Strings kann man aber Verketten und man kann diese als initialisierung von Strings verwenden

++i ist besser als i++, obwohl sie fast gleich sind

-a
+a

a kann irgendwelche Zahl sein (positiv, negativ, 0), - einfach wechselt obs positiv und negativ ist wie in der Mathe

![[cout_verkettung.png]]

ein Ergebnis von cout ist wieder cout, also das kann funktionieren

cout und cin muessen nicht verwendet werden, es gibt auch andere Funktionen fuer beliebige Zwecke

### Ausdruckauswertung

Passiert von links nach rechts wenn nur gleichwertige Operatoren verwendet

3\. bedeutet double statt int

2 ins double ist 2, nicht 2.0???

Unterschied zwischen typconverse und staticconverse = eine ist explizit, andere ned

Typsicherheit = ein Wert wir immer nur als dieses Typ