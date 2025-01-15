
CREATE TABLE sales (
    saleID INT PRIMARY KEY,
    productID INT,
    quantity INT,
    totalAmount DECIMAL(10, 2)
);

ALTER TABLE sales
ADD COLUMN region VARCHAR(50);


INSERT INTO sales (saleID, productID, quantity, totalAmount, region)
VALUES
(101, 1, 5, 100.00, 'North'),
(102, 2, 3, 150.00, 'South'),
(103, 3, 4, 200.00, 'East'),
(104, 4, 6, 300.00, 'West'),
(105, 5, 2, 50.00, 'North'),
(106, 4, 120, 8000, 'East');


SELECT region, SUM(totalAmount) AS totalAmountByRegion
FROM sales
GROUP BY region;

DELETE FROM sales
WHERE region = 'North';

UPDATE sales
SET quantity = 10
WHERE saleID = 101;

SELECT *
FROM sales
WHERE quantity > 100 AND region = 'East';

