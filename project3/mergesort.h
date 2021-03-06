/**
* Mergesort algorithm (driver).
*/
template <typename Comparable>
void mergeSort( vector<Comparable> & a )
{
vector<Comparable> tmpArray( a.size( ) );

mergeSort( a, tmpArray, 0, a.size( ) - 1 );
 }

 /**
 * Internal method that makes recursive calls.
 * a is an array of Comparable items.
 * tmpArray is an array to place the merged result.
 * left is the left-most index of the subarray.
 * right is the right-most index of the subarray.
 */
 template <typename Comparable>
 void mergeSort( vector<Comparable> & a,
 vector<Comparable> & tmpArray, int left, int right )
 {
 if( left < right )
 {
 int center = ( left + right ) / 2;
 mergeSort( a, tmpArray, left, center );
 mergeSort( a, tmpArray, center + 1, right );
 merge( a, tmpArray, left, center + 1, right );
 }
 }