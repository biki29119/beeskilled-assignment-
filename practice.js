let name = prompt("Enter your name:");
newname = "Hello ".concat( name + " welcome to javascript.");
console.log(newname);
//STUDENT PROFILE:
let student ={
    name: prompt("enter your name:"),
    age: prompt("enter your age:"),
    isgraduated: prompt("yes || no") 

};
console.log(`my name is ${student.name} & i am ${student.age} years old`);
//Question 1: The Character Counter:
let str = 'banana';
let count = 0;
let getletter = 'a';
for(let i = 0;i<str.length;i++){
    if (str[i]== getletter){
        count++;
    }
};
console.log(count);