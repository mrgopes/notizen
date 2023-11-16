# Normalform

Grundlegendes Prinzip: Variablen mit dem selben Name nicht benutzen

## Praenexform

Alle Quantoren stehen am Anfang der Formel
Auch wenn wir keine Quantoren haben, ist die Formel schon in Praenexform

Um eine Formel in Praenexform zu bringen, muss diese Formel nicht beschlossen sein

Wenn wir Quantoren am Anfang nehmen, muss das Reihenfolge beinhaltet werden, z.B. Va F v EzVx Q darf nicht VxVaEz sein, aber EzVaVx geht schon, auch EzVxVa und auch VaEzVx.

## Skolemform

Ziel: eine erfuellbarkeitsaequivalente Formel G zu bekommen
Wir haben eine Formel in Praenexform, deren Existenzquantoren wir entfernen wollen.

Wir entfernen auch die Variable und ersetzen wir sie durch die funktion f(restliche Variablen) - aber nur, wenn die Variable nach anderen Allquantoren vorkommt. Wenn das Existenzquantor das erste Quantor ist, dann duerfen wir die Variable durch eine Konstante erstezen.


## Matrixklauselform

Teil einer Formel in Praenexform nach den Quantoren
Aus Praenexform -> Skolemform machen
Danach bringen wir die Matrixformel in KNF und schliesslich machen wir daraus die Matrixklauselform

# Unentscheidbarkeit der Praedikatenlogik

## Herbrand Universum
Grundemenge ist eine Menge von Termen, die vorgegeben sind
In einem Herbrand Universum hamma so viele Funktionen wie viele Variablen wir haben.

# Resolutionskalkuel der Praedikatenlogik

## Unifikation
Variablen mit Termen ersetzen
Konstanten niemals ersetzen

# Logische Programmierung

Fuer Prolog gibts etwa 5 Punkte aus 100