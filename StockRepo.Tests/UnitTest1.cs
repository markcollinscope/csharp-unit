
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

			Assert.That( si.ID == StockItem.UNDEFINED );
			Assert.That( si.Name == NAME );
			Assert.That( si.PricePence == PRICE );
    	}

		[Test]
		public void Test_StockRepoAdd()
		{
			StockItem si = new StockItem(NAME, PRICE);

			StockRepo sr = new StockRepo();
			sr.Add(si);
			Assert.That( sr.Size == 1 );

			sr.Clear();
			Assert.That( sr.Size == 0 );
		}

		[Test]
		public void Test_StockRepoGetStockItemIDs()
		{
			StockRepo si = new StockRepo();
			const NITEMS = 100;

			for (int i=0; i<NITEMS; i++) 
			{
				StockItem si = new (StockItem( NAME + i, PRICE + i) );
				si.Add(si);
			}

			string items[] = si.GetStockItemIDs();
			Assert.That( /* number of items is NITEMS */  );
		}
	}
}
