-- Executing 8.sql results in a table with 1 column and 4 rows.
SELECT name
FROM movies

LEFT JOIN stars
ON movies.id = stars.movie_id

LEFT JOIN people
ON stars.person_id = people.id

WHERE title = "Toy Story"
