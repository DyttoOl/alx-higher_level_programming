-- create a table called first_table in current DB
-- script should fail if the table first_table aready exists

CREATE TABLE IF NOT EXISTS first_table (id INT,
name VARCHAR(256));
