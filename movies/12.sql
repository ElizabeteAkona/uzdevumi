-- Executing 12.sql results in a table with 1 column and 4 rows.

SELECT DISTINCT title
FROM movies

INNER JOIN stars AS s1
ON movies.id = s1.movie_id
INNER JOIN people as p1
ON s1.person_id = p1.id

INNER JOIN stars AS s2
ON movies.id = s2.movie_id
INNER JOIN people as p2
ON s2.person_id = p2.id

WHERE p1.name = "Bradley Cooper"
    AND p2.name = "Jennifer Lawrence"
