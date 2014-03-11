#ifndef HELPERS_H
#define HELPERS_H

#include <glib.h>

/** Entrées :
  *   argsString : chaine contenant un ensemble de mots séparés par des
  *     espaces.
  * Sorties :
  *   Liste des mots contenu dans argsString
  */
GList *lire_args(char *chaineMots)
{
  GList *listeMots= NULL;

  int indiceChaine = 0, indiceMot = 0;
  char motCourant[100];
  while(chaineMots[indiceChaine] != '\0')
    {
      if(chaineMots[indiceChaine] == ' ') // fin du mot courant
        {
          motCourant[indiceMot] = '\0';
          indiceMot = 0;

          // ajout a la liste :
          // ! ajouter au debut et inverser est plus rapide
          // que d'ajouter a la fin ie g_list_append
          listeMots = g_list_prepend(listeMots, g_strdup(motCourant));
        }
      else // ajouter char au mot
          motCourant[indiceMot++] = chaineMots[indiceChaine];
      indiceChaine++;
    }
  return g_list_reverse(listeMots); // inverser
}

#endif // HELPERS_H
