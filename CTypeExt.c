/******************************************************************************
* \file      CTypeExt.c
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Contains ctype.h/c extension functions
* \details
*
* \see       https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#include "CTypeExt.h"


/* chech for ascii char */
int isascii(int c)
{
    return(c <= 0x7F);
}


/* check for binary digit char */
int isbdigit(int c)
{
    return(c >= '0' && c <= '1');
}

/* check for octal digit char */
int isodigit(int c)
{
    return(c >= '0' && c <= '7');
}


#if !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 199901L 

/* check for blank char */
int isblank(int c)
{
    return(c == '\t' || c == ' ');
}

#endif /* !defined(__STDC_VERSION__) || defined(__STDC_VERSION__) && __STDC_VERSION__ < 199901L  */


/* char to ascii */
int toascii(int c)
{
    return(c & 0x7F);
}
