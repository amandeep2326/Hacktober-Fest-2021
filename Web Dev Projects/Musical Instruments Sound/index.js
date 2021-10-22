for(var i=0;i<7;i++){
    
    document.querySelectorAll("button")[i].addEventListener("click",function(){
        var tt= this.innerHTML;
           Makes(tt);
           ani(tt);


    });

}
document.addEventListener("keydown",function(event){
   Makes(event.key);
ani(event.key);
});
 function Makes(te){
    switch(te){
      
        case "a":
             var adu= new Audio("sounds/0.mp3");
        adu.play();
        break;
        case "s":
               adu= new Audio("sounds/1.mp3");
        adu.play();
        break;
        case "d":
               adu= new Audio("sounds/2.mp3");
        adu.play();
        break;
        case "f":
               adu= new Audio("sounds/3.mp3");
        adu.play();
        break;
        case "g":
               adu= new Audio("sounds/4.mp3");
        adu.play();
        break;
        case "h":
               adu= new Audio("sounds/5.mp3");
        adu.play();
        break;
        case "j":
               adu= new Audio("sounds/6.mp3");
        adu.play();
        break;
    }
 }
 function ani(xd){
document.querySelector("."+xd).classList.add("pressed");
setTimeout(function() {
    document.querySelector("."+xd).classList.remove("pressed");
  },100 );

 }
