select product_name,year,price
from sales
join Product
on sales.product_id=Product.product_id;