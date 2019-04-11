/**
* Internal quicksort method that makes recursive calls.
* Uses median-of-three partitioning and a cutoff of 10.
* a is an array of Comparable items.
* left is the left-most index of the subarray.
* right is the right-most index of the subarray.
*/
template <typename Comparable>
void quicksort( vector<Comparable> & a, int left, int right )
{
    if( left + 10 <= right )
    {
    const Comparable & pivot = median3( a, left, right );

     // Begin partitioning
     int i = left, j = right - 1;
     for( ; ; )
     {
        while( a[ ++i ] < pivot ) { }
        while( pivot < a[ --j ] ) { }
        if( i < j )
            std::swap( a[ i ], a[ j ] );
        else
            break;
     }

        std::swap( a[ i ], a[ right - 1 ] ); // Restore pivot

        quicksort( a, left, i - 1 ); // Sort small elements
        quicksort( a, i + 1, right ); // Sort large elements
    }
    else // Do an insertion sort on the subarray
        insertionSort( a, left, right );
 }
      /*  int i = left + 1, j = right - 2;
        for( ; ; )
        {
            while( a[i]< pivot ) i++;
            while( pivot < a[ j ] ) j--;
            if( i < j )
                std::swap( a[ i ], a[ j ] );
            else
                break;
        }
*/
