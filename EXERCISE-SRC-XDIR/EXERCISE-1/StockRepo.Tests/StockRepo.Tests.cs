using NUnit.Framework;
using StockItemNS;
using StockRepoNS;

// @@@ EG-CODE-STOCKREPO-UT-1
namespace StockRepoNS.Tests;

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
	// @@@ END @@@ 1

	// @@@ EG-CODE-STOCKREPO-UT-2
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
	// @@@ END @@@ 2

	// @@@ EG-CODE-STOCKREPO-UT-3
	private string MakeName(string name, int n) => name + n;
	private int MakePrice(int p, int n) => p + n;

	private StockRepoNS.StockRepo SetUpTestStockRepo(int nitems)
	{
		StockRepo sr = new StockRepo();
	
		for (int i=0; i<nitems; i++) 
		{
			StockItem si = new StockItem(
				this.MakeName(NAME,i), 
				this.MakePrice(PRICE, i)
			);
			sr.Add(si);
		}
		return sr;
	}
	// @@@ END @@@ 3

	// @@@ EG-CODE-STOCKREPO-UT-4
	[Test]
	public void Test_StockRepoGetStockItemIDs()
	{
		const int NITEMS = 100;
		StockRepo sr = this.SetUpTestStockRepo(NITEMS);
	
		List<int> items = sr.GetStockItemIDs();
		Assert.That( items.Count == NITEMS, $"Number of items should be {NITEMS}, is: {items.Count}" );
	}

	[Test]
	public void Test_StockRepoGetStockItemByID()
	{
		const int NITEMS = 300;
		StockRepo sr = this.SetUpTestStockRepo(NITEMS);
	
		List<int> items = sr.GetStockItemIDs();
		for (int i=0; i<items.Count; i++)
		{
			StockItem si = sr.GetStockItemByID( items.ElementAt(i) );
			Assert.That( si.Name == this.MakeName(NAME, i) );
		
			Assert.That( si.PricePence == this.MakePrice(PRICE, i) );
		}
	}
	// @@@ END @@@ 4
}
