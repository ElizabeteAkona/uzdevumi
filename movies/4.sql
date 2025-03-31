-- Executing 4.sql results in a table with 1 column and 1 row.
SELECT count(title)
FROM movies
LEFT JOIN ratings
ON movies.id = ratings.movie_id
WHERE rating = 10.0
