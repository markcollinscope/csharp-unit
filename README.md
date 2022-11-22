# Unit Testing Exercise
Solution code is provided here to a unit testing exercise in csharp.
The basic idea is as follows (in terms of steps for the exercise):
* take the StockRepo.Tests class, and the StockItem class and write a working implementation of StockRepo that passes its tests - requires: StockRepo.Tests.cs, StockItem.csand outline StockRepo.cs (optional to provide).
* extend this implementation with a Cart providing services to implement the following 'UI' design:

UI-SHOPPING-APP-FOR-UNIT-TEST-EG-1
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
UI-SHOPPING-APP-FOR-UNIT-TEST-EG-1

Provide facilities to:
* add items to the cart
* get the total cost of the cart
* show the cart contents on UI

in a test first manner. You can assume the UI calls the Cart, StockRepo and StockItem packages (namespaces/modules) directly for the purposes of this exercise.

Eg. you might start with:

UI-SHOPPING-APP-FOR-UNIT-TEST-EG-2
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

   ...
}

--- end Cart.Tests.cs ---
```
UI-SHOPPING-APP-FOR-UNIT-TEST-EG-2

# Notes on setting up Unit Testing in CSharp.

SETTING-UP-UNIT-TESTS-CSHARP

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

SETTING-UP-UNIT-TESTS-CSHARP