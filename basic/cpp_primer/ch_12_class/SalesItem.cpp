 using namespace std;
 #include<iostream>
 class SalesItem{
     public:
     double avgPrice() const;
     bool sameIsbn(const SalesItem &item) const
     {
         return isbn==item.isbn;
     }
//构造函数
     SalesItem(): unitsSold(0),revenue(0){}
     private:
     string isbn;
     unsigned unitsSold;
     double revenue;
 };

inline double SalesItem::avgPrice() const{
    if (unitsSold)
    {
        return revenue/unitsSold;
        
    }else{
        return 0;
    }
    
}