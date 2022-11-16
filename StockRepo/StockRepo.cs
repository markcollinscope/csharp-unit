// package = namespace;

namespace StockRepo;

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

public class StockRepo
{
	private List<StockItem> _items = new List<StockItem>();

	public void Clear()
	{
 		this._items = new List<StockItem>();
	}

	public int Size
    {
        get
        {
            return _items.Count;
        }
    }

    public void Add(StockItem si)
	{
		_items.Add(si);
	}

    public List<int> GetStockItemIDs()
	{
		List<int> l = new List<int>();
		for (int i=0; i<this._items.Count; i++)
			l.Add(this._items.ElementAt(i).ID);
		
		return l;
	}

	public StockItem GetStockItemByID(int ID)
	{
		StockItem si = _items.Find(
			item => item.ID == ID
		);
		return si;
	}
}

