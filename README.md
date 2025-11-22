🎮 PACMAN – Jeu en C avec la bibliothèque Allegro

Ce projet est une implémentation du célèbre jeu PACMAN, développée en C avec la bibliothèque graphique Allegro 4.4.
Le jeu inclut :

gestion du labyrinthe

déplacements du joueur

intelligence simple des fantômes

collisions

sprites animés

sons et bruitages

gestion de la mort et de la victoire

niveaux multiples

🧱 Architecture
src/                → code source en C
include/            → fichiers headers
assets/             → sprites & sons
project_files/      → fichiers Code::Blocks
docs/               → rapport PDF

🎵 Assets utilisés

Sprites Pacman (haut/bas/droite/gauche)

Sprites Fantômes (bleu, vert, rose…)

Sons :

waka.wav

pacman_death.wav

beggining.wav

suspense.wav

nani.wav

omaewa.wav

wasted.wav

etc.

🚀 Compilation

Pré-requis :

Allegro 4.4

GCC ou Code::Blocks

Compilation avec GCC :

gcc src/*.c -o pacman -lallegro

👤 Auteur

Wail Brimesse
ECE Paris – Projet C (Jeu vidéo)
