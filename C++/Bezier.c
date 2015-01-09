/*
Código para generar una curva cúbica de Bézier
*/
 
typedef struct
{
    float x;
    float y;
}
Point2D;
 
/*
cp es una matriz de 4 elementos donde:
cp[0] es el primer punto, o P0 en el diagrama de abajo
cp[1] es el primer punto de control, o P1 en el diagrama de abajo
cp[2] es el segundo punto de control, o P2 en el diagrama de abajo
cp[3] es el punto final, o P3 en el diagrama de abajo
t es el valor del parámetro, 0 <= t <= 1
*/
 
Point2D PointOnCubicBezier( Point2D* cp, float t )
{
    float   ax, bx, cx;
    float   ay, by, cy;
    float   tSquared, tCubed;
    Point2D result;
 
    /* cálculo de los coeficientes polinomiales */
 
    cx = 3.0 * (cp[1].x - cp[0].x);
    bx = 3.0 * (cp[2].x - cp[1].x) - cx;
    ax = cp[3].x - cp[0].x - cx - bx;
 
    cy = 3.0 * (cp[1].y - cp[0].y);
    by = 3.0 * (cp[2].y - cp[1].y) - cy;
    ay = cp[3].y - cp[0].y - cy - by;
 
    /* calculate the curve point at parameter value t */
 
    tSquared = t * t;
    tCubed = tSquared * t;
 
    result.x = (ax * tCubed) + (bx * tSquared) + (cx * t) + cp[0].x;
    result.y = (ay * tCubed) + (by * tSquared) + (cy * t) + cp[0].y;
 
    return result;
}
 
/*
 ComputeBezier fills an array of Point2D structs with the curve   
 points generated from the control points cp. Caller must 
 allocate sufficient memory for the result, which is 
 <sizeof(Point2D) numberOfPoints>
*/
 
void ComputeBezier( Point2D* cp, int numberOfPoints, Point2D* curve ) {
    float   dt;
    int   i;
 
    dt = 1.0 / ( numberOfPoints - 1 );
 
    for( i = 0; i < numberOfPoints; i++)
        curve[i] = PointOnCubicBezier( cp, i*dt );
}
s
