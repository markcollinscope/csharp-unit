

using NUnit.Framework;
using StockRepo;

namespace StockRepo.Tests
{
	public class Tests
	{
		const string NAME = "aStockItem";
		const int PRICE = 100;

    	[SetUp]
    	public void Setup()
    	{
    	}
	
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
			Assert.That( si.ID >= 0 );

			sr.Add(si);
			Assert.That( sr.Size == 1, "Size should be 1" );

			sr.Clear();
			Assert.That( sr.Size == 0, "Size should be 0" );
		}

		[Test]
		public void Test_StockRepoGetStockItemIDs()
		{
			StockRepo sr = new StockRepo();
			const int NITEMS = 100;

			for (int i=0; i<NITEMS; i++) 
			{
				StockItem si = new StockItem(NAME + i, PRICE + i);
				sr.Add(si);
			}

			List<int> items = sr.GetStockItemIDs();
			Assert.That( items.Count == NITEMS, $"Number of items should be {NITEMS}, is: {items.Count}" );
		}
	}

	/* what tests should be added here? */

}
