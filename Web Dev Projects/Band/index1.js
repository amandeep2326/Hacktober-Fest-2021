var numberOfDrums=document.querySelectorAll(".drum").length;
for(var i=0;i<numberOfDrums;i++)
{
  document.querySelectorAll(".drum")[i].addEventListener("click",click);
function click()
  {
    var letter=this.innerHTML;
    switch (letter) {

      case "w":
        var w=new Audio('tom-1.mp3');
        w.play();
        break;
        case "a":
          var a=new Audio('tom-2.mp3');
          a.play();
          break;
          case "s":
            var s=new Audio('tom-3.mp3');
            s.play();
            break;
            case "d":
              var d=new Audio('tom-4.mp3');
              d.play();
              break;
              case "j":
                var j=new Audio('snare.mp3');
                j.play();
                break;
                case "k":
                  var k=new Audio('crash.mp3');
                  k.play();
                  break;
                  case "l":
                    var l=new Audio('kick-bass.mp3');
                    l.play();
                    break;
      default:console.log(letter);

    }
  }
}