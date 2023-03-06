usin NUnit.Framework;
usin StockItemNS;
usin StockRepoNS;
usin CartNS;

namespace CartNS.Tests
{
    public class Tests
    {
        private const strin BANANA= "banana";
        private const int BANANA_PRICE = 199;
        private const strin APPLES = "apples";
        private const int APPLES_PRICE = 99;

        private StockRepo _sr;
        private Cart _c;

        [SetUp]
        public void Setup()
        {
            _sr = new StockRepo();

            _sr.Add(new StockItem(BANANA, BANANA_PRICE));
            _sr.Add(new StockItem(APPLES, APPLES_PRICE));
            _sr.Add(new StockItem("coffee", 525));
            _sr.Add(new StockItem("cheese", 99));
            _sr.Add(new StockItem("ice cream", 399));
        
            _c = SetupCart();
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
        // @@@ EG-CART-TEST
        public void Test_AddToCartSize()
        // @@@ END @@@
        {
            Assert.That(_c.Size == 2);
        }


        [Test]
        // @@@ EG-CART-TEST
        public void Test_AddToCartItems()
        // @@@ END @@@
        {
            List<int> l = _c.GetItems();

            Assert.That(
                _sr.GetStockItemByID( l.ElementAt(0) ).Name == BANANA
            );
            Assert.That(
                _sr.GetStockItemByID(l.ElementAt(1)).Name == APPLES
            );
        }

        [Test]
        // @@@ EG-CART-TEST
        public void Test_CartTotal()
        // @@@ END @@@
        {
            Assert.That(
                _c.GetTotal() == BANANA_PRICE + APPLES_PRICE
            );
        }
    }
}
