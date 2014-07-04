(
	function(){
		var app = angular.module('store',['store-products']);

		app.controller('StoreController', ['$http',function($http){
			//this.products = gem;
			var store = this;
			store.products = [];
			$http.get('http://127.0.0.1:1234/products.json').success(function(data){
				store.products = data;
			});
		}]);

		app.controller('ReviewController',function(){
			this.review = {};
			this.addReview = function(product) {
				product.reviews.push(this.review);
				this.review = {};
			};
		});


		//vrr gem = ;

		/*app.controller('PanelController',function(){
			this.tab = 1;
			this.setTab = function(setTab){
				this.tab = setTab;
			};
			this.isSelected = function(checkTab){
				return this.tab === checkTab;
			}
		});

		var gem = [
			{
				name : 'Aneesh kumar',
				price : 20,
				description : 'some jaffa description',
				specification : 'jaffa spesification',
				reviews : 
						[{
							stars: 5,
							body: "I love this product!",
							author: "joe@thomas.com",
							color : "blue",
							terms : true,
						},
						{
							stars: 1,
							body: "This product sucks",
							author: "tim@hater.com",
							color : "red",
							terms : true,
						}],
				canPurchase : true,
				soldOut : false  
			},
			{
				name : 'Aneesh only',
				price : 21,
				description : 'some another jaffa description',
				specification : 'jaffa spesification of object two',
				reviews :   
						[{
							stars: 3,
							body: "I love this product! very badly",
							author: "joe@thomas.com",
							color : "green",
							terms : true,
						},],
				canPurchase : true,
				soldOut : false   
			}
		];*/


	}
)();