# HTTP 헤더  
header-field = field-name ":" OWS field-value OWS (OWS:띄어쓰기 허용)  
```http
GET /search?q=hello&hl=ko HTTP/1.1
Host: www.google.com  
```  
```http
HTTP/1.1 200 OK
Content-Type: text/html;charset=UTF-8 
Content-Length: 3423

<html> 
  <body>...</body>
</html>
```
