using StockItemNS;

namespace StockRepoNS
{
	public class StockRepo
	{
		private List<StockItem> _items = new List<StockItem>();

		public void Clear()
		{
 			this._items = new List<StockItem>();
		}

		public int Size { get => _items.Count; }

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
}
