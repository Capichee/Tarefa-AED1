
#ifndef __LIST_H__
#define __LIST_H__

typedef struct {
    int n;
    int * e;
    int size;
} List;

void list_info(List * L);
List * list_new( int size );
void list_free( List * L );
void list_insert( List * L, int v );

/**
 * Remove o elemento da posição pos
 */
void list_remove( List * L, int pos );
/**
 * Remove toda a memória que está sendo desperdiçada
 */

void list_reduce( List * L );

void list_print( List * L );
void list_expand( List * L, int new_size );

#endif