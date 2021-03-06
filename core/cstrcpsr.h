   /*******************************************************/
   /*      "C" Language Integrated Production System      */
   /*                                                     */
   /*             CLIPS Version 6.20  01/31/02            */
   /*                                                     */
   /*              CONSTRUCT PARSER MODULE                */
   /*******************************************************/

/*************************************************************/
/* Purpose: Parsing routines and utilities for parsing       */
/*   constructs.                                             */
/*                                                           */
/* Principal Programmer(s):                                  */
/*      Gary D. Riley                                        */
/*                                                           */
/* Contributing Programmer(s):                               */
/*                                                           */
/* Revision History:                                         */
/*                                                           */
/*************************************************************/

#ifndef _H_cstrcpsr

#define _H_cstrcpsr

#ifndef _H_evaluatn
#include "evaluatn.h"
#endif
#ifndef _H_scanner
#include "scanner.h"
#endif
#ifndef _H_constrct
#include "constrct.h"
#endif

#ifdef LOCALE
#undef LOCALE
#endif

#ifdef _CSTRCPSR_SOURCE_
#define LOCALE
#else
#define LOCALE extern
#endif

#if ALLOW_ENVIRONMENT_GLOBALS
   LOCALE int                            Load(char *,EXEC_STATUS);
#endif

   LOCALE int                            EnvLoad(void *,EXEC_STATUS,char *);
   LOCALE int                            LoadConstructsFromLogicalName(void *,EXEC_STATUS,char *);
   LOCALE int                            ParseConstruct(void *,EXEC_STATUS,char *,char *);
   LOCALE void                           RemoveConstructFromModule(void *,EXEC_STATUS,struct constructHeader *);
   LOCALE struct symbolHashNode         *GetConstructNameAndComment(void *,EXEC_STATUS,char *,
                                         struct token *,char *,
                                         void *(*)(void *,EXEC_STATUS,char *),
                                         int (*)(void *,EXEC_STATUS,void *),
                                         char *,int,int,int);
   LOCALE void                           ImportExportConflictMessage(void *,EXEC_STATUS,char *,char *,char *,char *);

#endif







