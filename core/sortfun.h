   /*******************************************************/
   /*      "C" Language Integrated Production System      */
   /*                                                     */
   /*             CLIPS Version 6.20  01/31/02            */
   /*                                                     */
   /*            SORT FUNCTIONS HEADER MODULE             */
   /*******************************************************/

/*************************************************************/
/* Purpose: Contains the code for sorting functions.         */
/*                                                           */
/* Principal Programmer(s):                                  */
/*      Gary D. Riley                                        */
/*                                                           */
/* Contributing Programmer(s):                               */
/*                                                           */
/* Revision History:                                         */
/*                                                           */
/*************************************************************/

#ifndef _H_sortfun

#define _H_sortfun

#ifdef LOCALE
#undef LOCALE
#endif

#ifdef _SORTFUN_SOURCE_
#define LOCALE
#else
#define LOCALE extern
#endif

   LOCALE void                           SortFunctionDefinitions(void *,EXEC_STATUS);
   LOCALE void                           MergeSort(void *,EXEC_STATUS,unsigned long,DATA_OBJECT *,
                                                   int (*)(void *,EXEC_STATUS,DATA_OBJECT *,DATA_OBJECT *));
   LOCALE void                           SortFunction(void *,EXEC_STATUS,DATA_OBJECT *);

#endif



