# URI와 웹 브라우저 요청 흐름  
## URI(Uniform Resource Identifier)
- Uniform: 리소스 식별하는 통일된 방식  
- Resource: 자원,URI로 식별할 수 있는 모든 것(제한 없음)  
- Identifier: 다른 항목과 구분하는데 필요한 정보  
## URI의 분류
URI는 로케이터(locator), 이름(name) 또는 둘 다 추가로 분류될 수 있다  
URL: Resource Locator. 리소스의 위치를 지정    
URN: Resource Name. 리소스에 이름을 부여  
URN 이름만으로 실제 리소스를 찾을 수 있는 방법이 보편화 되지 않음  
**앞으로 URI를 URL 과 같은 의미로 생각**  
![URI](https://github.com/euichanhwang/CS_study/blob/main/img/2.uri-webbrowser.pdf-5.jpg)  
## URL,URN 예시
URL: foo://example.com:8042/over/there?name=ferret#nose  
URN: urn:example:animal:ferret:nose  

## `URL 분석`
scheme://[userinfo@]host[:port][/path][?query][#fragment]//문법  
https://www.google.com:443/search?q=hello&hl=ko  




