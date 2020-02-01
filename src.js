

var app=angular.module('myApp',[]);
app.controller('ctrl',function($scope){
Sscope.technologies=[
{name:"C++",likes:0,dislikes:0},
{name:"C",likes:0,dislikes:0},
{name:"Java",likes:0,dislikes:0},
{name:"Python",likes:0,dislikes:0}
];
$scope.technologies=technologies;

var technologyIncreement=function(technology){
technology.likes++;
};
var technologydecreement=function(technology){
technology.dislikes++;
}
});
