# Rezervari bilete de avion

### Scurta descriere
-[ ] Acest proiect simuleaza un sistem de rezervari a biletelor de avion, inspirat din platforme precum Vola, ESky, etc. Am implementat functionalitati, de exemplu verificarea varstei pasagerilor astfel incat sa fie majori sau aplicarea unei reduceri, in functie de valoarea totala a rezervarii. Pentru exemple, am folosit numele reale ale companiilor aeriene, codurile IATA (International Air Transport Association) ale acestora si ale aeroporturilor.


## Tema 1

#### Cerințe
- [ ] definirea a minim 3-4 clase folosind compunere
- [ ] constructori de inițializare
- [ ] pentru o clasă: constructor de copiere, `operator=` de copiere, destructor
<!-- - [ ] pentru o altă clasă: constructor de mutare, `operator=` de mutare, destructor -->
<!-- - [ ] pentru o altă clasă: toate cele 5 funcții membru speciale -->
- [ ] `operator<<` pentru toate clasele
- [ ] cât mai multe `const`
- [ ] implementarea a minim 3 funcții membru publice pentru funcționalități specifice temei alese
- [ ] scenariu de utilizare a claselor definite: crearea de obiecte și apelarea funcțiilor membru publice în main
- [ ] tag de `git`: de exemplu `v0.1`
- [ ] serviciu de integrare continuă (CI); exemplu: GitHub Actions

## Tema 2

#### Cerințe
- [ ] separarea codului din clase în `.h` (sau `.hpp`) și `.cpp`
- [ ] moșteniri
  - [ ] funcții virtuale (pure) apelate prin pointeri de bază, constructori virtuali (clone)
  - [ ] apelarea constructorului din clasa de bază 
  - [ ] smart pointers
  - [ ] `dynamic_cast`
- [ ] suprascris cc/op= pentru copieri/atribuiri corecte, copy and swap
- [ ] excepții
  - [ ] ierarhie proprie cu baza `std::exception` sau derivată din `std::exception`
  - [ ] utilizare cu sens: de exemplu, `throw` în constructor, `try`/`catch` în `main`
- [ ] funcții și atribute `static`
- [ ] STL
- [ ] cât mai multe `const`
- [ ] la sfârșit: commit separat cu adăugarea unei noi derivate
- [ ] tag de `git`: de exemplu `v0.2`

## Tema 3

#### Cerințe
- [ ] 2 șabloane de proiectare (design patterns)
- [ ] o funcție șablon (template) cu sens; minim 2 instanțieri
- [ ] o clasă șablon cu sens; minim 2 instanțieri
<!-- - [ ] o specializare pe funcție/clasă șablon -->
- [ ] tag de `git`: de exemplu `v0.3` sau `v1.0`

## Resurse

- adăugați trimiteri către resursele externe care v-au ajutat sau pe care le-ați folosit
