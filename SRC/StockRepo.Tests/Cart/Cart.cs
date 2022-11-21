using StockItemNS;
using StockRepoNS;

namespace CartNS
{
	public class Cart
	{
		StockRepo _sr;
		List<int> _items = new List<int>();

		public Cart(StockRepo sr) { _sr = sr; }

		public int Size { get => _items.Count; }

		public void AddItem(int id) { _items.Add(id); }

		public List<int> GetItems()
		{
			return _items;
		}

		public int GetTotal()
		{ 
			int total = 0;
			foreach (var id in _items)
			{
				int cost = _sr.GetStockItemByID(id).PricePence;
				total += cost;
			}
			return total;
		} 
	}
}