# Unit Testing Exercise
NB: Please use latest version - tagged:

<!-- ### EG-VERSION-TAG -->
LATEST RELEASE VERSION: 23.10.03-19.26_GITREL_V1.0.2
<!-- ### END ### -->

See later in README for contents of repo, navigation, etc.

## Exercises
This presentation comes with exercises which a detailed below.

## Where to find the source code *used* as part of the Exercises
See the EXERCISE-SRC-XDIR folder/directory at the top level of the repo.
THere is one sub-directory per exercise.

### Exercise 1
The exercise directory contains two sub-dirs - one for a pre-existing StockItem class, and a TDD file - StockRepo.Tests. You have to create a StockRepo class that passes the tests in the StockRepo.Tests director.

So:
* take the StockRepo.Tests class, and the StockItem class
* taking each [Test] in StockRepo.Tests - one at a time - write a working implementation of StockRepo that passes that test.
* add another [Test] and get that to pass.
* and so on.

Note 1: that you have to have *all* the tests passing, not just the 'latest' one you've implemented.
You may well have to refactor your implementation code as you add tests.

Note 2: The [Test] of StockItem - the first test in the StockRepo.Tests are - should just pass - the code is provided in the StockItem area.

### Exercise 2

Either extend, or rewrite (up to you) this implementation but add a Cart class providing services to implement the following 'UI' design:

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

Note: We're not going to implement this UI - just the 'Cart' class functions it needs.

So:
* firstly - work out what functions the Cart will need to have (hint: see below):
* secondly - work out if there are any additional function necessary in the StockRepo class.
* then: iteratively create any new tests required to test any new StockRepo functions you need.
* then: iteratively create Cart.Tests are with tests (one at a time) and implement them until they pass in the Cart class.


Note: you will need to provide facilities to:
* [story #1] add items to the cart             
* [story #2] get the total cost of the cart
* [story #3] show the cart contents on UI

in a test first manner. 

You can assume the UI calls the Cart, StockRepo and StockItem packages (namespaces/modules) directly for the purposes of this exercise.

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

## Notes on setting up Unit Testing in CSharp.

Some notes on basic command line dotnet commands to set up a project for TDD are found below.
However the best description I've seen to far is:
* https://learn.microsoft.com/en-us/dotnet/core/testing/unit-testing-with-dotnet-test
* just remember: swap 'xunit' with *nunit*.

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

# Repo Contents
## Top Level Files
* Makefile - used to build presentation and other generated contents. Type '$ make;' to build in top level directory. See file contents for other build targets.
* README.md - this file.

## Directory Contents
nb: XDIR generally indicates an output directory - generated automatically.

* SRC - two sections:
	* CODE-SRC - source code of solutions to exercise, also used to generate stubs for exercises.
	* SLIDES-SRC - source code for presentation in 'marp' format.
* EXERCISE-SRC-XDIR - solution stubs / pre-supplied source code.
* HTML-SLIDE-PRESENTATION-XDIR - output of presentation. See 'tdd-csharp.html' - to present - load it in a browser. That's it.

