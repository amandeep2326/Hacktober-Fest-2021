//Grab a couple of things we need
 const section= document.querySelector("section");
 const playerLivesCount= document.querySelector("span");
 let playerLives=3;

 //Link text
 playerLivesCount.textContent=playerLives;
 
 //Generate the data
 const getData =()=>[
     { imgSrc:"images/beatles.jpeg", name:"beatles"},
     { imgSrc:"images/blink182.jpeg", name:"blink 182"},
     { imgSrc:"images/card.jpeg", name:"fka twigs"},
     { imgSrc:"images/fkatwigs.jpeg", name:"fleetwood"},
     { imgSrc:"images/fleetwood.jpeg", name:"joy division"},
     { imgSrc:"images/joy-division.jpeg", name:"led zeppelin"},
     { imgSrc:"images/ledzep.jpeg", name:"metallica"},
     { imgSrc:"images/metallica.jpeg", name:"pink floyd"},
     { imgSrc:"images/beatles.jpeg", name:"beatles"},
     { imgSrc:"images/blink182.jpeg", name:"blink 182"},
     { imgSrc:"images/card.jpeg", name:"fka twigs"},
     { imgSrc:"images/fkatwigs.jpeg", name:"fleetwood"},
     { imgSrc:"images/fleetwood.jpeg", name:"joy division"},
     { imgSrc:"images/joy-division.jpeg", name:"led zeppelin"},
     { imgSrc:"images/ledzep.jpeg", name:"metallica"},
     { imgSrc:"images/metallica.jpeg", name:"pink floyd"},
     ];

     //Randomize
     const randomize=()=>{
        const cardData=getData();
        cardData.sort(()=>Math.random()-0.5);
        console.log(cardData);
        return cardData;
     };
     randomize();

     //Card Generator function
     const cardGenerator=()=>{
         const cardData =randomize();
         cardData.forEach((item, index)=>{
            const card=document.createElement("div");
            const face=document.createElement("img");
            const back=document.createElement("div");
            card.classList="card";
            face.classList="face";
            back.classList="back";
            //Attach the info to the cards
            face.src=item.imgSrc;
            card.setAttribute('name',item.name);
            //Attach the cards to the section
            section.appendChild(card);
            card.appendChild(face);
            card.appendChild(back);
            card.addEventListener("click",(e)=>{
            card.classList.toggle("toggleCard");
            checkCard(e);
            });
         });
        };
        //check Cards
        const checkCard=(e)=>{
            const clickedCard=e.target;
            clickedCard.classList.add("flipped");
            const flippedCards=document.querySelectorAll(".flipped");
            const toggleCard=document.querySelectorAll(".toggleCard");
            //Logic
            if(flippedCards.length===2){
                if(flippedCards[0].getAttribute("name")===flippedCards[1].getAttribute("name")){
                   console.log("match"); 
                   flippedCards.forEach((card)=>{
                       card.classList.remove("flipped");
                       card.style.pointerEvents="none";
                   })
                }
                else{
                    console.log("wrong");
                    flippedCards.forEach((card)=>{
                        card.classList.remove("flipped");
                        setTimeout(() => card.classList.remove("toggleCard"),1000);
                    });
                    playerLives--;
                    playerLivesCount.textContent=playerLives;
                    if(playerLives===0)
                    {restart("😃 Try Again");
                    }
                }
            }    
            if(toggleCard.length===16)
            {restart("😁 You Won");
            }
        };
        //Restart
        const restart = (text)=>{
            const cardData=randomize();
            const faces = document.querySelectorAll(".face");
            const cards = document.querySelectorAll(".card");
            section.style.pointerEvents="none";
            cardData.forEach((item,index)=>{
                cards[index].classList.remove("toggleCard");
                //Randomize
                setTimeout(()=>{
                cards[index].style.pointerEvents="all";
                faces[index].src=item.imgSrc;
                cards[index].setAttribute("name",item.name);
                section.style.pointerEvents="all";
            },1000);
        });
            playerLives=3;
            playerLivesCount.textContent=playerLives;
            setTimeout(()=>window.alert(text),1000);
        };
        cardGenerator();