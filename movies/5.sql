-- Executing 5.sql results in a table with 2 columns and 12 rows.
SELECT title, year
FROM movies
WHERE title LIKE "Harry Potter%"
ORDER BY year
