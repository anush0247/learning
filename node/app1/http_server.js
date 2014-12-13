var http = require("http");

function incoming_request(req, res){
    console.log("INCOMING REQUEST : "+req.method+" "+req.url + " -- " + req);
    res.writeHead(200,{"Content-Type":"application/json"});
    res.end(JSON.stringify({error : null}) + "\n");
    
}

var s = http.createServer(incoming_request);
s.listen(8080);
