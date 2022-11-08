 /* create a nobel winner table and write sql query to solve the given problem : */


/* create nobel_win table */
create table nobel_win
(
     year int(200),
     subject varchar(200),
     winner varchar(200),
     country varchar(200),
     category varchar(200)
)

/* deta insert into nobel_win table */
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1970,'physics','hannes alfven','sweden','scientist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1970,'physics','louis neel','france','scientist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1970,'chemistry','luis federico leloir','france','scientist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1970,'physiology','ulf von euler','sweden','scientist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1970,'physiology','bernard katz','germany','scientist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1970,'literature','aleksander solzhenitsyn','russia','linguist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1970,'economics','paul samuelson ','usa','econimist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1970,'physiology','julius axelrod ','usa','scientist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1971,'physics','dennis gabor','hungary','scientist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1971,'chemistry','gerhard herzberg ','germany','scientist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1971,'peace','willy brandt','germany','chancellor');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1971,'literature','pablo neruda ','chile','linguist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1971,'economics','simon kuznets','russia','economist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1978,'peace','anwar al-sadat','egypt','president');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1978,'peace','menachem begin','israel','prime minister');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1987,'chemistry','donald j.cram ','usa','scientist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1987,'chemistry','jean-marie lehn ','france','scientist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1987,'physiology','susumu tonegawa','japan','president');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1994,'economics','reinhard selten','germany','economist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1994,'peace','yitzhak rabin','israel','prime minister');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1984,'physics','johannes georg bednorz','germany','scientist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1987,'literture','joseph brodsky','russia','linguist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1987,'economics','robert solow','usa','economist');
INSERT into nobel_win(year,subject,winner,country,category) VALUES(1994,'literature','kenzaburo oe','japan','linguist')

/* Write sql query to find the nobel prize winners of the year 1970. Return year,subject
 and winner. */
ANS : SELECT year, subject, winner FROM `nobel_win` WHERE year=1970 


/* Write sql query to find the nobel prize winners in chemistry between the years 1965
and 1975. Begin and end values are includedReturn year, subject, winner and 
country. */
ANS : SELECT * FROM `nobel_win` WHERE subject='chemistry'AND  year>1965 and year<1975


/* Write sql query to retrieve the details of the winners whose first name matches with
 the string ‘Louis’. Return year,subject,winner,country */
ANS : SELECT year,subject,winner,country FROM `nobel_win` WHERE winner LIKE '%louis%';


/* Write sql query to find Nobel prize winners for the subject that does not begin withthe  
 letter ‘P’. Order the result by year, descending and winner in ascending. */
ANS : SELECT * FROM `nobel_win` WHERE winner NOT LIKE 'p%' ORDER BY year DESC, winner ASC;


/* Write sql query to find the details of 1970 Nobel prize winners. Order the result by
subject, ascending except for ‘Chemistry’ and ‘Economics’ which will come at the 
end of the result set. Return year, subject, winner , country and category.*/
ANS : SELECT * FROM `nobel_win` WHERE year=1970 and not subject='economics'AND NOT subject='chemistry'









