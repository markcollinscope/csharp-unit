
using NUnit.Framework;
using StockRepo;

namespace StockRepo.Tests
{

	public class Tests
	{
		const string NAME = "item";
		const int PRICE = 99;

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
	}
}
