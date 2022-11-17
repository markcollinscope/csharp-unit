using NUnit.Framework;
using StockItemNS;
using StockRepoNS;
using CartNS;
using System.ComponentModel;

namespace CartNS.Tests
{

    public class Tests
    {
        private const string NANA = "banana";
        private const int NANAP = 199;
        private const string APP = "apples";
        private const int APPP = 99;

        private StockRepo _sr;

        [SetUp]
        public void Setup()
        {
            _sr = new StockRepo();

            _sr.Add(new StockItem(NANA, NANAP));
            _sr.Add(new StockItem(APP, APPP));
            _sr.Add(new StockItem("coffee", 525));
            _sr.Add(new StockItem("cheese", 99));
            _sr.Add(new StockItem("ice cream", 399));
        }

        private Cart SetupCart()
        {
            List<int> ids = _sr.GetStockItemIDs();
            Cart c = new Cart(_sr);

            c.AddItem(ids.ElementAt(0));
            c.AddItem(ids.ElementAt(1));
            return c;
        }


        [Test]
        public void Test_AddToCartSize()
        {
            Cart c = SetupCart();
            Assert.That(c.Size == 2);
        }

        [Test]
        public void Test_AddToCartItems()
        {
            Cart c = SetupCart();
            List<int> l = c.GetItems();

            Assert.That(
                _sr.GetStockItemByID( l.ElementAt(0) ).Name == NANA
            );
        }

        [Test]
        public void Test_CartTotal()
        {
            Cart c = SetupCart();
            Assert.That(
                c.GetTotal() == NANAP + APPP
            );
        }
    }
}