/******************************************************************************
* \file      MathAngle.h
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Math angle macros
* \details
*
* \see
*            and other resources
******************************************************************************/
#ifndef MATHANGLE_H
#define MATHANGLE_H		20250318L


/* precise pi */
#define PI                      3.1415926535897932384626433832795


#define DEGREE_TO_RADIAN(n)     ((n) * PI / 180.0)

#define DEGREE_TO_GRADIAN(n)    (((n) * 400.0) / 360.0)

#define RADIAN_TO_DEGREE(n)     ((n) / PI * 180.0)

#define RADIAN_TO_GRADIAN(n)    ((n) * 63.661977)

#define GRADIAN_TO_DEGREE(n)    ((n) * 0.9)

#define GRADIAN_TO_RADIAN(n)    ((n) * 0.015708)


#endif /* MATHANGLE_H */
