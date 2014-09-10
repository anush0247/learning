var http = require('http');
var fs = require('fs');
//var count = 0;

http.createServer(function(request,response){
    response.writeHead(200);
    //request.pipe(response);
    var newFile = fs.createWriteStream("uploaded_jaffa.txt");
    var fileBytes = request.headers['content-length'];
    var uploadedbytes = 0;

    request.pipe(newFile);
   
    //response.write("Hello, this is bujjulu");
    //setTimeout(function(){
	//response.write("\nthats over");
	//response.end();
    //},5000);

   /* request.on('data',function(chunk){
	console.log(chunk.toString());
    });
    */

    request.on('data',function(chunk){
	uploadedbytes += chunk.length;
	var progress = (uploadedbytes / fileBytes ) * 100;
	response.write("Progress : " + parseInt(progress));
    });
    
    request.on('end',function(){
	response.end("\nUploaded!");
	//console.log("connection # "+ (count++) + " Ended");
    }); 
    
}).listen(8080);


//var file = fs.createReadStream("jaffa.txt");
//
//file.pipe(newFile);

console.log('Listening on port 8080');


