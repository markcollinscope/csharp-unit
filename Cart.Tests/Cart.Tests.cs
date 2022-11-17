using NUnit.Framework;
using StockItemNS;
using StockRepo;
using CartNS;

namespace CartNS.Tests
{
    public class Tests
    {
        private StockRepo.StockRepo _sr;

        [SetUp]
        public void Setup()
        {
            _sr = new StockRepo.StockRepo();

            _sr.Add(new StockItem("banana", 199));
            _sr.Add(new StockItem("apples", 99));
            _sr.Add(new StockItem("coffee", 525));
            _sr.Add(new StockItem("cheese", 99));
            _sr.Add(new StockItem("ice cream", 399));
        }

        [Test]
        public void Test_AddToCart()
        {
            List<int> ids = _sr.GetStockItemIDs();
            Cart c = new Cart();

            c.AddItem(ids.ElementAt(0));
            c.AddItem(ids.ElementAt(1));

            Assert.That(c.Size == 2);
        }
    }
}