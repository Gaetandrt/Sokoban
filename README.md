# My_Sokoban

[![forthebadge](http://forthebadge.com/images/badges/built-with-love.svg)](http://forthebadge.com)  [![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](http://forthebadge.com)

Sokoban alias garde d'entrepôt

## Qu'est qu'un Sokoban ?

Sokoban est un jeu vidéo de réflexion inventé au Japon en 1982 par [Hiroyuki Imabayashi](https://www.mobygames.com/developer/sheet/view/developerId,257256/).

Le joueur doit ranger des caisses sur des cases cibles. Il peut se déplacer dans les quatre directions, et pousser (mais pas tirer) une seule caisse à la fois.
Une fois toutes les caisses rangées (c'est parfois un vrai casse-tête), le niveau est réussi et le joueur passe au niveau suivant, plus difficile en général.
L'idéal est de réussir avec le moins de coups possibles (déplacements et poussées).

### Compétences travaillées

- Découverte de la libC Ncurses
- Une bonne gestion des hitbox et des déplacements
- Bien structurer son code, au risque de s'y perdre...

### Installation

Pour lancer le jeu, il vous faudra

Une map qui devra ressembler a quelque chose de semblable :

[![sokoban_command](https://raw.githubusercontent.com/EpitechPromo2026/B-PSU-200-MPL-2-1-mysokoban-gaetan.darrort/master/.readme/sokoban_map.PNG?token=GHSAT0AAAAAABT7WVMVAQXL4OJQXYYJOQDGYVWZIZQ)](https://raw.githubusercontent.com/EpitechPromo2026/B-PSU-200-MPL-2-1-mysokoban-gaetan.darrort/master/.readme/sokoban_map.PNG?token=GHSAT0AAAAAABT7WVMVAQXL4OJQXYYJOQDGYVWZIZQ)

Une fois que vous avez la map, il vous suffit de compiler le programme avec la commande "make".

Lancer ensuite le binaire suivi du chemin d'accès de votre map comme ceci :

[![sokoban_command](https://user-images.githubusercontent.com/91087072/175766428-a4d46fbe-8f9a-41fa-be6d-db907cdd8c66.png)](https://user-images.githubusercontent.com/91087072/175766428-a4d46fbe-8f9a-41fa-be6d-db907cdd8c66.png)

Une fois le programme lancé, vous pouvez commencer à jouer.

[![sokoban_map](https://raw.githubusercontent.com/EpitechPromo2026/B-PSU-200-MPL-2-1-mysokoban-gaetan.darrort/master/.readme/sokoban_game.png?token=GHSAT0AAAAAABT7WVMVZDHMT2V5TAMAEC42YVWZH5Q)](https://raw.githubusercontent.com/EpitechPromo2026/B-PSU-200-MPL-2-1-mysokoban-gaetan.darrort/master/.readme/sokoban_game.png?token=GHSAT0AAAAAABT7WVMVZDHMT2V5TAMAEC42YVWZH5Q)

## Touches

Pour vous déplacez, utiliser les croix directionnels.

Pour quitter, utiliser echap.

Rien de plus simple !

## Fabriqué avec

* [Visual Studio Code](https://code.visualstudio.com/) - Environnement de développement
* [C](https://fr.wikipedia.org/wiki/C_(langage)) - Langage de programmation
* [Ncurses](https://invisible-island.net/ncurses/man/ncurses.3x.html) - Librairie pour le language C
