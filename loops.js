//FOR LOOP:
/*let sum = 0;
for (i =0;i<=100000000;i++){
    sum = sum + i;
}
console.log("sum of numbers = " ,sum);*/
/*let i = 0;
for(i =0;i <=100;i++){
    if(i %2 == 0){
        console.log("The no is:" ,i)
    }
};*/


//WHILE LOOP:
/*
let sum = 0;
let i =1;
while (i<= 20){
    sum = sum+i;
    i++;
    console.log("sum is:",sum)
};*/

let gamenum = 28;
let user = prompt("guess the number:");
while(user != gamenum){
    user= prompt("Reenter the number:");
}
console.log("Numbeer matched. congrats");