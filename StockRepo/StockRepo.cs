// package = namespace;

namespace StockRepo;

public class StockItem
{
	const int UNDEFINED = -1;

	string Name 			{ get; set; }
	public int ID  			{ get; set; }
	public int PricePence 	{ get; set; }

	public StockItem(string name, int pricep)
	{
		this.ID = UNDEFINED;
		this.PricePence = pricep;
		this.Name = name;
	}
}

public class StockRepo
{
	public void Clear()
	{
 		throw new NotImplementedException("Not Implemented");
	}
}

