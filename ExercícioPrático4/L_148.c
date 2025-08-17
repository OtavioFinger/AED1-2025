//Otávio Finger, Turma M1

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 struct ListNode* quickSort(struct ListNode* head, struct ListNode* left, struct ListNode* right );

 struct ListNode* sortList(struct ListNode* head) {
     // Exemplo de QuickSort?
 
     //Caso em que não tenho a lista
     if ( head == NULL ) {
         return NULL;
     }
 
     //Contar o tamanho da lista
     int count = 0;
 
     struct ListNode* pPercorrer = (struct ListNode*)malloc(sizeof(struct ListNode*));
 
     pPercorrer = head;
     while( pPercorrer != NULL ) {
         pPercorrer = pPercorrer->next;                 
         count++;
     }
     //count tem o tamanho da Linked List
 
     //Implementação do Merge Sort
     
 
     //Ver o nodo do meio da lista
     int meio = count / 2;
 
     pPercorrer = head;
 
     struct ListNode* nodeMeio = (struct ListNode*)malloc(sizeof(struct ListNode*));
 
     while( pPercorrer < meio ) {
         pPercorrer = pPercorrer->next;
         nodeMeio = pPercorrer;
     }
    
    //Ver o mais a esquerda
    struct ListNode* nodeEsquerda = (struct ListNode*)malloc(sizeof(struct ListNode*));
 
    nodeEsquerda = head;
 
    //Ver o mais a direita
    struct ListNode* nodeDireita = (struct ListNode*)malloc(sizeof(struct ListNode*));
 
     while( pPercorrer < count && pPercorrer != NULL ) {
         pPercorrer = pPercorrer->next;
         nodeDireita = pPercorrer;
     }
 
     //Chama o Quick Sort;
     head = quickSort( head, nodeEsquerda, nodeDireita);
     return head;
 }
 struct ListNode* quickSort(struct ListNode* head, struct ListNode* left, struct ListNode* right, struct ListNode* nodeMeio) {
 
     //Faz o ponteiro da esquerda
     struct ListNode* i = left; = (struct ListNode*)malloc(sizeof(struct ListNode*));
 
     //Faz o ponteiro da direita
     struct ListNode* j = right; = (struct ListNode*)malloc(sizeof(struct ListNode*));
     
     struct ListNode* pivo = nodeMeio; = (struct ListNode*)malloc(sizeof(struct ListNode*));
 
     do{
         if ( i->val > pivo->val || j->val < pivo->val ) {
         struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode*));
 
             temp = i;
             i = j;
             j = temp;
             i++;
             j--; 
         }
 
     }while( i < j );
 
     if( i <= right ) {
         quickSort( head, left, right, pivo);
     } else if ( j <= left ) {
         quickSort( head, left, right, pivo);
     }
     return head;
 }