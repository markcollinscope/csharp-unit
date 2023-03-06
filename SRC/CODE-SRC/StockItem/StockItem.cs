// EG-CODE-STOCKITEM @@@ for extraction.
namespace StockItemNS;

public class StockItem
{
    public int ID			{ get; set; }
    public string Name 		{ get; set; }
    public int PricePence 	{ get; set; }

    static private int _nextID = 0;

    public StockItem(string name, int pricep)
    {
        this.ID = StockItem._nextID++;
        this.PricePence = pricep;
        this.Name = name;
    }
}
// @@@ END @@@
