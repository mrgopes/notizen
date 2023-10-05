# Abstraktion

- reduktion von Informationen auf das wesentliche (einfacheres Konzept)
- Landkarte wie eine Graphen darzustellen

## Modell
- Darstellung fuer den Zweck relevanten Aspekte
- vereinfachte abstrakte Darstellung eines komplexen Systems

## Natuerliche Sprachen
- universell, vielseitig, ausdrucksstark
- sind ungenau, koennten unterschiedlich interpretiert werden

## Formale Sprachen
- Syntax, Semantik, Ausdrucksstaerke

# Formale Logk in der Informatik
- Logik:
	- Prinzipien des korrekten Schliessens
	- auch verwendet in Recht, Mathe, Informatik, Philosophie...
- Wie koennten wir anhand von das, was wir schon wissen, etwas neues beweisen

B1: Jeder Mensch hat 4 Augen.
B2: John ist ein Mensch.
Schlussfolgerung: Also hat John 4 Augen -- korrekt aus den gegebenen Aussagen

Bei falschen Praemissen haben wir als SCchluss eine falsche Aussage bekommen, obwohl die Regel korrekt ist.

## Bestandteile eines logischen Systems:
- **Syntax**: welche formalen Ausdruecke als Formeln des logischen Systems gelten
- **Semantik**
- **Kalkuel**

Wir werden sich mit Praedikatenlogik und Aussagenlogik beschaeftigen, obwohl es viele andere logische Systeme gibt.

# Aussagenlogik

- ein Satz in der natuerlichen Sprache
- Wahr oder Falsch, ist gut auch wenn man nicht richtig weiss

- Aussagen koennen aus weitere Aussagen bestehen

- **atomare Aussage**: enthaelt nur einen einzigen Sachverhalt - unteilbare Aussage
- Aussage darf zwar mehrere Informationen enthalten, aber beschreibt nur einen Sachverhalt und kann nicht in meherere Aussagen aufgespalten werden 

- logische Operatoren: Negation ¬, Konjunktion ∧, Disjunktion ∨, Folgerung/Implikation →

## Implikation

- Wie haengen Aussagen zussamen?
- A impliziert B, wenn A dann B

A -> B ist falsch nur dann, wenn A wahr ist und B falsch ist,
sonst ist es richtig

![[implikation_wahrheitstabelle.png]]

## Aequivalenz

- Wie haengen Aussagen zusammen?
- A genau dann, wenn B

- A <-> B == A -> B ∧ B -> A

# **Hausuebung:** Beispiel, slide 28

# Beweise

- Kette von wahren Implikationen

### Beweis, dass A -> B gilt:

- **Direkter Beweis:** A -> C -> D -> E ... -> B
- **Widerspruchsbeweise:** A -> 'B, eventuell kommt man bei beweisen von dieser Aussage zu einem Widerspruch