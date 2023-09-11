# Unit Testing Exercise
NB: Please use latest version - tagged:

<!-- ### EG-VERSION-TAG -->
LATEST RELEASE VERSION: 23.09.11-19.17_GITREL_V1.0.1
<!-- ### END ### -->

Solution code is provided here to a unit testing exercise in csharp. But try not to look at it unless you get stuck.

The basic idea is as follows (in terms of steps for the exercise):
* take the StockRepo.Tests class, and the StockItem class and write a working implementation of StockRepo that passes its tests - requires: StockRepo.Tests.cs, StockItem.csand outline StockRepo.cs (optional to provide).
* extend this implementation with a Cart providing services to implement the following 'UI' design:

[ Removing item from StockRepo ]

<!-- ### EG-CART-EXERCISE-UI -->
```
-----------------------------------------------------
|                   Shopping App                    |
|                                                   |
|            available               cart           |
|    -------------------------    ----------------  |
|    | bananas      £1.99  |^|    | banana £1.99 |  |
|    | apples       £0.99  | |    | coffee £5.25 |  |
|    | coffee       £5.25  | |    |              |  |  
|    | cheese       £0.99  | |    ----------------  |
|    | ice cream    £3.99  |V|    |TOTAL:   £7.24|  |
|    -------------------------    ----------------  |
|                                                   |
|    [ add to cart ]                 [ checkout ]   |
-----------------------------------------------------      

```
<!-- ### END ### UI -->

Provide facilities to:
* [story #1] add items to the cart             
* [story #2] get the total cost of the cart
* [story #3] show the cart contents on UI

in a test first manner. You can assume the UI calls the Cart, StockRepo and StockItem packages (namespaces/modules) directly for the purposes of this exercise.

Eg. you might start with:

```
--- Cart.Tests.cs ----
public class Tests
{
    [Setup]
    public void Setup()
    {
        ... set up a stock repo with the items shown in it.
    }

    [Test]
    public void Test_AddItemsToCart()
    { 
        ... add some items to shopping cart
        ... get the number of items
        .... check it is the correct value
    }

   ...  etc.
}

--- end Cart.Tests.cs ---
```

# Notes on setting up Unit Testing in CSharp.

## Setup the Top Level of your App...
* create direactory and go into it
* create a new solution using:
* $ dotnet new sln

## Setup a standard (code) module/namespeace
* create directory (e.g. MyExample)
* go into directory
* $ dotnet new classlib
* rename files as you wish. 

## Setup a test module/namespace
* create directory (e.g. MyExample.Tests)
* go into directory
* $ dotnet new nunit
* rename files as you wish.
* add a reference to the files you are testing ...
* $ dotnet add <path/to>/MyExample/MyExample.csproj

## Reference one namespace/module from another
* say we want to add a dependency from the current module to module called 'Used'
* add a reference to the *used* namespace using
* $ dotnet add <path/to>/Used.csproj
