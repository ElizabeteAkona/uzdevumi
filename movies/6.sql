-- Executing 6.sql results in a table with 1 column and 1 row.
SELECT AVG(rating)
FROM ratings
LEFT JOIN movies
ON movies.id = ratings.movie_id
WHERE year = 2012
