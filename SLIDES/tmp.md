---
marp: true
theme: gaia
class: invert
paginate: true
footer: Intro to TDD in C#
header: R2C Online      
backgroundColor: darkblue
color: yellow
---
# Intrduction to Test Driven Development in C#
![bg right:25% 80%](https://marp.app/assets/marp.svg)

- a half day mini-course
- based on practical work
- with a bit of theory

---
# Agenda
- TBD...
- practicals ...
---
# Locations of Materials
- TBD...

---
# 'Unit' Tests

- What is a unit?
- Compared to:
    - Integration testing
    - System testing
    - UI testing 
- All benefit from automation!
---
# Unit Testing in the Sprint Lifecycle
---
# The TDD Mantra
- Mantra:
    - Write the test (one test at a time)
    - Red: write the code so it fails (i.e. minimal)
    - Green: update the code so it works
    - Refactor: restructure the code (if necessary)
- NB: Tests are first class code - no shortcuts, oh it's only testing...
---
# The TDD Mantra (Bugs)
- write a test to isolate the bug (red)
- fix the bug (green)
- refactor if necessary...
---
# Where Do 'Units' Come From?
- TDD discussion generally omit this!
- This is a design activity
- (Iteratively)
    - Identify packages (units)
    - Ensure dependencies are clean
    - Start TDD with chosen packages
---
# TDD Tools
- nUnit, jUnit, xUnit, ...
- Unit tests are *code* based
- Using nUnit here for C#
- See setup details
---
# Basics of NUnit for C#
- ...
---
# Example Code
- csharp unit tests
```
namespace StockRepo.Tests;

public class Tests
{
	const string NAME = "aStockItem";
	const int PRICE = 100;

	[Test]
	public void Test_StockItemCtor()
	{
		StockItem si = new StockItem(NAME, PRICE);

		Assert.That( si.Name == NAME );
		Assert.That( si.PricePence == PRICE );
		Assert.That( si.ID >= 0 );
	}

	[Test]
	public void Test_StockRepoAdd()
	{
		StockItem si = new StockItem(NAME, PRICE);
		StockRepo sr = new StockRepo();

		sr.Add(si);
		Assert.That( sr.Size == 1, "Size should be 1" );

		sr.Clear();
		Assert.That( sr.Size == 0, "Size should be 0" );
	}
```
---
# Exercise part 1
```
namespace StockRepo.Tests;

public class Tests
{
	const string NAME = "aStockItem";
	const int PRICE = 100;

	[Test]
	public void Test_StockItemCtor()
	{
		StockItem si = new StockItem(NAME, PRICE);

		Assert.That( si.Name == NAME );
		Assert.That( si.PricePence == PRICE );
		Assert.That( si.ID >= 0 );
	}

	[Test]
	public void Test_StockRepoAdd()
	{
		StockItem si = new StockItem(NAME, PRICE);
		StockRepo sr = new StockRepo();

		sr.Add(si);
		Assert.That( sr.Size == 1, "Size should be 1" );

		sr.Clear();
		Assert.That( sr.Size == 0, "Size should be 0" );
	}

---
# Review
---
# "Mocking vs Integration Testing"
- when which why ?

---
# Exercise part 2
---
# Review
---
# Pros and Cons
-   
---
# What we haven't discussed
- BDD & UI testing frameworks
- Coverage and related tools
- More on when and how to mock
- Dependency Inversion (DIP - SOLID) with TDD
- Estimating
- Using Visual Studio or other IDEs
- Other (non-functional) testing
    - Stress tests ... etc.
---
# Summary & Feedback
- TBD.

- Feedback 
	- what do you think? 
	- Need to know more?
	- Keen to do unit tests?
---
