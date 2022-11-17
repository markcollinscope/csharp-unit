# Unit Testing Exercise
Solution code is provided here to a unit testing exercise in csharp.
The basic idea is as follows (in terms of steps for the exercise):
* take the StockRepo.Tests class, and the StockItem class and write a working implementation of StockRepo that passes its tests - requires: StockRepo.Tests.cs, StockItem.csand outline StockRepo.cs (optional to providd).
* extend this implementation with a Cart providing services to implement the following 'UI' design:

```
-----------------------------------------------------
|                   Shopping App                    |
|                                                   |
|            available               cart           |
|    -------------------------    ----------------  |
|    | bananas 		£1.99  |^|    | banana £1.99 |  |
|    | apples   	£0.99  | |    | coffee £5.25 |  |
|    | coffee   	£5.25  | |    |              |  |  
|    | cheese   	£0.99  | |    ----------------  |
|    | ice cream    £3.99  |V|    |TOTAL:   £7.24|  |
|    -------------------------    ----------------  |
|                                                   |
|    [ add to cart ]                 [ checkout ]   |
-----------------------------------------------------      


```
