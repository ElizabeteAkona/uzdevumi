-- Executing 11.sql results in a table with 1 column and 5 rows.
SELECT title
FROM movies

LEFT JOIN ratings
ON movies.id = ratings.movie_id

LEFT JOIN stars
ON movies.id = stars.movie_id
LEFT JOIN people
ON people.id = stars.person_id

WHERE name = "Chadwick Boseman"

ORDER BY rating DESC

LIMIT 5
