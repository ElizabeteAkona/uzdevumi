-- Executing 7.sql results in a table with 2 columns and 7,085 rows.
SELECT title, rating
FROM movies
LEFT JOIN ratings
ON movies.id = ratings.movie_id
WHERE year = 2010 and rating > 0
ORDER BY rating DESC, title ASC
