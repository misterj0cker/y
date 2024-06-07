typedef struct noeud_s {
int v al e u r ;
struct noeud_s ∗ gauche ;
struct noeud_s ∗ d r o i t ;
} ∗noeud_t ;
typedef noeud_t arbre_t ;

arbre_t c ree_arbre(int valeur,arbre_t gauche,arbre_t droit){
arbre_tarbre=malloc(sizeof(struct noeud_s));
arbre−>valeur=valeur;
arbre−>gauche=gauche;
arbre−>droit=droit;
return arbre;
}

void detruit_arbre(arbre_t arbre){
if(arbre==NULL)
return;
detruit_arbre(arbre−>gauche);
detruit_arbre(arbre−>droit);
free(arbre);
}

int nombre_de_noeuds ( arbre_t arbre){
if(arbre==NULL)
return0;
return(1+nombre_de_noeuds(arbre−>gauche)
+nombre_de_noeuds(arbre−>droit));
}

void  affiche_arbre_rec(arbre_t arbre){
if(arbre!=NULL){
affiche_arbre_rec(arbre−>gauche);
if(arbre−>gauche!=NULL)
printf(" , " ) ;
printf("%d",arbre−>valeur);
if(arbre−>droit!=NULL)
printf(",");
affiche_arbre_rec(arbre−>droit);
}
}