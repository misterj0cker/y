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





struct Element{
    int val;
    struct Element *suivant;
};
typedef struct Element LISTE;

LISTE * elem_new(int val){
LISTE *new_elem;
new_elem = (LISTE*)malloc(sizeof(LISTE));
new_elem->val = val;
new_elem->suivant = NULL
return new_elem;
}

void * elem_free(LISTE *elem)
{
    free(elem);
}

int list_length(LSITE *L){
    int len=0
    while(L!=NULL)
    {
        L = L->suivant; len++;
    }
    return len
}

void list_print(LISTE *L){
    int i;
    for(i=0 ; L; num++,L=L->suivant)
    printf("Element %d = %d \n",num,L->val);
}

LISTE * list_push(LISTE *L,LISTE *elem){
    elem->suivant = L;
    return elem;
}

void liste_insert(Liste *P,LISTE *elem){
    elem->suivant = P->suivant;
    P->suivant = elem
    LISTE *L = NULL,*P;
    P = L->suivant;
    list_insert(P,elem);
}

void liste_append(LISTE *L,LISTE *elem){
    LISTE *cur;
    if(L==NULL)
    return list_push(L,elem);
    cur =L;
    while(cur->suivant != NULL)
    cur = cur->suivant;
    liste_insert(cur,elem);
    return L
}