
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_ident = 258,
     mc_data = 259,
     mc_prog = 260,
     mc_work = 261,
     mc_proc = 262,
     mc_stopr = 263,
     mc_et = 264,
     mc_ou = 265,
     mc_non = 266,
     mc_sup = 267,
     mc_inf = 268,
     mc_supe = 269,
     mc_infe = 270,
     mc_equi = 271,
     mc_diff = 272,
     mc_const = 273,
     mc_int = 274,
     mc_float = 275,
     mc_char = 276,
     mc_str = 277,
     mc_line = 278,
     mc_size = 279,
     mc_acc = 280,
     mc_disp = 281,
     mc_if = 282,
     mc_else = 283,
     mc_move = 284,
     mc_to = 285,
     mc_end = 286,
     csti = 287,
     cstf = 288,
     cstch = 289,
     cstst = 290,
     aff = 291,
     add = 292,
     sous = 293,
     mult = 294,
     divi = 295,
     idff = 296,
     point = 297,
     parG = 298,
     parD = 299,
     sepv = 300,
     virg = 301,
     deup = 302,
     gui1 = 303,
     gui2 = 304,
     doll = 305,
     ecom = 306,
     arob = 307,
     pcen = 308,
     hash = 309,
     disp = 310
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 14 "S.y"

int entier;
float reel;
char* str;



/* Line 1676 of yacc.c  */
#line 115 "S.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


