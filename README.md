# 30-2-capture-web-page-title

Request an HTML page from the server.
To do this, study the documentation about requests supported by the httpbin.org/html service.
Find a request there that returns an HTML page.
Then make the request explicitly using the accept: text/html header.
In the response you receive, find the title of the article and output it to the console.
The article title is placed between the <h1></h1> HTML tags.
To access the text of the response, you need the text method of the cpr::Response class.
To search the text for the required HTML tags, it is better to use the find method.
