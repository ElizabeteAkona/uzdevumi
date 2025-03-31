-- Executing 3.sql results in a table with 1 column and 88,918 rows.
SELECT title
FROM movies
WHERE YEAR >= 2018
ORDER BY title
