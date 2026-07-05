let btn1 = document.querySelector("#btn1");

/*btn1.onclick = (e) => {
    console.log(e);
};

let div = document .querySelector("div");
div.onmouseover = () => {
    console.log("you are inside div");
};
btn1.addEventListener("click", () =>{
    console.log("btn1 was clicked.")
}) */

    let modebtn = document.querySelector("#mode");
    let currmode = "light";

    modebtn.addEventListener("click" ,() =>{
        if(currmode === "light"){
            currmode = "dark";
            document.querySelector("body").style.backgroundColor = "black";
        } else {
            currmode = "light";
            document.querySelector("body").style.backgroundColor = "lightgreen";
        }
        console.log("My current mode = ",currmode)
    });