-- Executing 9.sql results in a table with 1 column and 18,946 rows.

SELECT DISTINCT name
FROM movies

LEFT JOIN stars
ON movies.id = stars.movie_id

LEFT JOIN people
ON stars.person_id = people.id

WHERE year = 2004
ORDER BY birth
