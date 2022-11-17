using StockItemNS;
using StockRepo;

namespace Cart.Tests;

public class Tests
{
    private StockRepo _sr;

    [SetUp]
    public void Setup()
    {
        _sr = new StockRepo();

        _sr.Add(new StockItem('banana', 199));
        _sr.Add(new StockItem('apples', 99));
        _sr.Add(new StockItem('coffee', 525));
        _sr.Add(new StockItem('cheese', 99));
        _sr.Add(new StockItem('ice cream', 399));
    }

    [Test]
    public void Test_AddToCart()
    {
        Assert.Pass();
    }
}
