// TEST-CODE-STOCKITEM
namespace StockItemNS;

public class StockItem
{
    public string Name 		{ get; set; }
    public int ID  			{ get; set; }
    public int PricePence 	{ get; set; }

    static private int _nextID = 0;

    public StockItem(string name, int pricep)
    {
        this.ID = StockItem._nextID++;
        this.PricePence = pricep;
        this.Name = name;
    }
}
// TEST-CODE-STOCKITEM