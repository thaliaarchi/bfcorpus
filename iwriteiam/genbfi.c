
#include <stdio.h>

#define NO_EXECUTE
#ifdef EXECUTE
static int *a ;
#endif


static int cur_i = 0 ;
void p( char *s )
{
 printf( "%s", s ) ;
}

static int elem = 0 ;
static int depth = 0 ;

int c_line( )
{
 if ( elem )
    return 0 ;
 printf( "\n%*.*s", depth, depth, "" ) ;
 return 1 ;
}

int c_cont( )
{
 return elem == 0 ;
}

int c_begin( )
{
 if ( elem )
    return 0 ;
 printf( "\n%*.*s", depth, depth, "" ) ;
 depth += 2 ;
 return 1 ;
}

int c_end_begin( )
{
 if ( elem )
    return 0 ;
 depth -= 2 ;
 printf( "\n%*.*s", depth, depth, "" ) ;
 depth += 2 ;
 return 1 ;
}

int c_end( )
{
 if ( elem )
    return 0 ;
 depth -= 2 ;
 printf( "\n%*.*s", depth, depth, "" ) ;
 return 1 ;
}

int c_begin_e( )
{
 if ( elem == 0 )
    printf( "\n%*.*s", depth, depth, "" ) ;
 elem++ ;
 return elem == 1 ;
}

void c_end_e( ) 
{
 elem-- ;
}

#ifdef EXECUTE
#define C_BEGIN(X,Y) if ( c_begin() ) printf X
#define C_END_BEGIN(X,Y) if ( c_end_begin() ) printf X
#define C_END(X,Y) if ( c_end() ) printf X
#else
#define C_BEGIN(X,Y) if ( c_begin() ) printf Y
#define C_END_BEGIN(X,Y) if ( c_end_begin() ) printf Y
#define C_END(X,Y) c_end() printf Y
#endif

#ifndef EXECUTE
void v( int i )
{
 for ( ; cur_i < i ; cur_i++ )
    printf( ">" ) ;
 for ( ; cur_i > i ; cur_i-- )
    printf( "<" ) ;
}
#endif

#ifdef EXECUTE
static int v_pos = 0 ;
#endif

void v_rel( int i )
{
#ifdef EXECUTE
 a += i ;
 v_pos += i ;
 if ( c_line() ) printf( "a += %d, a = %d\n", i, v_pos ) ;
#else
 cur_i -= i ;
#endif
}

void clr( int i )
{
#ifdef EXECUTE
 a[i] = 0 ;
#else
 v(i); p("[-]") ;
#endif
}

#ifdef EXECUTE
#define _while(i) if ( c_begin() ) printf( "while( a[%d] = %d )", i, a[i] ) ; while( a[i] ) {
#else
void _while( int i )
{
 if ( c_begin() ) printf( "while( v%d )   ", i ) ;
 v(i); p("[") ;
}
#endif

#ifdef EXECUTE
#define _endwhile(i) } if ( c_end() ) printf( "endwhile" ) ;
#else
void _endwhile( int i )
{
 if ( c_end() ) printf( "endwhile( v%d )   ", i ) ;
 v(i) ; p("]") ;
}
#endif

#ifdef EXECUTE
#define _for(i) if ( c_begin() ) printf( "for( a[%d] = %d )", i, a[i] ) ; while( a[i] ) {
#else
void _for( int i )
{
 if ( c_begin() ) printf( "for( v%d )   ", i ) ;
 v(i); p("[") ;
}
#endif

#ifdef EXECUTE
#define _endfor(i) a[i]--; } if ( c_end() ) printf( "endfor" ) ;
#else
void _endfor( int i )
{
 if ( c_end() ) printf( "endfor( v%d )   ", i ) ;
 v(i) ; p("-]") ;
}
#endif


#ifdef EXECUTE
#define _if(i) if ( c_begin() ) printf( "if( a[%d] = %d )", i, a[i] ) ; if( a[i] ) {
#else
void _if( int i )
{
 if ( c_begin() ) printf( "if( v%d )   ", i ) ;
 v(i); p("[") ;
}
#endif

#ifdef EXECUTE
#define _endif(i) a[i] = 0 ; } if ( c_end() ) printf( "endif" ) ;
#else
void _endif( int i )
{
 if ( c_end() ) printf( "endif( v%d )   ", i ) ;
 clr(i); p("]") ;
}
#endif

void inc( int i )
{
#ifdef EXECUTE
 a[i]++ ;
 if ( c_line() ) printf( "inc a[%d] = %d", i, a[i] ) ;
#else
 if ( c_begin_e() ) printf( "inc v%d   ", i );
 v(i); p("+") ;
 c_end_e() ;
#endif
}

void dec( int i )
{
#ifdef EXECUTE
 a[i]-- ;
 if ( c_line() ) printf( "dec a[%d] = %d", i, a[i] ) ;
#else
 if ( c_begin_e() ) printf( "inc v%d   ", i );
 v(i); p("-") ;
 c_end_e( ) ;
#endif
}

void get( int i )
{
#ifdef EXECUTE
 a[i] = fgetc( stdin ) ;
 if ( c_line() ) printf( "get a[%d] = %d", i, a[i] ) ;
#else
 if ( c_begin_e() ) printf( "get v%d   ", i );
 v(i); p(",") ;
 c_end_e( ) ;
#endif
}

void put( int i )
{
#ifdef EXECUTE
 fputc( a[i], stdout ) ;
 if ( c_line() ) printf( "put a[%d] = %d", i, a[i] ) ;
#else
 if ( c_begin_e() ) printf( "put v%d   ", i );
 v(i); p(".") ;
 c_end_e( ) ;
#endif
}


void move( int i, int j )
{
#ifdef EXECUTE
 if ( c_line() ) printf( "move( a[%d] = %d, a[%d] = %d ) ", i, a[i], j, a[j] ) ;
 a[j] += a[i]; a[i] = 0 ;
 if ( c_cont() ) printf( "a[%d] = %d, a[%d] = %d", i, a[i], j, a[j] ) ;
#else
 if ( c_begin_e() ) printf( "v%d = v%d   ", j, i ) ;
 _while( i ) ; dec( i ) ; inc( j ) ; _endwhile( i ) ;
 c_end_e() ;
#endif
}

void movetotwo( int i, int j, int k ) 
{
#ifdef EXECUTE
 if ( c_line() ) printf( "movetotwo( a[%d] = %d, a[%d] = %d, a[%d] = %d ) ",
                    i, a[i], j, a[j], k, a[k] ) ;
 a[j] += a[i]; a[k] += a[i]; a[i] = 0 ;
 if ( c_cont() ) printf( "a[%d] = %d, a[%d] = %d, a[%d] = %d", i, a[i], j, a[j], k, a[k] ) ;
#else
 if ( c_begin_e() ) printf( "v%d v%d = v%d   ", j, k, i ) ;
 _while( i ) ; dec( i ) ; inc( j ) ; inc( k ) ; _endwhile( i ) ;
 c_end_e() ;
#endif
}

void addto( int i, int j, int t1 )
{
#ifdef EXECUTE
 if ( c_line() ) printf( "addto( a[%d] = %d, a[%d] = %d ) ", i, a[i], j, a[j] ) ;
 if ( a[t1] != 0 ) { printf( "temp a[%d] = %d", t1, a[t1] ) ; exit(1) ; }
 a[j] += a[i];
 if ( c_cont() ) printf( "a[%d] = %d, a[%d] = %d", i, a[i], j, a[j] ) ;
#else
 if ( c_begin_e() ) printf( "addto(v%d v%d)   ", i, j ) ;
 movetotwo( i, j, t1 ) ; move( t1, i ) ;
 c_end_e() ;
#endif
}

void and( int i, int j, int r )
{
#ifdef EXECUTE
 if ( c_line() ) printf( "and( a[%d] = %d, a[%d] = %d, a[%d] = %d, ) ",
                    i, a[i], j, a[j], r, a[r] ) ;
 if ( a[i] ) a[r] += a[j]; a[i] = a[j] = 0;
 if ( c_cont() ) printf( "a[%d] = %d, a[%d] = %d, a[%d] = %d", i, a[i], j, a[j], r, a[r] ) ;
#else
 if ( c_begin_e() ) printf( "v%d = and(v%d v%d)   ", r, i, j ) ;
 _if(i) ; move( j, r ) ; _endif(i) ; clr( j ) ;
 c_end_e() ;
#endif
}


void or( int i, int j, int r ) 
{
#ifdef EXECUTE
 if ( c_line() ) printf( "or( a[%d] = %d, a[%d] = %d, a[%d] = %d, ) ",
                    i, a[i], j, a[j], r, a[r] ) ;
 a[r] += a[i] + a[j]; a[i] = a[j] = 0;
 if ( c_cont() ) printf( "a[%d] = %d, a[%d] = %d, a[%d] = %d", i, a[i], j, a[j], r, a[r] ) ;
#else
 if ( c_begin_e() ) printf( "v%d = or(v%d v%d)   ", r, i, j ) ;
 move( i, r ) ; move( j, r ) ;
 c_end_e() ;
#endif
}

void not( int i, int r )
{
#ifdef EXECUTE
 if ( c_line() ) printf( "not( a[%d] = %d, a[%d] = %d, ) ",
                    i, a[i], r, a[r] ) ;
 a[r] = a[i] == 0; a[i] = 0;
 if ( c_cont() ) printf( "a[%d] = %d, a[%d] = %d", i, a[i], r, a[r] ) ;
#else
 if ( c_begin_e() ) printf( "v%d = not(v%d)   ", r, i ) ;
 inc( r ) ;
 _if ( i ) ;
 dec( r ) ;
 _endif( i ) ;
 c_end_e() ;
#endif
}

void diff( int i, int j, int t1, int t2, int t3 )
{
#ifdef EXECUTE
 if ( c_line() ) printf( "diff( a[%d] = %d, a[%d] = %d ) ", i, a[i], j, a[j] ) ;
 if ( a[t1] != 0 ) { printf( "temp a[%d] = %d", t1, a[t1] ) ; exit(1) ; }
 if ( a[t2] != 0 ) { printf( "temp a[%d] = %d", t2, a[t2] ) ; exit(1) ; }
 if ( a[t3] != 0 ) { printf( "temp a[%d] = %d", t3, a[t3] ) ; exit(1) ; }
 if ( a[i] > a[j] )
 { a[i] -= a[j]; a[j] = 0 ; }
 else
 { a[j] -= a[i]; a[i] = 0 ; }
 if ( c_cont() ) printf( "a[%d] = %d, a[%d] = %d", i, a[i], j, a[j] ) ;
#else
 if ( c_begin() ) printf( "diff(v%d v%d) |v%d v%d v%d   ", i, j, t1, t2, t3 ) ;
 addto( i, t1, t3 ) ;
 addto( j, t2, t3 ) ;
 and( t1, t2, t3 ) ;
 _while( t3 ) ;
    clr( t3 ) ;
    dec( i ) ;
    dec( j ) ;
    addto( i, t1, t3 ) ;
    addto( j, t2, t3 ) ;
    and( t1, t2, t3 ) ;
 _endwhile( t3 ) ;
 c_end() ;
#endif
}

void absdiff( int i, int j, int r, int t1, int t2 )
{
#ifdef EXECUTE
 if ( c_line() ) printf( "absdiff( a[%d] = %d, a[%d] = %d, a[%d] = %d ) ",
                    i, a[i], j, a[j], r, a[r] ) ;
 if ( a[t1] != 0 ) { printf( "temp a[%d] = %d", t1, a[t1] ) ; exit(1) ; }
 if ( a[t2] != 0 ) { printf( "temp a[%d] = %d", t2, a[t2] ) ; exit(1) ; }
 a[r] = ( a[i] > a[j] ) ? a[i] - a[j] : a[j] - a[i] ;
 a[i] = a[j] = 0 ;
 if ( c_cont() ) printf( "a[%d] = %d, a[%d] = %d, a[%d] = %d", i, a[i], j, a[j], r, a[r] ) ;
#else
 if ( c_begin() ) printf( "v%d = absdiff(v%d v%d) |v%d v%d   ", r, i, j, t1, t2 ) ;
 diff( i, j, r, t1, t2 ) ;
 or( i, j, r ) ;
 c_end() ;
#endif
}

void equal( int i, int j, int r, int t1, int t2 )
{
#ifdef EXECUTE
 if ( c_line() ) printf( "equal( a[%d] = %d, a[%d] = %d, a[%d] = %d ) ",
                    i, a[i], j, a[j], r, a[r] ) ;
 if ( a[t1] != 0 ) { printf( "temp a[%d] = %d", t1, a[t1] ) ; exit(1) ; }
 if ( a[t2] != 0 ) { printf( "temp a[%d] = %d", t2, a[t2] ) ; exit(1) ; }
 a[r] = ( a[i] == a[j] ) ;
 a[i] = a[j] = 0 ;
 if ( c_cont() ) printf( "a[%d] = %d, a[%d] = %d, a[%d] = %d", i, a[i], j, a[j], r, a[r] ) ;
#else
 if ( c_begin() ) printf( "v%d = equal(v%d v%d) |v%d v%d   ", r, i, j, t1, t2 ) ;
 absdiff( i, j, t1, r, t2 ) ;
 not( t1, r ) ;
 c_end() ;
#endif 
}

void addsmallconst( int val, int r ) 
{
#ifdef EXECUTE
 if ( c_line() ) printf( "addsmallconst( %d, a[%d] = %d ) ", val, r, a[r] ) ;
 a[r] += val ;
 if ( c_cont() ) printf( " a[%d] = %d", r, a[r] ) ;
#else
 if ( c_begin_e() ) printf( "v%d = %d   ", r, val ) ;
 for ( ; val ; val-- )
    inc(r) ;
 c_end_e() ;
#endif
}

void equalsmallconst( int i, int val, int r, int t1 )
{
#ifdef EXECUTE
 if ( c_line() ) printf( "equalsmallconst( a[%d] = %d, %d, a[%d] = %d ) ",
                    i, a[i], val, r, a[r] ) ;
 if ( a[t1] != 0 ) { printf( "temp a[%d] = %d", t1, a[t1] ) ; exit(1) ; }
 a[r] = a[i] == val ;
 if ( c_cont() ) printf( " a[%d] = %d", r, a[r] ) ;
#else
 if ( c_begin_e() ) printf( "v%d = v%d == %d   ", r, i, val ) ;
 addto( i, t1, r ) ;
 for ( i = 0; i < val; i++ )
 {
    _while( t1 ) ;
    dec( t1 ) ;
 }
 inc( r ) ;
 _if( t1 ) ;
 dec( r ) ;
 _endif( t1 ) ;
 for ( i = 0; i < val; i++ )
    _endwhile( t1 ) ;
 c_end_e() ;
#endif
}
 

void addmultconst( int i, int val, int r )
{
#ifdef EXECUTE
 if ( c_line() ) printf( "addconst( a[%d] = %d, %d, a[%d] = %d ) ",
                         i, a[i], val, r, a[r] ) ;
 a[r] += a[i] * val; a[i] = 0 ;
 if ( c_cont() ) printf( " a[%d] = %d, a[%d] = %d", i, a[i], r, a[r]) ;     
#else
 if ( c_begin_e() ) printf( "v%d = mul(%d v%d)   ", r, val, i ) ;
 _for( i ) ;
 addsmallconst( val, r ) ;
 _endfor( i ) ;
 c_end_e() ;
#endif
}

void addconst( int val, int r, int t1  ) /* p[r] = val */
{
#ifdef EXECUTE
 if ( c_line() ) printf( "addconst( %d, a[%d] = %d ) ", val, r, a[r] ) ;
 if ( a[t1] != 0 ) { printf( "temp a[%d] = %d", t1, a[t1] ) ; exit(1) ; }
 a[r] += val ;
 if ( c_line() ) printf( " a[%d] = %d", r, a[r] ) ;
#else

 int a ;
 int best_a = 0 ;
 int best_b = 0 ;
 int best_c = val ;
 int best_s = val ;

 int diff = r < t1 ? t1 - r : r - t1 ;
 
 if ( c_begin_e() ) printf( "v%d = %d |%d   ", r, val, t1 ) ;

 for ( a = 1; a < val; a++ )
 {
    int b = val / a ;
    int c = val % a ;
    if ( a + b + c + 4 * diff + 3 < best_s )
    {
       best_a = a ;
       best_b = b ;
       best_c = c ;
       best_s = a + b + c + 4 * diff + 3 ;
    }
 }

 if ( best_a > 0 )
 {
    addsmallconst( best_a, t1 ) ;
    addmultconst( t1, best_b, r ) ;
 }
 addsmallconst( best_c, r ) ;
 c_end_e() ;
#endif
}


void upframe( int at, int frame_size, int vars )
{
 int i ;
 for ( i = 0 ; i < vars ; i++ )
 {
    move( at+i, at+i+frame_size ) ;
 }
 v_rel( frame_size ) ;
 inc(at) ;
}

void upframes( int at, int frame_size, int vars )
{
 _for( at+1 ) ;
 upframe( at, frame_size, vars ) ;
 _endfor( at+1 ) ;
}

void downframe( int at, int frame_size, int vars )
{
 int i ;
 v_rel( -frame_size ) ;
 for ( i = 0 ; i < vars ; i++ )
 {
    move( at+i+frame_size, at+i ) ;
 }
 dec(at) ;
}

void downframes( int at, int frame_size, int vars )
{
 _while( at ) ;
 downframe( at, frame_size, vars ) ;
 _endwhile( at ) ;
} 

void setframevar( int index, int val, int at, int frame_size, int var )
{
 addto( index, at+1, at ) ;
 addto( val, at+2, at ) ;
 upframes( at, frame_size, 3 ) ;
 clr( var ) ;
 move( at+2, var ) ;
 downframes( at, frame_size, 1 ) ;
}
 
void getframevar( int index, int val, int at, int frame_size, int var )
{
 addto( index, at+1, at ) ;
 upframes( at, frame_size, 2 ) ;
 addto( var, at+1, at+2 ) ;
 downframes( at, frame_size, 2 ) ;
 move( at+1, val ) ;
}

void incframevar( int index, int at, int frame_size, int var )
{
 addto( index, at+1, at ) ;
 upframes( at, frame_size, 2 ) ;
 inc( var ) ;
 downframes( at, frame_size, 1 ) ;
}

void decframevar( int index, int at, int frame_size, int var )
{
 addto( index, at+1, at ) ;
 upframes( at, frame_size, 2 ) ;
 dec( var ) ;
 downframes( at, frame_size, 1 ) ;
}

void readframevar( int index, int at, int frame_size, int var )
{
 addto( index, at+1, at ) ;
 upframes( at, frame_size, 2 ) ;
 get( var ) ;
 downframes( at, frame_size, 1 ) ;
}

void writeframevar( int index, int at, int frame_size, int var )
{
 addto( index, at+1, at ) ;
 upframes( at, frame_size, 2 ) ;
 put( var ) ;
 downframes( at, frame_size, 1 ) ;
}

/**********/

int ch = 3 ;
int code = 2 ;
int t1 = 4 ;
int t2 = 5 ;
int t3 = 6 ;
int t4 = 7 ;
int t5 = 8 ;
int vq = 1 ;
int vp = 0 ;
int at = 9 ;
int vf = 12 ;
int va = 13 ;
int frame_size = 5 ;

void upframestofq( )
{
 addto( vq, at+1, t1 ) ;
 upframes( at, frame_size, 2 ) ;
}

void downframesfromfq( )
{
 addto ( at, at+1, at+2 ) ;
 downframes( at, frame_size, 2 ) ;
 clr( vq ) ;
 move( at+1, vq ) ;
}

void load_bf_program( )
{
 
 if ( c_line() ) printf( "\n// read character" ) ;
 get( ch ); 

 if ( c_line() ) printf( "\n\n// equal with bang" ) ;
 addto( ch, t1, t2 ) ;
 addconst( '!', t2, t3 ) ;
 absdiff( t1, t2, t3, t4, t5 ) ;

 _while( t3 ) ;
 clr( t3 ) ;

 if ( c_line() ) printf( "\n\n// equal with inc" ) ;
 /* equal + */
 addto( ch, t1, t2 ) ;
 addconst( '+', t2, t3 ) ;
 equal( t1, t2, t3, t4, t5 ) ;
 _if( t3 ) ;
 addsmallconst( 1, code ) ;
 _endif( t3 ) ;

 if ( c_line() ) printf( "\n\n//equal with dec" ) ;
 addto( ch, t1, t2 ) ;
 addconst( '-', t2, t3 ) ;
 equal( t1, t2, t3, t4, t5 ) ;
 _if( t3 ) ;
 addsmallconst( 2, code ) ;
 _endif( t3 ) ;

 if ( c_line() ) printf( "\n\n//equal with down" ) ;
 addto( ch, t1, t2 ) ;
 addconst( '<', t2, t3 ) ;
 equal( t1, t2, t3, t4, t5 ) ;
 _if( t3 ) ;
 addsmallconst( 3, code ) ;
 _endif( t3 ) ;

 if ( c_line() ) printf( "\n\n//equal with up" ) ;
 addto( ch, t1, t2 ) ;
 addconst( '>', t2, t3 ) ;
 equal( t1, t2, t3, t4, t5 ) ;
 _if( t3 ) ;
 addsmallconst( 4, code ) ;
 _endif( t3 ) ;
    
 if ( c_line() ) printf( "\n\n//equal with put" ) ;
 addto( ch, t1, t2 ) ;
 addconst( '.', t2, t3 ) ;
 equal( t1, t2, t3, t4, t5 ) ;
 _if( t3 ) ;
 addsmallconst( 5, code ) ;
 _endif( t3 ) ;
    
 if ( c_line() ) printf( "\n\n//equal with get" ) ;
 addto( ch, t1, t2 ) ;
 addconst( ',', t2, t3 ) ;
 equal( t1, t2, t3, t4, t5 ) ;
 _if( t3 ) ;
 addsmallconst( 6, code ) ;
 _endif( t3 ) ;
    
 if ( c_line() ) printf( "\n\n//equal with while" ) ;
 addto( ch, t1, t2 ) ;
 addconst( '[', t2, t3 ) ;
 equal( t1, t2, t3, t4, t5 ) ;
 _if( t3 ) ;
 addsmallconst( 7, code ) ;
 _endif( t3 ) ;
    
 if ( c_line() ) printf( "\n\n//equal with endwhile" ) ;
 addto( ch, t1, t2 ) ;
 addconst( ']', t2, t3 ) ;
 equal( t1, t2, t3, t4, t5 ) ;
 _if( t3 ) ;
 addsmallconst( 8, code ) ;
 _endif( t3 ) ;
    

 if ( c_line() ) printf( "\n\n//store code" ) ;
 addto( code, t1, t2 ) ;
 _if( t1 ) ;
 setframevar( vq, code, at, frame_size, vf ) ;
 inc( vq ) ;
 clr( code ) ;
 _endif( t1 ) ;

 get( ch ) ;

 if ( c_line() ) printf( "\n\n// equal with bang(2)" ) ;
 addto( ch, t1, t2 ) ;
 addconst( '!', t2, t3 ) ;
 absdiff( t1, t2, t3, t4, t5 ) ;

 _endwhile( t3 ) ;

 if ( c_line() ) printf( "\n\n// init simulation" ) ;
 clr( vq ) ;

 upframestofq( ) ;

 _while ( vf ) ;

 if ( c_line() ) printf( "\n\n// compare code with 1" ) ;

 equalsmallconst( vf, 1, at+1, at+2 ) ;
 _if( at+1 ) ;
 
   clr( at+1 ) ;
   downframesfromfq() ;

   if ( c_line() ) printf( "\n\n// *inc " ) ; 
   incframevar( vp, at, frame_size, va ) ;

   inc( vq ) ;
   upframestofq() ;
 
 _endif( at+1 ) ;
    
 if ( c_line() ) printf( "\n\n// compare code with 2"
                         /*f[%d] = %d with 2", v_pos / 5, a[vf] */ ) ;

 equalsmallconst( vf, 2, at+1, at+2 ) ;
 _if( at+1 ) ;
 
   clr( at+1 ) ;
   downframesfromfq() ;

   if ( c_line() ) printf( "\n\n// dec *p " ) ; 
   decframevar( vp, at, frame_size, va ) ;

   inc( vq ) ;
   upframestofq() ;
 
 _endif( at+1 ) ;
    
 if ( c_line() ) printf( "\n\n// compare code with 3"
                         /*f[%d] = %d with 3", v_pos / 5, a[vf] */) ;

 equalsmallconst( vf, 3, at+1, at+2 ) ;
 _if( at+1 ) ;
 
   clr( at+1 ) ;
   downframesfromfq() ;
   if ( c_line() ) printf( "\n\n// down " ) ; 
   dec( vp ) ;
   inc( vq ) ;
   upframestofq() ;
 
 _endif( at+1 ) ;
    
  if ( c_line() ) printf( "\n\n// compare code with 4"
                          /* f[%d] = %d with 4", v_pos / 5, a[vf] */) ;

 equalsmallconst( vf, 4, at+1, at+2 ) ;
 _if( at+1 ) ;
 
   clr( at+1 ) ;
   downframesfromfq() ;
   if ( c_line() ) printf( "\n\n// up " ) ; 
   inc( vp ) ;
   inc( vq ) ;
   upframestofq() ;
 
 _endif( at+1 ) ;
    
 if ( c_line() ) printf( "\n\n// compare code with 5"
                         /*f[%d] = %d with 5", v_pos / 5, a[vf] */) ;

 equalsmallconst( vf, 5, at+1, at+2 ) ;
 _if( at+1 ) ;
 
   clr( at+1 ) ;
   downframesfromfq() ;

   if ( c_line() ) printf( "\n\n// write " ) ; 
   writeframevar( vp, at, frame_size, va ) ;

   inc( vq ) ;
   upframestofq() ;
 
 _endif( at+1 ) ;
    
 if ( c_line() ) printf( "\n\n// compare code with 6"
                         /* f[%d] = %d with 6", v_pos / 5, a[vf] */) ;

 equalsmallconst( vf, 6, at+1, at+2 ) ;
 _if( at+1 ) ;
 
   clr( at+1 ) ;
   downframesfromfq() ;

   if ( c_line() ) printf( "\n\n// read " ) ; 
   readframevar( vp, at, frame_size, va ) ;

   inc( vq ) ;
   upframestofq() ;
 
 _endif( at+1 ) ;
    
 if ( c_line() ) printf( "\n\n// compare code with 7"
                         /*f[%d] = %d with 7", v_pos / 5, a[vf] */) ;

 equalsmallconst( vf, 7, at+1, at+2 ) ;
 _if( at+1 ) ;
 
   clr( at+1 ) ;
   downframesfromfq() ;
   getframevar( vp, t1, at, frame_size, va ) ;
   not( t1, at+2 ) ;
   addto( vq, at+1, t1 ) ;
   upframes( at, frame_size, 3 ) ;
   _if( at+2 ) ;

     clr( at+2 ) ;
     /* move to matching ] */
     inc( at+1 ) ;
     _while( at+1 ) ;

       upframe( at, frame_size, 2 ) ;

       equalsmallconst( vf, 7, at+2, at+5 ) ;
       _if ( at+2 ) ;
         inc( at+1 ) ;
       _endif( at+2 ) ;
     
       equalsmallconst( vf, 8, at+2, at+5 ) ;
       _if ( at+2 ) ;
         dec( at+1 ) ;
       _endif( at+2 ) ;

     _endwhile( at+1 ) ;
     
   _endif( at+2 ) ;
   upframe( at, frame_size, 1 ) ;
   
 _endif( at+1 ) ;
    
 if ( c_line() ) printf( "\n\n// compare code with 8"
                         /*f[%d] = %d with 8", v_pos / 5, a[vf]*/ ) ;

 equalsmallconst( vf, 8, at+1, at+2 ) ;
 _if( at+1 ) ;


   clr( at+1 ) ;

   clr( at+1 ) ;
   downframesfromfq() ;
   getframevar( vp, t1, at, frame_size, va ) ;
   move( t1, at+2 ) ;
   addto( vq, at+1, t1 ) ;
   upframes( at, frame_size, 3 ) ;
   _if( at+2 ) ;

     clr( at+2 ) ;
     /* move to matching [ */
     inc( at+1 ) ;
     _while( at+1 ) ;

       downframe( at, frame_size, 2 ) ;

       equalsmallconst( vf, 7, at+2, at+5 ) ;
       _if ( at+2 ) ;
         dec( at+1 ) ;
       _endif( at+2 ) ;
     
       equalsmallconst( vf, 8, at+2, at+5 ) ;
       _if ( at+2 ) ;
         inc( at+1 ) ;
       _endif( at+2 ) ;

     _endwhile( at+1 ) ;
     
   _endif( at+2 ) ;
   upframe( at, frame_size, 1 ) ;

 
 _endif( at+1 ) ;
    
 _endwhile( vf ) ;
} 
 



void main( int argc, char *argv[])
{
#ifdef EXECUTE
 int data[10000] ;
 int i ;
 for ( i = 0; i < 10000; i++ )
    data[i] = 0 ;
 a = data ;

 elem = argc == 2 ;
 
 printf( "argc = %d, elem = %d\n", argc, elem ) ;
#endif

 load_bf_program( ) ;
}
