-- Executing 10.sql results in a table with 1 column and 3,392 rows.

SELECT name
FROM people
WHERE id IN
(
    SELECT person_id
    FROM directors
    WHERE movie_id IN
    (
        SELECT movie_id
        FROM ratings
        WHERE rating >= 9.0
    )
)
